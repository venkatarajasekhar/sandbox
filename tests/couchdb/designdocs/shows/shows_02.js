function(doc, req) { 
    return {
        body: '<foo>' + doc.title + '</foo>',
        header: {
            "Content-Type" : "application/xml",
            "X-MyOwn-Header": "you can set your own headers"
        }
    }
}
