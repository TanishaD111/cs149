#include <stdio.h>

int main(void) {

   /* Type your code here. */
   int x;
   int x2;
   printf("");
   scanf("%d", &x);
   scanf("%d", &x2);
   printf("%d %d %d\n", x / x2, x / (x2 * x2), x / (x2 * x2 * x2));
   
   return 0;
}

