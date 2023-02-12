#include <stdio.h>

int main(void) {

   /* Type your code here. */
   int x;
   int x2;
   int x3;
   scanf("%d", &x);
   scanf("%d", &x2);
   scanf("%d", &x3);
   if(x <= x2 && x <= x3) {
      printf("%d\n", x);
   } else if(x2 <= x && x2 <= x3) {
      printf("%d\n", x2);
   } else {
      printf("%d\n", x3);
   }
   
   return 0;
}



