#include <cstdio>

using namespace std;

int main()
{
   int dist, vel;
   double cons;

   scanf("%d %d", &dist, &vel);
   cons = (dist * vel) / 12.0;
   printf("%.3lf\n", cons);

   return 0;
}
