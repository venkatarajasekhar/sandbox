#include <stdio.h>
#include <stdlib.h>

struct node {
  int x;
  struct node *p_next;
};

int main()
{
    /* This won't change, or we would lose the list in memory */
    struct node *p_root;       
    /* This will point to each node as it traverses the list */
    struct node *p_conductor;  

    p_root = malloc( sizeof(struct node) );  
    p_root->p_next = 0;   
    p_root->x = 12;
    p_conductor = p_root; 
    if ( p_conductor != 0 ) {
        while ( p_conductor->p_next != 0)
        {
            p_conductor = p_conductor->p_next;
        }
    }
    printf("Creates a node at the end of the list\n");
    p_conductor->p_next = malloc( sizeof(struct node) );  

    p_conductor = p_conductor->p_next; 

    if ( p_conductor == 0 )
    {
        printf( "Out of memory" );
        return 0;
    }
    /* initialize the new memory */
    printf("Append 42!\n");
    p_conductor->p_next = 0;         
    p_conductor->x = 42;

    printf("Printing list\n");
    p_conductor = p_root;
    while ( p_conductor != NULL ) {
      printf( "%d\n", p_conductor->x );
      p_conductor = p_conductor->p_next;
    }

    return 0;
}

