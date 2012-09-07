#include <libxml/tree.h>

void main() {
  xmlDocPtr doc, doc2;
  xmlNodePtr tree, subtree;

  doc = xmlNewDoc("1.0");
  doc->children = xmlNewDocNode(doc, NULL, "EXAMPLE", NULL);
  xmlSetProp(doc->children, "prop1", "gnome is great");
  xmlSetProp(doc->children, "prop2", "& linux too");
  tree = xmlNewChild(doc->children, NULL, "head", NULL);
  subtree = xmlNewChild(tree, NULL, "title", "Welcome to Gnome");
  tree = xmlNewChild(doc->children, NULL, "chapter", NULL);
  subtree = xmlNewChild(tree, NULL, "title", "The Linux adventure");
  subtree = xmlNewChild(tree, NULL, "p", "bla bla bla ...");
  subtree = xmlNewChild(tree, NULL, "image", NULL);
  xmlSetProp(subtree, "href", "linus.gif");

  FILE *fp;
  fp=fopen("createxml.xml", "w");
  xmlDocDump(fp, doc);
  fclose(fp);

}
