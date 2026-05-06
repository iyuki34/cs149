#include <stdio.h>

int main(void) {
   int userNum;
   
   printf("Enter integer:\n");
   scanf("%d", &userNum);
   /* Type your code here. */
   printf("You entered: %d\n", userNum);
   int square = userNum*userNum;
   int cube = square*userNum;
   printf("%d squared is %d\n", userNum, square);
   printf("And %d cubed is %d!!\n", userNum, cube);

   int newNum;
   printf("Enter another integer:\n");
   scanf("%d", &newNum);
   int sum = newNum + userNum;
   int product = newNum * userNum;
   printf("%d + %d is %d\n", userNum, newNum, sum);
   printf("%d * %d is %d\n", userNum, newNum, product);
   return 0;
}