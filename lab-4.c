#include <stdio.h>

#define MAX 100

void citire_recursiva(int a[], int n, int i) {
    if (i == n) return;
    scanf("%d", &a[i]);
    citire_recursiva(a, n, i + 1);
}

void afisare_recursiva(int a[], int n, int i) {
    if (i == n) return;
    printf("%d ", a[i]);
    afisare_recursiva(a, n, i + 1);
}

void afisare_negative(int a[], int n) {
    for(int i = 0; i < n; i++)
        if(a[i] < 0)
            printf("%d ", a[i]);
}

int suma_recursiva(int a[], int n) {
    if(n == 0) return 0;
    return a[n-1] + suma_recursiva(a, n-1);
}

int maxim_recursiv(int a[], int n) {
    if(n == 1) return a[0];
    int max = maxim_recursiv(a, n-1);
    return (a[n-1] > max) ? a[n-1] : max;
}

int minim_recursiv(int a[], int n) {
    if(n == 1) return a[0];
    int min = minim_recursiv(a, n-1);
    return (a[n-1] < min) ? a[n-1] : min;
}

int al_doilea_maxim(int a[], int n) {
    int max = -999999, smax = -999999;
    for(int i = 0; i < n; i++) {
        if(a[i] > max) {
            smax = max;
            max = a[i];
        } else if(a[i] > smax && a[i] != max) {
            smax = a[i];
        }
    }
    return smax;
}

void numara_pare_impare(int a[], int n) {
    int pare = 0, impare = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) pare++;
        else impare++;
    }
    printf("Pare: %d\n", pare);
    printf("Impare: %d\n", impare);
}

int numara_negative(int a[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++)
        if(a[i] < 0) count++;
    return count;
}

void copiaza(int a[], int b[], int n) {
    for(int i = 0; i < n; i++)
        b[i] = a[i];
}

void inserare(int a[], int *n, int poz, int val) {
    for(int i = *n; i > poz; i--)
        a[i] = a[i-1];
    a[poz] = val;
    (*n)++;
}

void stergere(int a[], int *n, int poz) {
    for(int i = poz; i < *n - 1; i++)
        a[i] = a[i+1];
    (*n)--;
}

int main() {
    int a[MAX], b[MAX], n, opt, poz, val;

    printf("Introduceti numarul de elemente: ");
    scanf("%d", &n);

    printf("Introduceti elementele:\n");
    citire_recursiva(a, n, 0);

    do {
        printf("\nMeniu:\n");
        printf("1. Afisare tablou\n");
        printf("2. Afisare elemente negative\n");
        printf("3. Suma elementelor\n");
        printf("4. Maxim si minim\n");
        printf("5. Al doilea maxim\n");
        printf("6. Numar pare si impare\n");
        printf("7. Numar negative\n");
        printf("8. Copiere tablou\n");
        printf("9. Inserare element\n");
        printf("10. Stergere element\n");
        printf("0. Iesire\n");
        scanf("%d", &opt);

        if(opt == 1) {
            afisare_recursiva(a, n, 0);
        } 
        else if(opt == 2) {
            afisare_negative(a, n);
        } 
        else if(opt == 3) {
            printf("Suma = %d\n", suma_recursiva(a, n));
        } 
        else if(opt == 4) {
            printf("Max = %d\n", maxim_recursiv(a, n));
            printf("Min = %d\n", minim_recursiv(a, n));
        } 
        else if(opt == 5) {
            printf("Al doilea maxim = %d\n", al_doilea_maxim(a, n));
        } 
        else if(opt == 6) {
            numara_pare_impare(a, n);
        } 
        else if(opt == 7) {
            printf("Numar negative = %d\n", numara_negative(a, n));
        } 
        else if(opt == 8) {
            copiaza(a, b, n);
            printf("Tablou copiat: ");
            afisare_recursiva(b, n, 0);
        } 
        else if(opt == 9) {
            printf("Pozitie: ");
            scanf("%d", &poz);
            printf("Valoare: ");
            scanf("%d", &val);
            inserare(a, &n, poz, val);
        } 
        else if(opt == 10) {
            printf("Pozitie: ");
            scanf("%d", &poz);
            stergere(a, &n, poz);
        }

    } while(opt != 0);

    return 0;
}
