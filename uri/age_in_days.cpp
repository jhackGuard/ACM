#include <cstdio>

using namespace std;

int main()
{
   int time, year, month;

   scanf("%d", &time);
   year = time / 365;
   time = time % 365;
   month = time / 30;
   time = time % 30;
   printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, time);
   
   return 0;
}
