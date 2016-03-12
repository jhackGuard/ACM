#include <cstdio>

using namespace std;

int main()
{
   int emp, sueldo;
   double wh, res;

   scanf("%d %d %lf", &emp, &sueldo, &wh);
   res = sueldo * wh;
   printf("NUMBER = %d\nSALARY = U$ %.2lf\n", emp, res);

   return 0;
}
