function(doc) {
    if (doc.created_at) {
        var p = doc.profile || {};                          // {} if the entry doesn't exist in the json
        var d = new Date(doc.created_at);                   // Turns a JSON date format into a date
        var a = doc.author;
        var c = doc.content;
        var t = doc.title;
        var day = d.getDate();
        var dayOfWeek = d.getDay() + 1;
        var month = d.getMonth() +1;
        var year = d.getFullYear();
        var hours = d.getHours();
        var minutes = d.getMinutes();
        var seconds = d.getSeconds();

        if (minutes <10) { 
            minutes = "0" + minutes;
        }


        var $time = hours + ":" + minutes + ":" + seconds;
        var $date = year + "/" + month + "/" + day;

        emit(doc.created_at, {
            content: c,
            title: t,
            gravatar_url : p.gravatar_url,
            nickname : p.nickname,
            date : d.toLocaleDateString(),
            time : d.toLocaleTimeString(),
            author : a,
            name : doc.name,
        });
    }
};
