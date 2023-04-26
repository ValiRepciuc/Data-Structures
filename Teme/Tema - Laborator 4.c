//1.1 Pentru o matrice pătratică de ordin n ( 1 ≤ n ≤ 100) să se afişeze elementele aflate  pe diagonală principală.

#include <stdio.h>

#include <stdio.h>

int main() {
    int m[100][100], n, i, j;
    do{
        scanf("%d",&n);
        if(n <= 1 || n >= 100) 
            printf("Va rugam sa introduceti un ordin al matricei cuprins intre 1 si 100, inclusiv acestea. Multumesc!\n");
    }while(n <= 1 || n >= 100);
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                scanf("%d", &m[i][j]);


        }
        printf("Elementele de pe diagonala principala sunt:");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                if (i == j)
                    printf(" %d", m[i][j]);
        }
        printf(".");
    return 0;
}

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.2 Pentru o matrice pătratică de ordin n ( 1 ≤ n ≤ 100) calculaţi suma elementelor de pe diagonala secundară.


#include <stdio.h>

int main() {
    int m[100][100], n, i, j, suma = 0;
    do{
        scanf("%d",&n);
        if(n <= 1 || n >= 100)
            printf("Va rugam sa introduceti un ordin al matricei cuprins intre 1 si 100, inclusiv acestea. Multumesc!\n");
    }while(n <= 1 || n >= 100);
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                scanf("%d", &m[i][j]);


        }
        printf("Suma elementelor de pe diagonala secundara este:");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                if (i + j == n - 1)
                    suma += m[i][j];
        }
        printf("%d.", suma);
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.3 Pentru o matrice pătratică de ordin n ( 1 ≤ n ≤ 100) număraţi elementele nule de sub diagonala secundară.

#include <stdio.h>

int main() {
    int m[100][100], n, i, j, en = 0;
    do{
        scanf("%d",&n);
        if(n <= 1 || n >= 100)
            printf("Va rugam sa introduceti un ordin al matricei cuprins intre 1 si 100, inclusiv acestea. Multumesc!\n");
    }while(n <= 1 || n >= 100);
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                scanf("%d", &m[i][j]);


        }
        printf("Numarul de elemente nule de sub diagonala principala este de: ");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                if (i > j && m[i][j] == 0)
                    en++;
        }
        printf("%d.", en);
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.4 Pentru o matrice pătratică de ordin n ( 1 ≤ n ≤ 100) calculaţi media aritmetică a elementelor de deasupra diagonalei principale


#include <stdio.h>

int main() {
    int m[100][100], n, i, j, ma = 0, suma = 0, nr = 0;
    do{
        scanf("%d",&n);
        if(n <= 1 || n >= 100)
            printf("Va rugam sa introduceti un ordin al matricei cuprins intre 1 si 100, inclusiv acestea. Multumesc!\n");
    }while(n <= 1 || n >= 100);
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                scanf("%d", &m[i][j]);


        }
        printf("Media artimetica a elementelor de deasupra elementelor de pe diagonala principala este: ");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                if (i < j) {
                    nr++;
                    suma += m[i][j];
                    ma = suma / nr;
                }
        }
        printf("%d.", ma);
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.5 Ducând cele două diagonale într-o matrice pătratică se obţin patru zone triunghiulare. Afişaţi suma componentelor din interiorul fiecărei zone.

#include <stdio.h>

int main() {
    int m[100][100], n, i, j, N = 0, S = 0, V = 0, E = 0;
   do{
        scanf("%d",&n);
        if(n <= 1 || n >= 100)
            printf("Va rugam sa introduceti un ordin al matricei cuprins intre 1 si 100, inclusiv acestea. Multumesc!\n");
    }while(n <= 1 || n >= 100);
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                scanf("%d", &m[i][j]);


        }
        printf("Prima zona triunghiulara are suma elementelor egala cu: ");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                if (i < j && i + j < n - 1) {
                    N += m[i][j];
                } else if (i < j && i + j > n - 1) {
                    E += m[i][j];
                } else if (i > j && i + j > n - 1) {
                    S += m[i][j];
                } else if (i > j && i + j < n - 1) {
                    V += m[i][j];
                }
        }
        printf("%d.\n", N);
        printf("A doua zona triunghiulara are suma elementelor egala cu: %d.\n", E);
        printf("A treia zona triunghiulara are suma elementelor egala cu: %d.\n", S);
        printf("A patra zona triunghiulara are suma elementelor egala cu: %d.\n", V);
    return 0;
}
