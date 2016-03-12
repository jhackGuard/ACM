#include <cstdio>

#define PI 3.14159

using namespace std;

int main()
{
   int rad;
   double vol;

   scanf("%d", &rad);
   vol = (4/3.0) * PI * rad * rad * rad;
   printf("VOLUME = %.3lf\n",vol);

   return 0;
}
