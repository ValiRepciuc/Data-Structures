//Lista dublu inlantuita

#include <stdio.h>
#include <stdlib.h>

typedef struct node{

    int number;
    struct node *next;
    struct node *prev;
}node;

void InserareInceput(node **list, int number){

    node *ninceput=malloc(sizeof(node));
    ninceput -> number=number;
    ninceput->next=(*list);
    (*list)=ninceput;
    return;
}

void InserareFinal(node **list, int number){

    node *nfinal=malloc(sizeof(node));
    node *last=(*list);
    nfinal->number=number;
    nfinal->next=NULL;
    if((*list) == NULL){
        nfinal->prev = NULL;
        (*list)=nfinal;
        return;
    }
    while (last -> next != NULL)
        last = last -> next;
    last->next = nfinal;
    nfinal->prev=last;
    return;
}

void StergereElem(node **prev_node){

    if((*prev_node) != NULL){
        node *sterge=(*prev_node);
        if(sterge->next) {
            sterge->next->prev = sterge->prev;
        }
        *prev_node = sterge->next;
        free(sterge);

    }
    return;
}

int main() {
    printf("Initilazam lista si un vector cu 4 elemente prestabilite!\n");
    node *list=NULL;
    int n, v[4]={4, 6,12,23};
    printf("Adaugam la finalul listei elementul %d.\n",v[3]);
    InserareFinal(&list,v[3]);
    printf("Adaugam la finalul listei elementul %d.\n",v[1]);
    InserareFinal(&list,v[1]);
    printf("Adaugam la inceputul listei elementul %d.\n",v[0]);
    InserareInceput(&list,v[0]);
    printf("Adaugam la inceputul listei elementul %d.\n",v[2]);
    InserareInceput(&list,v[2]);
    printf("Printam lista de elemente\n");
    for(node *tmp = list; tmp!=NULL;tmp = tmp ->next) {
        printf("%d ", tmp->number);
    }
    printf("\n");
    printf("Stergem primul element din lista\n");
    StergereElem(&list);
    printf("Printam iarasi lista de elemente");
    for(node *tmp = list; tmp!=NULL;tmp = tmp ->next) {
        printf("%d ", tmp->number);
    }
    printf("\n");
    printf("Cautam in lista elementul %d\n", v[1]);
    for(node *tmp = list; tmp!=NULL;tmp = tmp ->next) {
        if(tmp->number == v[1]){
            printf("Elementul %d a fost gasit [%d]\n",v[1], tmp->number);
        }
    }
    printf("Golim lista\n");
    while(list!=NULL){
        node *tmp=list->next;
        free(list);
        list=tmp;
    }
    printf("Sfarsitul programului!");
    return 0;
}
