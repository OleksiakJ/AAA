#include <stdio.h>
#include <stdlib.h>
struct elem {
int z;
struct elem * next;
};

void foo(struct elem * lista, int a)
{
    struct elem*wsk=lista->next;
    while(wsk!=NULL)
    {
        wsk->z *=a;
        wsk=wsk->next;
    }
}
void wypisz(struct elem * lista)
{
    struct elem*wsk=lista->next;
    while(wsk!=NULL)
    {
        printf("%d\n",wsk->z);
        wsk=wsk->next;
    }
    printf("---\n");
}
int main()
{
    struct elem * lista = malloc(sizeof(struct elem));
    lista->next=malloc(sizeof(struct elem));
    lista->next->z=5;
    lista->next->next=malloc(sizeof(struct elem));
    lista->next->next->z=-3;
    lista->next->next->next=NULL;
    wypisz(lista);
    foo(lista,-4);
    wypisz(lista);
    return 0;
}
//Zad.4. Napisz funkcjê, która przyjmuje jako argument listê z g³ow¹ o elementach typu:
//struct elem {
//int z;
//struct elem * next;
//};
//oraz liczbê ca³kowit¹ a.
//Funkcja ma pomno¿yæ wszystkie elementy na liœcie przez a. W przypadku pustej listy funkcja ma nic nie
//robiæ. Stwórz przypadek testowy.
