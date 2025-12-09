#include <stdio.h>
#include <math.h>


void verificaAlfabet() {
    char n;
    printf("\n Introduceti un caracter: ");
    scanf(" %c", &n);
    if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
        printf("'%c' este o litera din alfabet.\n", n);
    else
        printf("'%c' NU este o litera din alfabet.\n", n);
}


void verificaPar() {
    int n;
    printf("\n Introduceti un numar: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("%d este par.\n", n);
    else
        printf("%d este impar.\n", n);
}
void NumarMaxim() {
    int a,b;
    printf("introduceti primul numar:");
    scanf("%d", &a);
     printf("introduceti al doilea numar:");
    scanf("%d", &b);
    if (a<b) 
        printf("numarul %d este mai mare", b);
     else if (a>b)
       printf("numarul %d este mai mare", a);
     else
          printf("numerele sunt egale");

    
}
void NumPozitivNegativZero() {
    int a;
   
       printf("introduceti un numar:");
       scanf("%d", &a);
       if  (a > 0) {
           printf ("numarul %d este pozitiv", a);
       } 
       else if (a < 0){
            printf ("numarul %d este negativ", a);
       } else{
           printf ("numarul %d este zero", a);
       }
       
       
}
void NumarMaxim3() {
    int a,b,c;
    printf("introduceti primul numar:");
    scanf("%d", &a);
     printf("introduceti al doilea numar:");
    scanf("%d", &b);
    printf("introduceți al treilea număr ");
    scanf("%d", &c);
    if (c && a<b) 
        printf("numarul %d este mai mare", b);
     else if (a>b && c)
       printf("numarul %d este mai mare", a);
    else if (c>b && a)
    printf("numărul %d este cel mai mare", c);
     else
          printf("numerele sunt egale");
}
void divizibil() {
    int a,b;
    printf("introduce un număr");
    scanf("%d", &a);
    if (a % 11 == 0 && a % 5 == 0)
   {
    printf("numărul %d nu este divizibil la 11 si 5", a);
   }
    else{
   printf("Numarul nu este divizibil la 11 și 5"); }
}
void verificaVocală () {
    char ch;
    printf("Introduceți o literă: ");
    scanf(" %c", &ch); 
    if (ch >= 'a' && ch <= 'z') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("'%c' este o vocală.\n", ch);
        } else {
            printf("'%c' este o consoană.\n", ch);
        }
    } else {
        printf("'%c' nu este o literă din alfabet.\n", ch);
    }
}
void AnBisect() {
    int an;
    
    printf("Introduceti anul: ");
    scanf("%d", &an);
    

    if (an % 4 == 0) {
        printf("%d este an bisect.\n", an);
    } else {
        printf("%d nu este an bisect.\n", an);
    }
}
void verificaCaracter() {
    char c;
    printf("Introduceți un caracter: ");
    scanf(" %c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("Caracterul '%c' este o literă din alfabet.\n", c);
    } else if (c >= '0' && c <= '9') {
        printf("Caracterul '%c' este o cifră.\n", c);
    } else {
        printf("Caracterul '%c' este un caracter special.\n", c);
    }
}

