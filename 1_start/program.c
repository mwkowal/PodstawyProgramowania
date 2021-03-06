/* -*- mode: C; compile-command: "gcc program.c -o program; ./program" -*- */

/*
Aby program się kompilował:
- Odkomentuj dyrektywy '#include' znajdujące się w liniach 7-11
- Zastąp każde wystąpienie 'plikNagłówkowyNr{N}.h' nazwą konkretnego, wymaganego pliku nagłówkowego
*/

 #include <stdio.h>
 #include <complex.h>
 #include <float.h>
 #include <stdbool.h>
 #include <stdlib.h>

 #include <time.h>

int main()
{

  /* Przykład ze strony 'https://valgrind.org/docs/manual/quick-start.html'*/
    /*int* x = malloc(10 * sizeof(int));
    x[10] = 0;*/
    bool zywy = true;
    printf("\e[31mZmienna 'zywy' ma wartość:\e[0m %d\n", zywy);

    srand(time(NULL));
    int n = rand();
    printf("\e[31mWylosowano liczbę:\e[0m %d\n", n);
    n = n % 10;
    printf("\e[31mWylosowana liczba modulo 10 =\e[0m %d\n", n);
    switch (n)
    {
    case 1 ... 5:
        printf("\e[31mOtrzymana wartość należy do przedziału od 1 do 5\e[0m\n");
        break;
    case 9:
        printf("\e[31mOtrzymano wartość 9\e[0m\n");
        break;
    default:
        printf("\e[31mOtrzymana wartość nie należy do przedziału od 1 do 5 oraz jest różna od 9\e[0m\n");
    }

    int iloczyn = 1;
    /*   for (int i = n; i > 0; i--)
    {
       iloczyn = iloczyn * i;
      printf("\e[31m%d \e[0m", i);
    }*/
    printf("\e[31mStart\n");
    printf("\e[31mWartość iloczynu:\e[0m %d\n", iloczyn);

    double a, b, c, d;
    printf("\e[31mObliczanie (a+bi)+(c-di)\e[0m\n");
    printf("\e[31mPodaj wartość współczynników: a,b,c oraz d: \e[0m");
    if (scanf("%lf%lf%lf%lf", &a, &b, &c, &d) < 4)
    {
        printf("\n\e[31mPodałeś(aś) zbyt mało liczb\e[0m\n");
        return 1;
    }
    /* double complex z1 = a + b * I;
    double complex z2 = c - d * I;
    double complex suma = z1 + z2;
    printf("\e[31m(%.1f+%.1fi) + (%.1f-%.1fi)  =\e[0m %.1f%+.1fi\n", a, b, c, d, creal(suma), cimag(suma));
    */
    /* https://www.geeksforgeeks.org/_generic-keyword-c/ */
    #define cbrt(x) _Generic((x), long double: cbrtl, \
                                      default: cbrt, \
                                        float: cbrtf)(x)

    /* https://www.geeksforgeeks.org/g-fact-38-anonymous-union-and-structure/ */
    struct T
    {
        int tag;
        union {
            float x;
            int n;
        };
    };

    return 0;}




