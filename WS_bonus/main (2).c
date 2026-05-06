#include <stdio.h>

int main(void) {
   int baseInt;
   int headInt;
   char *str = "    ";
   
   scanf("%d %d", &baseInt, &headInt);
   printf("%s%d\n", str, headInt);
   printf("%s%d%d\n", str, headInt, headInt);

   for (int i = 0; i < 4; i++) {
      printf("%d", baseInt);
   }
   for (int i = 0; i < 3; i++) {
      printf("%d", headInt);
   }
   printf("\n");
   for (int i = 0; i < 4; i++) {
      printf("%d", baseInt);
   }
   for (int i = 0; i < 4; i++) {
      printf("%d", headInt);
   }
   printf("\n");
   for (int i = 0; i < 4; i++) {
      printf("%d", baseInt);
   }
   for (int i = 0; i < 3; i++) {
      printf("%d", headInt);
   }
   printf("\n");
   printf("%s%d%d\n", str, headInt, headInt);
   printf("%s%d\n", str, headInt);
   return 0;
}
