#include <cstdio>

using namespace std;

int main()
{
   double a, b, prom;

   scanf("%lf %lf", &a, &b);
   prom = (a * 3.5 + b * 7.5)/11;
   printf("MEDIA = %.5lf\n", prom);

   return 0;
}
