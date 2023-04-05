
//2.1 Să se verifice dacă un număr este palindrom (un număr este palindrom dacă este egal cu inversul său, 
//de exemplu, 1221, 2332, 7, 313 sunt palindrom).

#include <stdio.h>

int main()
{
    int x, aux, palindrom=0,rest=0;
    scanf("%d",&x);
    aux=x;
    while(aux!=0){
        rest=aux%10;
        aux=aux/10;
        palindrom=palindrom*10+rest;
    }
    if(palindrom==x){
        printf("Numarul %d este palindrom!",palindrom);
    }
    else{
        printf("Numarul %d nu este palindrom",x);
    }
    
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~



//2.2 Să se citească de la tastatură un număr natural n şi o cifră k. Eliminaţi din număr cifra k. De exemplu,
//dacă se introduc n = 121157 şi k = 1, trebuie să rezulte numărul 257.

#include <stdio.h>

int main(){
    
    int n, k, aux=0, z=1;
    printf("Alegeti un numar de la tastatura "); scanf("%d",&n);
    printf("Introduceti ce numar doriti sa fie eliminat din acesta "); scanf("%d",&k);
    while(n!=0){
        if(n%10!=k){
            
            aux=aux+(n%10)*z;
            
            z*=10;
        }
        
        n/=10;
    }
    
    printf("Numarul ales s-a transformat in %d",aux);
    
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//2.3 Să se afişeze toate numerele impare cuprinse între 21 şi 70. 

#include <stdio.h>

int main(){
    
    int x=70;
    printf("Numerele impare cuprinse între 21 şi 70 sunt");
    while(x>=21){
        if(x%2==1){
            printf(" %d",x);
        }
        x=x-1;
    }
    printf(".");
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//2.4. Să se genereze si sa se afiseze toate numerele de forma 3xx3 care sunt divizibile cu 3.

#include <stdio.h>

int main(){
    
    int x=3993;
    printf("Numerele de forma 3xx3 care sunt divizibile sunt:");
    while(x>=3003){
        if(x%3==0){
            printf(" %d",x);
        }
        x-=10;
    }
    printf(".");
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//2.5. Să se afişeze toate perechile de numere x şi y cu proprietatea  x + y = 150, x este divizibil cu 7 şi y cu 11

#include <stdio.h>

int main(){
    
    int x,y;
    
    printf("Toate perechile de numere x si y cu proprietatea x+y=150, x divizibil cu 7 si y cu 11 sunt:");
    for(x=0;x<=147;x+=7)
        for(y=0;y<=143;y+=11)
            if(x+y==150){
                printf(" (%d;%d)",x,y);
            }
    printf(".");
    
    return 0;
    
    
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//2.6. Să se afişeze toţi divizorii naturali ai unui număr natural n.

#include <stdio.h>

int main(){
    
    int x;
    printf("Introduceti un numar natural: "); scanf("%d",&x);
    printf("Toti divizorii naturali ai numarului %d sunt:",x);
    for(int i=1; i<=x; i++){
        if(x%i==0){
            printf(" %d",i);
        }
    }
    printf(".");
    return 0;
 
}
