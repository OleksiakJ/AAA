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
//Zad.4. Napisz funkcj�, kt�ra przyjmuje jako argument list� z g�ow� o elementach typu:
//struct elem {
//int z;
//struct elem * next;
//};
//oraz liczb� ca�kowit� a.
//Funkcja ma pomno�y� wszystkie elementy na li�cie przez a. W przypadku pustej listy funkcja ma nic nie
//robi�. Stw�rz przypadek testowy.
