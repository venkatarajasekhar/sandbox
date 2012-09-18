// Apache 2.0 J Chris Anderson 2011
$(function() {   
    // friendly helper http://tinyurl.com/6aow6yn
    $.fn.serializeObject = function() {
        var o = {};
        var a = this.serializeArray();
        $.each(a, function() {
            if (o[this.name]) {
                if (!o[this.name].push) {
                    o[this.name] = [o[this.name]];
                }
                o[this.name].push(this.value || '');
            } else {
                o[this.name] = this.value || '';
            }
        });
        return o;
    };

    var path = unescape(document.location.pathname).split('/'),                     // declare 3 vars = 3 parts of URL
        design = path[3],
        db = $.couch.db(path[1]);
    function drawItems() {                                                          // drawItem function definition
        db.view(design + "/recent-items", {                                         // query database with view
            descending : "true",
            limit : 50,                                                             // view paramters
            update_seq : true,
            success : function(data) {                                              // callback function to run with query results
                setupChanges(data.update_seq);
                var them = $.mustache($("#recent-messages").html(), {               // build html using mustache
                    items : data.rows.map(function(r) {return r.value;})
                });
                $("#content").html(them);                                           // insert the html in the page
            }
        });
    };
    drawItems();                                                                    // call drawItem function defined above
    var changesRunning = false;
    function setupChanges(since) {
        if (!changesRunning) {
            var changeHandler = db.changes(since);
            changesRunning = true;
            changeHandler.onChange(drawItems);
        }
    }
    $.couchProfile.templates.profileReady = $("#new-message").html();
    $("#account").couchLogin({
        loggedIn : function(r) {
            $("#profile").couchProfile(r, {
                profileReady : function(profile) {
                    $("#create-message").submit(function(e){
                        e.preventDefault();
                        var form = this, doc = $(form).serializeObject();           // serialize form (name: value)
                        doc.created_at = new Date();                                // add creation date to doc
                        doc.profile = profile;                                      // save creator's profile in doc
                        db.saveDoc(doc, {success : function() {form.reset();}});    // write new doc (in JSON format) in database
                        return false;
                    }).find("input").focus();                                       // put focus on input/linedit
                }
            });
        },
        loggedOut : function() {
            $("#profile").html('<p>Please log in to see your profile.</p>');        // if not logged in, then display this message
        }
    });
 });
