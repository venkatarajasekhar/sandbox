#include <stdio.h>
#include <stdlib.h>

#define ROWS	2
#define COLS	3

void printArray(int [][3]);				// protoype

int main () 
{

    int p_array1[ROWS][COLS] = {{1,2,3}, {4,5,6}};
    int p_array2[ROWS][COLS] = {1,2,3,4};
    int p_array3[ROWS][COLS] = {{1,2}, {4}};

    printf("p_array1\n");
    printArray(p_array1);

    printf("p_array2\n");
    printArray(p_array2);

    printf("p_array3\n");
    printArray(p_array3);

    return EXIT_SUCCESS;
}

void printArray(int a[][COLS])
{
    int i;
    int j;

    for(i=0;i<ROWS;++i)
    {
        for(j=0; j<COLS; ++j)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
