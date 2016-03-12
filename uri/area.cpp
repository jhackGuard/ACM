#include <cstdio>

#define PI 3.14159

using namespace std;

int main()
{
   double a, b, c, tri, cir, tra, qua, ret;

   scanf("%lf %lf %lf", &a, &b, &c);
   tri = (a * c)/2;
   cir = PI * c * c;
   tra = (a + b) * c / 2;
   qua = b * b;
   ret = a * b;
   printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\n", tri, cir, tra);
   printf("QUADRADO: %.3lf\nRETANGULO: %.3lf\n", qua, ret);

   return 0;
}
