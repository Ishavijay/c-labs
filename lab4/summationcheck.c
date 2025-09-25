#include <stdio.h>
#include <math.h>

int main() {
double x;
printf("Enter a value for x (|x| < 1): ");
scanf("%lf", &x);
if (x <= -1.0 || x >= 1.0) {
printf("Invalid input. Please ensure |x| < 1.\n");
return 1;
}else{
double actual = 1.0 / (1.0 - x);
double psum= 0.0;
double term = 1.0; // first term (x^0 = 1)
int n = 0;
while ((psum - actual > 0.01) || (actual - psum > 0.01)) {
psum += term;
term = term * x; // next term
n++;
}
printf("value of/smallest n= %d",n-1);}

return 0;
}
