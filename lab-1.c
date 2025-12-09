#include <stdio.h>   
#include <math.h>    
#include <stdlib.h>  

int main() {
    
    int i = 10, j = 3, r = 5;
    double x = 15.5, y = 2.5, z = 7.2;
    float a, b, c, p, A;
    char l;

printf("introduceti un caracter\n");
    scanf("%c", &l);
    printf("Codul ascii al literei este: %d\n", l);

    printf("\nARIA TRIUNGHIULUI\n");
    printf("introduceți 3 laturi a triunghiului\n");
scanf("%f %f %f", &a, &b, &c);
p=(a+b+c)/2;
    A=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("aria triunghiului este %f\n",A);


printf("\nOPERATORI ARITMETICI\n");
    
    printf("++j = %d\n", ++j);
    printf("--r = %d\n", --r);
    printf("Restul impartirii %d %% %d = %d\n", i, j, i % j);

    
    printf("\nFUNCTII MATEMATICE\n");
    
    
    printf("sqrt(%g) = %g\n", x, sqrt(x));
    printf("pow(%g, %g) = %g\n", x, y, pow(x, y));
    printf("log(%g) = %g\n", x, log(x));
    printf("abs(%d) = %d\n", -i, abs(-i));
    printf("sin(%g) = %g\n", x, sin(x));
    printf("cos(%g) = %g\n", x, cos(x));
    
    printf("\nOPERATORI LOGICI SI DE COMPARATIE\n");
    
    
    printf("%d < %d = %d\n", i, j, i < j);
    printf("%g > %g = %d\n", x, y, x > y);
    printf("%d <= %d = %d\n", i, r, i <= r);
    printf("%g >= %g = %d\n", x, y, x >= y);
    printf("%d == %d = %d\n", i, j, i == j);
    printf("%d != %d = %d\n", i, j, i != j);
    
    
    printf("(%d < %d) && (%g > %g) = %d\n", i, j, x, y, (i < j) && (x > y));
    printf("(%d > %d) || (%g < %g) = %d\n", i, j, x, y, (i > j) || (x < y));
    
    return 0;
}