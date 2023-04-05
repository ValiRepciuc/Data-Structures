//3.1. Să se citească de la tastatură n numere întregi, cu 1 < n < 50 şi să se memoreze într-un vector.
//Calculaţi numărul de elemente nule din vector.

#include <stdio.h>

int main()
{
    int v[50], n, nrt=0;
    printf("Introdu n = "); scanf("%d.",&n);
    if(1<n && n<50){
        for(int i=0; i<n;i++){
            printf("v[%d] = ",i);
            scanf("%d.",&v[i]);
            if(v[i]!=0){
                nrt=nrt + 1;
            }
        }
        printf("Numarul total de elemente nenule este: %d", nrt);
    }
    else {
        printf("Va rog introduceti un numar cuprins inte 1 si 50.");
    }
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//3.2. Să se citească de la tastatură n numere întregi, cu 1 < n < 50 şi să se memoreze într-un vector.
//Calculaţi valoarea maximă din vector.

#include <stdio.h>

int main()
{
    int v[50], n, valmax;
    printf("Introdu n\n");
    do{
        scanf("%d",&n);
        if(n<1 || n>50)
            printf("Va rog introduceti o valoare intre 1 si 50.\n");
        }while(1<n && n>50);

        for(int i=0; i<n;i++){
            printf("\nv[%d] = ",i);
            scanf("%d.",&v[i]);
            valmax=valmax + v[i];

        }
        printf("\nValoarea maxima a vectorului v[%d] este: %d", n, valmax);

    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//3.3. Să se citească de la tastatură n numere întregi, cu 1 < n < 50 şi să se memoreze într-un vector.
//Afişaţi poziţiile pe care se află valoarea minimă din vector.

#include <stdio.h>

int main()
{
    int v[50], n, minim=0, index=0;
    printf("Introdu n =");

    do{
        scanf("%d",&n);
        if(n<1 || n>50)
            printf("\nVa rog introduceti o valoare intre 1 si 50.\n");
    }while(1<n && n>50);

    for(int i=0; i<n;i++){
        printf("\nv[%d] = ",i);
        scanf("%d",&v[i]);
        minim=v[0];
        }
        for(int i=0; i<n; i++){
            if(v[i]<minim){
                minim=v[i];
                index=i;
            }
        }
        if(index == 0){
            printf("\nPozitia pe care se afla cel mai mic element din vectorul v[%d] este prima pozitie", n);
        }
        else
            printf("\nPozitia pe care se afla cel mai mic element din vectorul v[%d] este pozitia cu numarul: %d. ",n , index);

    return 0;
}
                   
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                   
                   
//3.4. Să se citească de la tastatură n numere întregi, cu 1 < n < 100 şi să se memoreze într-un vector.
//Afişaţi numerele stocate în vector  în ordinea inversă memorării acestora.
                   
#include <stdio.h>

int main()
{
    int v[100], n;
    printf("Introdu n = ");
    do{
        scanf("%d",&n);
        if(n<1 || n>100)
            printf("\nVa rog introduceti o valoare intre 1 si 100.\n");
    }while(1<n && n>100);

    for(int i=0; i<n;i++){
            printf("\nv[%d] = ",i);
            scanf("%d",&v[i]);
        }
        for(int i=n-1;i>=0;i--){
            printf("\nv[%d] = %d ",i, v[i]);
        }

    return 0;
}
                   
                   
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                
                   
                   
//3.5. Se introduc succesiv numere până la întâlnirea lui 0, dar nu mai multe de 1000.
//Să se memoreze numerele introduse într-un vector şi să se calculeze media lor aritmetică.
                   
#include <stdio.h>

int main()
{
    int v[1000], suma=0, nrt=0, ma, i;
    for(i=0;i<1000;i++){
        printf("\nValoarea pentru v[%d] = ",i);
        scanf("%d",&v[i]);
        if(v[i]==0){
            break;
        }
        suma=suma+v[i];
        nrt+=1;
    }
    ma=suma/nrt;
    printf("\nMedia aritmetica dupa introducerea a %d numere este de: %d", i, ma);
    return 0;
}
                   
                   
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                 
                   
                   
//3.6. Se introduc succesiv numere până la întâlnirea lui 0, dar nu mai multe de 100. 
//Să se memoreze numerele introduse într-un vector şi să se calculeze numărul de elemente pare.


                   
#include <stdio.h>

int main()
{
    int v[100], nrp=0, i;
    for(i=0;i<100;i++){
        printf("\nValoarea pentru v[%d] = ",i);
        scanf("%d",&v[i]);
        if(v[i]==0){
            break;
        }
        if(v[i]%2==0)
            nrp++;
    }
    printf("\nDin %d numere introduse doar %d sunt pare",i ,nrp);
    return 0;
}
