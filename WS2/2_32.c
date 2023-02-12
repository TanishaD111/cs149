#include <stdio.h>

int main(void) {
   int currentPrice;
   int lastMonthsPrice;
   
   scanf("%d", &currentPrice);
   scanf("%d", &lastMonthsPrice);
   
   /* Type your code here. */
   int change = currentPrice - lastMonthsPrice;
   double mortgage = (currentPrice * 0.051) / 12;
   printf("This house is $%d. The change is $%d since last month.\n", currentPrice, change);
   printf("The estimated monthly mortgage is $%0.6lf.\n", mortgage);

   return 0;
}
