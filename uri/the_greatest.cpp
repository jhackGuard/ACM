#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
   int a, b, c, may;

   scanf("%d %d %d", &a, &b, &c);
   may = max(a, b);
   may = max(c, may);
   printf("%d eh o maior\n", may);

   return 0;
}
