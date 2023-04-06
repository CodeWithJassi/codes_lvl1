#include <stdio.h>
int main(){
    int x, y, a, b, g, i, j;
    puts("for verification of ");
    puts("!(x < 5) && !(y >= 7)  is equivalent to !((x < 5) || (y >= 7))\n");
    puts("!(a == b) || !(g != 5)  is equivalent to !((a == b) && (g != 5))\n");
    puts("!((x <= 8) && (y > 4))  is equivalent to !(x <= 8) || !(y > 4)\n");
    puts("!((i > 4) || (j <= 6))  is equivalent to !(i > 4) && !(j <= 6)\n");
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the value of y : ");
    scanf("%d", &y);
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("Enter the value of g : ");
    scanf("%d", &g);
    printf("Enter the value of i : ");
    scanf("%d", &i);
    printf("Enter the value of j : ");
    scanf("%d", &j);

    puts(((!(x < 5) && !(y >= 7)) == (!((x < 5) || (y >= 7)))) ? "equals" : "not equal");
    puts(((!(a == b) || !(g != 5)) == (!((a == b) && (g != 5)))) ? "equals" : "not equal");
    puts(((!((x <= 8) && (y > 4))) == (!(x <= 8) || !(y > 4))) ? "equals" : "not equal");
    puts(((!((i > 4) || (j <= 6))) == ((!(i > 4) && !(j <= 6)))) ? "equals" : "not equal");



    return 0;
}



// !(x < 5) && !(y >= 7)    
// !(a == b) || !(g != 5)
// !((x <= 8) && (y > 4))
// !((i > 4) || (j <= 6))

// !((x < 5) || (y >= 7)) 
// !((a == b) && (g != 5))
// !(x <= 8) || !(y > 4)
// !(i > 4) && !(j <= 6)