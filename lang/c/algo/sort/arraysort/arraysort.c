#include <stdio.h>
#include <stdlib.h>


#define SIZE 10


int main()
{
   int p_array[SIZE] = { 43, 56, 4, 10, 77, 51, 93, 30, 5, 52};
   int valueToInsert;

   int next;
   int indexOfWhereToInsert;
   int i;

   printf("Unsorted array : \n");
   for (i = 0; i < SIZE; i++) 
       printf("%d ", p_array[i]);
   printf("\n");


   for (next=1; next < SIZE; ++next) 
   {
       valueToInsert = p_array[next];
       indexOfWhereToInsert = next;


       while( (indexOfWhereToInsert>0) && (p_array[indexOfWhereToInsert -1] > valueToInsert ))
       {
           // shift right all the value which are above the valueToInsert
           p_array[indexOfWhereToInsert] = p_array[indexOfWhereToInsert-1];
           indexOfWhereToInsert--;
       }
       p_array[indexOfWhereToInsert] = valueToInsert;    // insert value into array

   }

   printf("\nSorted array\n");

   for (i=0; i<SIZE; i++)
       printf("%d ", p_array[i]);
   printf("\n");
   
}
