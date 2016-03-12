#include <cstdio>

using namespace std;

int main()
{
   int dist;
   double gas, cons;

   scanf("%d %lf", &dist, &gas);
   cons = dist / gas;
   printf("%.3lf km/l\n", cons);

   return 0;
}
