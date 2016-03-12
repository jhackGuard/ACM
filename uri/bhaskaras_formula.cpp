#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
   double a, b, c, disc, r1, r2;

   scanf("%lf %lf %lf", &a, &b, &c);
   disc = pow(b, 2.0) - 4 * a * c;
   if(disc >= 0 && a != 0)
   {
      r1 = (-b + sqrt(disc)) / (2.0 * a);
      r2 = (-b - sqrt(disc)) / (2.0 * a);
      printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
   }
   else
      printf("Impossivel calcular\n");
   return 0;
}
