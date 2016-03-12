#include <cstdio>

#define N 1000

using namespace std;

int main()
{
   char nome [N];
   double sal, com, tot;

   scanf("%s %lf %lf", &nome, &sal, &com);
   tot = sal + com * 0.15;
   printf("TOTAL = R$ %.2lf\n", tot);   

   return 0;
}
