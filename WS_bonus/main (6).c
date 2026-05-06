#include <stdio.h>

int main(void) {

   int userNum, divNum;
   scanf("%d %d", &userNum, &divNum);
   int div1 = userNum / divNum;
   int div2 = div1 / divNum;
   int div3 = div2 / divNum;

   printf("%d %d %d\n", div1, div2, div3);

   return 0;
}
