#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
   double a, b, c, d, dis;

   scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
   dis = sqrt(pow(a - c, 2.0) + pow(b - d, 2.0));
   printf("%.4lf\n", dis);

   return 0;
}
