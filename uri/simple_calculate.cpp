#include <cstdio>

using namespace std;

int main()
{
   int unit, code, cont = 2;
   double price, total = 0;

   while(cont--)
   {
   	scanf("%d %d %lf", &code, &unit, &price);
	total = total + unit * price;
   }
   printf("VALOR A PAGAR: R$ %.2lf\n", total);

   return 0;
}
