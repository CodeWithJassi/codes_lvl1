#include <stdio.h>

int main() {
   char str[] = "Hello, world!";
   int i;

   for (i = 0; str[i] != '\0'; i++) {
      printf("%c", str[i]);
   }
   printf("%s", str);

   return 0;
}