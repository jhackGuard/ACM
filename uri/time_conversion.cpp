#include <cstdio>

using namespace std;

int main()
{
   int time, hor, min, seg;

   scanf("%d", &time);
   seg = time % 60;
   time = time / 60;
   min = time % 60;
   hor = time / 60;
   printf("%d:%d:%d\n", hor, min, seg);

   return 0;
}
