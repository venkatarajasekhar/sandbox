#include <stdio.h>


int main()
{

  const int i = 3;

  typedef enum { false, true } bool;				// bool type doesn't exist in C

  enum BOOLEAN 
  {
    FALSE,							// note that you cannot reuse false and true as defined about ! 
    TRUE							// use upper case to show that the enum vars are not variables
  };

  typedef enum BOOLEAN BOOL;


  enum BOOLEAN bool1 = FALSE;
  BOOL bool2 = TRUE;

  bool bool3 = FALSE;

  printf("FALSE=%d TRUE=%d\n", bool1, bool2);





  enum DAY            /* Defines an enumeration type    */
  {
    saturday,       /* Names day and declares a       */	// staturday = 0  by default!!!
    sunday = 5,     /* variable named workday with    */ 	// sunday = 5 explicitly !!!
    monday,         /* that type                      */	// monday = 6
    tuesday = 0,						// tuesday = 0
    wednesday,      /* wednesday is associated with 3 */	// 1
    thursday,							// 2
    friday							// 3
  } workday;							// any value 

  enum DAY today = monday;

  printf("%d %d\n", workday, today);				// workday not initialized

}

