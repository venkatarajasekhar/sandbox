#include <libxml/tree.h>
#include <string.h>

/*
 * A person record
 */
typedef struct person {
    char *name;
    char *email;
    char *company;
    char *organisation;
    char *smail;
    char *webPage;
    char *phone;
} person, *personPtr;

/*
 * And the code needed to parse it
 */
personPtr parsePerson(xmlDocPtr p_doc, xmlNsPtr p_ns, xmlNodePtr p_cur) {
    personPtr p_ret = NULL;

    /*
    DEBUG("parsePerson\n");
    */

    /*
     * allocate the struct
     */
    p_ret = (personPtr) malloc(sizeof(person));
    if (p_ret == NULL) {
        fprintf(stderr,"out of memory\n");
        return(NULL);
    }
    memset(p_ret, 0, sizeof(person));

    /* We don't care what the top level element name is */
    p_cur = p_cur->xmlChildrenNode;
    while (p_cur != NULL) {
        if ((!strcmp(p_cur->name, "Person")) && (p_cur->ns == p_ns))
            p_ret->name = xmlNodeListGetString(p_doc, p_cur->xmlChildrenNode, 1);
        if ((!strcmp(p_cur->name, "Email")) && (p_cur->ns == p_ns))
            p_ret->email = xmlNodeListGetString(p_doc, p_cur->xmlChildrenNode, 1);
        p_cur = p_cur->next;
    }

    return(p_ret);
}

void main() {
    xmlDocPtr p_doc;
    xmlNsPtr p_ns;         /* name space */
    xmlNsPtr *p_pns;
    xmlNodePtr p_cur;
    xmlNodePtr p_root_element;

    person person1, *p_person1;
    

    FILE *fp;
    fp=fopen("parsexml.xml", "r");
    fclose(fp);

    p_doc = xmlParseFile("parsexml.xml");

    xmlDocDump(stdout, p_doc);

    p_root_element = xmlDocGetRootElement(p_doc);

    p_pns = xmlGetNsList(p_doc, p_root_element);

    if (p_pns != NULL) {
    
      p_ns = *p_pns;
      /*

      p_person1 = parsePerson(p_doc, p_ns, p_cur);
    
      if (p_person1==NULL)
          printf("Null");
      else
          printf ("Ok");
     */
    }

    /*
     * Free the document
     */
    xmlFreeDoc(p_doc);
    
}
