function (newDoc, oldDoc, userCtx) {
    function require(field, message) {
        message = message || "Document mist have a " + field;
        if (!newDoc[field]) throw({forbidden: message});
    };

    if (newDoc.type == "post") {
        require("title");
        require("created_at");
        require("body");
        require("author");
    }

    if (newDoc.type == "comment") {
        require("name");
        require("created_at");
        require("comment", "You may not leave an empty comment");
    }
}
