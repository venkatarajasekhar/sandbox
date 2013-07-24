#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

static void usage(const char *name);

int main(int argc, char **argv) 
{
    /* Parse command line and process file */
    if (argc != 4) {
	fprintf(stderr, "Error: wrong number of arguments.\n");
	usage(argv[0]);
	return(-1);
    } 
    
}

/**
 * usage:
 * @name:		the program name.
 *
 * Prints usage information.
 */
static void usage(const char *name) 
{
    assert(name);
    
    fprintf(stderr, "Usage: %s <xml-file> <xpath-expr> <value>\n", name);
}