void verificaLitera() {
    char c;
    printf("Introduceți un caracter: ");
    scanf(" %c", &c);

    if (c >= 'A' && c <= 'Z') {
        printf("Caracterul '%c' este literă MAJUSCULĂ.\n", c);
    } else if (c >= 'a' && c <= 'z') {
        printf("Caracterul '%c' este literă minusculă.\n", c);
    } else {
        printf("Caracterul '%c' nu este literă din alfabet.\n", c);
    }
}
void triunghiUnghiuri() {
    int a,b,c;
printf("Introduceți unghiurile triunghiului: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a + b + c == 180 && a > 0 && b > 0 && c > 0)
        printf("Triunghi valid.\n");
    else
        printf("Triunghi invalid.\n");
}
void triunghiLaturi() {
    int a,b,c;
    printf("Introduceți laturile triunghiului: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a + b > c && a + c > b && b + c > a)
        printf("Triunghi valid.\n");
    else
        printf("Triunghi invalid.\n");
}

void tipTriunghi() {
int a,b,c;
    printf("Introduceți laturile triunghiului: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && b == c)
        printf("Triunghi echilateral.\n");
    else if(a == b || b == c || a == c)
        printf("Triunghi isoscel.\n");
    else
        printf("Triunghi scalen.\n");
}
void ziuaSaptamanii() {
    int nr;
    printf("Introduceți ziua săptămânii: ");
    scanf("%d", &nr);
    if(nr == 1) printf("Luni\n");
    else if(nr == 2) printf("Marți\n");
    else if(nr == 3) printf("Miercuri\n");
    else if(nr == 4) printf("Joi\n");
    else if(nr == 5) printf("Vineri\n");
    else if(nr == 6) printf("Sâmbătă\n");
    else if(nr == 7) printf("Duminică\n");
    else printf("Număr invalid!\n");
}
void zileLuna() {
    int luna;
    printf("Introduceți luna: ");
    scanf("%d", &luna);
    if(luna == 1 || luna == 3 || luna == 5 || luna == 7 || luna == 8 || luna == 10 || luna == 12)
        printf("31 zile\n");
    else if(luna == 4 || luna == 6 || luna == 9 || luna == 11)
        printf("30 zile\n");
    else if(luna == 2)
        printf("28 sau 29 zile (an bisect)\n");
    else
        printf("Lună invalidă!\n");
}
void ecuatie(){
      int a, b, c;
   float discriminant, radacina1, radacina2;
    printf("Introduceti coeficientul a: ");
    scanf("%d", &a);
    printf("Introduceti coeficientul b: ");
    scanf("%d", &b);
    printf("Introduceti coeficientul c: ");
    scanf("%d", &c);

discriminant = b * b - 4 * a * c;
if (discriminant > 0){
    radacina1 = (-b-sqrt(discriminant)) / (a*2);
    radacina2 = (-b+sqrt(discriminant)) / (a*2);
    printf("radacinele ecuatiei sunt %f si %f", radacina2, radacina1);
} else if (discriminant == 0){
 radacina1 = -b / (a*2);
 printf("radacina este %f", radacina1);
} else {
    printf("discriminantul este negativ");
}
}
int main() {
    int n;

    printf("Alege programul de rulat:\n");
    printf("1. Verificare alfabet\n");
    printf("2. Verificare par/impar\n");
    printf("3. Verificare numărul maxim\n");
    printf("4. Verificare dacă numărul este negativ/pozitiv/zero\n");
    printf("5. Maximum din 3 cifre\n");
    printf("6. Numarul divizibil cu 5 și 11\n");
    printf("7. Verificare daca este vocală sau consoană\n");
    printf("8. Verificare an bisect\n");
    printf("9. Verifica daca este literă, cifră sau caracter special\n");
    printf("10. Verificare literă mare/mică\n");
    printf("11. Triunghi după unghiuri\n");
    printf("12. Triunghi după laturi\n");
    printf("13. Tip triunghi\n");
    printf("14. Ziua săptămânii\n");
    printf("15. Zilele din lună\n");
    printf("16. ecuatie de gradul 2\n");
    printf("Optiune: ");
    scanf("%d", &n);

        if (n == 1)
        verificaAlfabet();
        else if (n == 2)
        verificaPar();
        else if (n == 3)
        NumarMaxim();
        else if (n == 4)
        NumPozitivNegativZero();
        else if (n == 5) 
        NumarMaxim3();
        else if (n == 6)
        divizibil();
        else if (n == 7)
        verificaLitera();
        else if (n == 8)
        AnBisect();
        else if (n == 9)
        verificaCaracter();
        else if (n == 10)
        verificaVocală();
        else if (n == 11)
        triunghiUnghiuri();
        else if (n == 12)
        triunghiLaturi();
        else if (n == 13)
        tipTriunghi();
        else if (n == 14)
        ziuaSaptamanii();
        else if (n == 15)
        zileLuna();
        else if (n == 16)
        ecuatie();
       
    return 0;
}