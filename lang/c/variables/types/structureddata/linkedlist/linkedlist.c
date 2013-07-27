#include <stdlib.h>

struct node {
  int x;
  struct node *p_next;
};

int main()
{
    /* This will be the unchanging first node */
    struct node *p_root;      

    /* Now root points to a node struct */
    p_root = malloc( sizeof(struct node) ); 

    /* The node root points to has its next pointer equal to a null pointer set */
    p_root->p_next = 0;  

    /* By using the -> operator, you can modify what the node, a pointer, (root in this case) points to. */
    p_root->x = 5;     
}
