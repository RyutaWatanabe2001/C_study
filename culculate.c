#include <stdio.h>

double avg(double a, double b) {
  double c = (a + b) / 2.0;
  return c;
}

int main(void)
{
    double d1, d2, d3;
    double x = 1.2, y = 3.4, z = 5.4;
    //同じ計算が3回
    d1 = avg(x,y);
    d2 = avg(9.3,8.3);
    d3 = avg(z,x);
    printf("d1 = %f,d2 = %f,d3 = %f\n", d1,d2,d3 );

    return 0;

}
