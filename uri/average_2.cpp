#include <cstdio>

using namespace std;

int main()
{
   double a, b, c, prom;

   scanf("%lf %lf %lf", &a, &b, &c);
   prom = (a * 2 + b * 3 + c*5)/10;
   printf("MEDIA = %.1lf\n", prom);

   return 0;
}
