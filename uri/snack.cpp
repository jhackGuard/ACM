#include <cstdio>

using namespace std;

int main()
{
   int code, cant;
   double price, total;

   scanf("%d %d", &code, &cant);
   switch(code)
   {
      case 1:
      	price = 4.0;
	break;
      case 2:
      	price = 4.5;
        break;
      case 3:
      	price = 5.0;
	break;
      case 4:
      	price = 2.0;
	break;
      case 5:
      	price = 1.5;
	break;
   }
   total = cant * price;
   printf("Total: R$ %.2lf\n", total);

   return 0;
}
