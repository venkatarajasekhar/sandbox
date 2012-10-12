function (newDoc, oldDoc, userCtx) {
    function unchanged(filed) {
        if (oldDoc && toJSON(oldDoc[field]) != toJSON(newDoc[field]))
            throw({forbidden: "Field can't be changed: " + field});
    }
    unchanged("created_at");
}
