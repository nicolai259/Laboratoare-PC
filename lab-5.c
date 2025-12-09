#include <stdio.h> 

#include <string.h> 

#include <ctype.h> 

 

void numarConsoane() { 

    char text[300]; 

    int i, consoane = 0; 

 

    printf("Introduceti un sir: "); 

    getchar(); 

    fgets(text, sizeof(text), stdin); 

 

    for (i = 0; text[i] != '\0'; i++) { 

        char c = tolower(text[i]); 

        if (isalpha(c)) { 

            if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')) { 

                consoane++; 

            } 

        } 

    } 

    printf("Numar total de consoane: %d\n", consoane); 

} 

 

void numarCuvinte() { 

    char text[300]; 

    int i, cuvinte = 0, inCuvant = 0; 

 

    printf("Introduceti un sir: "); 

    getchar(); 

    fgets(text, sizeof(text), stdin); 

 

    for (i = 0; text[i] != '\0'; i++) { 

        if (!isspace(text[i]) && inCuvant == 0) { 

            inCuvant = 1; 

            cuvinte++; 

        }  

        else if (isspace(text[i])) { 

            inCuvant = 0; 

        } 

    } 

    printf("Numar total de cuvinte: %d\n", cuvinte); 

} 

 

void inversareSir() { 

    char text[300]; 

    int i, len; 

 

    printf("Introduceti un sir: "); 

    getchar(); 

    fgets(text, sizeof(text), stdin); 

 

    text[strcspn(text, "\n")] = '\0'; 

    len = strlen(text); 

 

    printf("Sir inversat: "); 

    for (i = len - 1; i >= 0; i--) { 

        printf("%c", text[i]); 

    } 

    printf("\n"); 

} 

 

void verificarePalindrom() { 

    char text[300]; 

    int i, len, k = 1; 

 

    printf("Introduceti un sir: "); 

    getchar(); 

    fgets(text, sizeof(text), stdin); 

 

    text[strcspn(text, "\n")] = '\0'; 

    len = strlen(text); 

 

    for (i = 0; i < len / 2; i++) { 

        if (text[i] != text[len - i - 1]) { 

            k = 0; 

            break; 

        } 

    } 

 

    if (k) 

        printf("Sir PALINDROM\n"); 

    else 

        printf("Sir nu este palindrom\n"); 

} 

 

int main() { 

    int p; 

 

    printf("1. Numarare consoane\n"); 

    printf("2. Numarare cuvinte\n"); 

    printf("3. Inversare sir\n"); 

    printf("4. Verificare palindrom\n"); 

    printf("Alege optiunea: "); 

    scanf("%d", &p); 

 

    if (p == 1) 

        numarConsoane(); 

    else if (p == 2) 

        numarCuvinte(); 

    else if (p == 3) 

        inversareSir(); 

    else if (p == 4) 

        verificarePalindrom(); 

    else 

        printf("Optiune invalida\n"); 

 

    return 0; 

}  

  
