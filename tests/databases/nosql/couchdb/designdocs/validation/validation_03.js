function(newDoc, oldDoc, userCtx) {
    if (newDoc.author) {
        enforce(newDoc.author == userCtx.name, 
            "You may only update documents with author " + userCtx.name);
    }
}
