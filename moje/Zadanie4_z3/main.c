#include <stdio.h>
#include <stdlib.h>

struct node{
    int a;
    struct node * next;
};

int ilenieparzystych(struct node * lista)
{
    struct node * wsk=lista->next;
    int licznik=0;
    while(wsk!=NULL)
    {
        if(wsk->a%2 !=0)
        {
            licznik++;
        }
        wsk=wsk->next;
    }
    return licznik;
}
int foo(struct node * lista1, struct node * lista2)
{
   if(ilenieparzystych(lista1) == ilenieparzystych(lista2))
        return 1;
   return 0;
}
int main()
{
 struct node * l1 = malloc(sizeof(struct node));
 l1->next=malloc(sizeof(struct node));
 l1->next->a=3;
 l1->next->next=malloc(sizeof(struct node));
 l1->next->next->a=-4;
 l1->next->next->next=malloc(sizeof(struct node));
 l1->next->next->next->a=-72;
 l1->next->next->next->next=NULL;
 struct node * l2 = malloc(sizeof(struct node));
 l2->next=malloc(sizeof(struct node));
 l2->next->a=9;
 l2->next=NULL;
 printf("%d\n",foo(l1,l2));
 return 0;
}
//Zad.4. Napisz funkcj�, kt�ra przyjmuje jako argumenty dwie listy z g�ow� o elementach typu:
//struct node {
//int a;
//struct node * next;
//};
//Funkcja ma zwr�ci� 1 je�li obie listy maj� po tyle samo element�w nieparzystych oraz 0 w przeciwnym
//wypadku. Stw�rz przypadek testowy.
