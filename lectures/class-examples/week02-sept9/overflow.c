#include <stdio.h>
#include <unistd.h>

int main() {
   unsigned int a = 0;
   for (a = 5; a >= 0; a--) {
      printf("Message! %d\n", a);
      sleep(1);
   }   
   return 0;
} 


