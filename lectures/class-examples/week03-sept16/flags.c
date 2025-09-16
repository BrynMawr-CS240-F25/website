#include <stdio.h>

#define WATER 0x01 // mask that corresponds to the least significant bit
#define WINE 0x02 //mask corresponds to the second least significant bit
#define DINNER_ROLL 0x04
#define SALAD 0x08
#define SOUP 0x10
#define MAIN 0x20
#define DESSERT 0x40
#define COFFEE 0x80

int main()
{
  unsigned char flags = WATER | WINE | SALAD | MAIN;
  printf("%x\n", flags);

  unsigned char flag2 = 0x31;
  if (flag2 & WATER) printf("water\n");
  if (flag2 & WINE) printf("wine\n");
  if (flag2 & DINNER_ROLL) printf("dinner roll\n");
  if (flag2 & SALAD) printf("salad\n");
  if (flag2 & SOUP) printf("soup\n");
  if (flag2 & MAIN) printf("main\n");
  if (flag2 & COFFEE) printf("coffee\n");
  if (flag2 & DESSERT) printf("desert\n");
  return 0;
}

