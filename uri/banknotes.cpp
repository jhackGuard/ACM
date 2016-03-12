#include <cstdio>

using namespace std;

int main()
{
   int note, cien, cinc, vein, diez, five, dos, res;

   scanf("%d", &note);
   cien = note / 100;
   res = note % 100;
   cinc = res / 50;
   res = res % 50;
   vein = res / 20;
   res = res % 20;
   diez = res / 10;
   res = res % 10;
   five = res / 5;
   res = res % 5;
   dos = res / 2;
   res = res % 2;
   printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n", note, cien, cinc);
   printf("%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n", vein, diez);
   printf("%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", five, dos, res);

   return 0;
}
