#include <stdio.h>

typedef float float32_t;

typedef struct {
  float32_t x;
  float32_t y;
  float32_t z;
} point, *pointPtr;

struct _point_ {
  float32_t X;
  float32_t Y;
  float32_t Z;
};

/* Note that the structure definition does NOT allocate storage space for POINTED VALUES */

void main () 
{
  struct _point_ dot_plot, p_plot[100], *p_dot_plot;

  point dot1 = {.y = 24.0, .z=55.0};
  pointPtr p_dot1;

  point dot2;
  pointPtr p_dot2;

  dot1.x = 18.0;

  p_dot1 = &dot1;

  printf("x=%f\n", dot1.x);
  printf("y=%f\n", p_dot1->y);

  *p_dot2 = dot1;

  printf("z=%f\n", p_dot2->z);

  p_plot[23].X = 33;
  p_plot[24].Y = 34;
  p_plot[25].Z = 35;
  dot_plot = p_plot[24];
  p_dot_plot = &p_plot[25];

  printf("X:%f Y:%f Z:%f\n", p_plot[23].X, dot_plot.Y, p_dot_plot->Z);


}

