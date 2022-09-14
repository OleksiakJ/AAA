#include <stdio.h>
#include <stdlib.h>

struct elem{
    int a;
    struct elem * next;
};

struct elem* usunElement(struct elem *lista,int x)
{
    if (lista==NULL)
    {
        return NULL;
    }
    struct elem * wsk=lista;
    if (lista->a==x)
    {
        lista=lista->next;
        free(wsk);
    }
    else
    {
        while((wsk->next!=NULL)&&(wsk->next->a!=x))
        {
            wsk=wsk->next;
        }
        if (wsk->next!=NULL)
        {
            struct elem*wsk2=wsk->next;
            wsk->next=wsk2->next;
            free(wsk2);
        }
    }
    return lista;
}

struct elem* nieparzysty(struct elem* lista)
{
    struct elem* wsk=lista;
    while(wsk!=NULL)
    {
        if(wsk->a%3==0) // tu mozna bylo tez nie patrzec na ujemne (odpowied� byla uznawana)
        {
            lista=usunElement(lista,wsk->a);
            wsk=lista;
            return lista;
        }
        else
        {
            wsk=wsk->next;
        }
    }
}

void wyswietlBezGlowy(struct elem * Lista)
{
    struct elem * wsk = Lista;
    if(wsk==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(wsk!=NULL)
    {
        printf("%d, ", wsk->a);
        wsk=wsk->next;
    }
    printf("\n-------\n");
}



int main()
{
    //bez glowy
    struct elem * Lista1 = NULL; //lista pusta
    //dodanie elementu na liste bez glowy
    struct elem * wsk = malloc(sizeof(struct elem));
    wsk->a=3;
    wsk->next=NULL;
    Lista1=wsk;
    struct elem * wsk2 = malloc(sizeof(struct elem));
    wsk2->a=9;
    wsk2->next=NULL;
    Lista1->next=wsk2;
    struct elem * wsk3 = malloc(sizeof(struct elem));
    wsk3->a=6;
    wsk3->next=NULL;
    Lista1->next->next=wsk3;
    wyswietlBezGlowy(Lista1);
    struct elem * Lista2=nieparzysty(Lista1);
    wyswietlBezGlowy(Lista2);

    return 0;
}
