#ifndef _MATH_H
#define _MATH_H 1

// above this is called the header guard 


#define UP 1
#define DOWN 0

#if defined __STRICT_ANSI__ && !defined __NO_MATH_INLINES
# define __NO_MATH_INLINES      1
#endif

#ifdef __cplusplus
#define TOTO 1
# else
#define TATA 1
# endif


#ifdef DEFINE_VARIABLES
#define EXTERN                  extern
#define INIT_SIMPLE(x)          /* nothing */
#define INIT_COMPLEX(x, ...)    /* nothing */
#else
#define EXTERN                  /* nothing */
#define INIT_SIMPLE(x)          = x
#define INIT_COMPLEX(x, ...)    = x, __VA_ARGS__
#endif /* DEFINE_VARIABLES */

EXTERN int global_variable INIT_SIMPLE(37);
EXTERN struct { int a; int b; } oddball_struct INIT_COMPLEX({ 41, 43 });





#endif /* math.h  */

