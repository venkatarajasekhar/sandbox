#include <string.h>
#include <stdio.h>

#define VAL_1X     5
#define VAL_2X     VAL_1X,  VAL_1X
#define VAL_4X     VAL_2X,  VAL_2X
#define VAL_8X     VAL_4X,  VAL_4X
#define VAL_16X    VAL_8X,  VAL_8X
#define VAL_32X    VAL_16X, VAL_16X
#define VAL_64X    VAL_32X, VAL_32X


void swap (int *x, int *y)
{
  int tmp;
  tmp = *y;
  *y = *x;
  *x = tmp;
}

void
main() 
{
  int *p_i = 0;
  char p_buffer[10];
  char *mode = "r";
  char outputFilename[] = "out.list";
  char outputFilename2[] = { 'a', 'b', 'c' };
  const int arraySize = 5;

  int p_array0[10] = { VAL_8X, VAL_2X };
  int p_array1[10] =  { [0 ... 9] = 5 };			// with gcc only !
  int p_array2[10] =  { 5, 5, 5, 5, 5, 5, 5, 5, 5, 5 };
  int p_array3[10] = { 1, 2 }; 					// initialize to 1,2,0,0,0...
  int p_array4[10] = { 0 }; 					// all element 0

  int p_array5[10];						// all elements as-is !
  static int p_array6[10]; 					// all elements 0

  //char p_array7[arraySize] = { 'a', 'b', 'c', 'd', 0 };	// <-- doesn't like this is C, but ok in C++ !
  char p_array7[5] = { 'a', 'b', 'c', 'd', 0 };			// one string with individual elements

  int p_array8[2][2] = {{1,2}, {3,4}};

  p_array7[arraySize-1] = '\0';
  printf("len p_array7 = %d\n", strlen(p_array7));

  printf("sizeof(int p_array1[10]) = 10 * sizeof(int) = 10 * %d = %d\n", sizeof(int), sizeof(p_array1));

  printf("n element in p_array1 = sizeof(array) / sizeof(array[0]) = %d / %d = %d\n", sizeof(p_array1), sizeof(p_array1[0]), sizeof(p_array1)/sizeof(p_array1[0]) );

  /* And that "0" doesn't necessarily mean "all-bits-zero", so using the above is better and more portable than memset(). 
   * (Floating point values will be initialized to +0, pointers to null value, etc.)
   */

  char str[20] = "Hello!\0";					// Force the terminaison

  p_i = p_array3;

  printf("0:%d 1:%d 2:%d\n", *p_i, *(p_i+1), *(p_i+2));



  memset(p_buffer, 0 , sizeof(p_buffer));

  strcpy(p_buffer,"123");

  printf("%s\n", p_buffer);

  printf("0:%d 1:%d 2:%d 3:%d 4:%d 5:%d 6:%d\n", p_array0[2], p_array1[2], p_array2[2], p_array3[2], p_array4[2], p_array5[2], p_array6[2]);

  int a = 10;
  int b = 20;
  printf("a:%d b:%d\n", a, b);
  swap(&a, &b);
  printf("a:%d b:%d\n", a, b);



}
