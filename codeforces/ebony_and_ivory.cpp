#include <cstdio>

using namespace std;

int main()
{
   int a, b, c, res, cont = 0;

   scanf("%d %d %d", &a, &b, &c);
   for(int i = 0; i <= c; i++)
   {
      res = c - a * i;
      if(res >= 0 && res % b == 0)
	 cont++;
   }
   if(cont != 0)
      printf("Yes");
   else
      printf("No");

   return 0;
}
