#include <stdio.h>
#include <stdlib.h>

struct element {
int a;
struct element * next;
};
//funckja pomocnicza
struct element * usunpom(struct element* lista, int x)
{
    struct element * wsk, *wsk2;
    if(lista == NULL)
        return lista;
    wsk = lista;
    if(lista->a == x)
    {
        lista=lista->next;
        free(wsk);
    }
    else
    {
        while((wsk->next != NULL) && (wsk->next->a != x))
        {
            wsk=wsk->next;
        }
        if(wsk->next!=NULL)
        {
            wsk2=wsk->next;
            wsk->next =wsk2->next;
            free(wsk2);
        }
    }
    return lista;
};

void wypisz(struct element* lista)
{
    if(lista==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(lista!=NULL)
    {
        printf("%d\n",lista->a);
        lista=lista->next;
    }
    printf("-------\n");
}
//funckja z polecenia
struct element* usun(struct element* lista)
{
    struct element* wsk=lista;
    while(wsk!=NULL)
    {
        if(wsk->a %2 !=0)
        {
            lista=usunpom(lista,wsk->a);
            wsk=lista;
        }
        else
        {
            wsk=wsk->next;
        }
    }
    return lista;
}

int main()
{
struct element * lista = malloc(sizeof(struct element));
lista->a =23;
lista->next=malloc(sizeof(struct element));
lista->next->a =923;
lista->next->next=malloc(sizeof(struct element));
lista->next->next->a=1292;
lista->next->next->next=NULL;
wypisz(lista);
lista=usun(lista);
wypisz(lista);
}

//Zad.4. Napisz funkcjê, która przyjmuje jako argument listê bez g³owy o elementach typu:
//struct element {
//int a;
//struct element * next;
//};
//Funkcja ma usun¹æ z listy elementy nieparzyste (o ile istniej¹). Stwórz przypadek testowy.
