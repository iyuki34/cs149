#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
   double x;
   double y;
   double z;

   /* Type your code here. Note: Include the math library above first. */
   scanf("%lf %lf %lf", &x, &y, &z);
   double x_z = pow(x, z);
   double x_y_2 = pow(x, pow(y, 2));
   double abs_y = fabs(y);
   double sqr_root = sqrt(pow(x*y, z));
   printf("%0.2lf %0.2lf %0.2lf %0.2lf\n", x_z, x_y_2, abs_y, sqr_root);
   

   return 0;
}
