#include <stdio.h>
#include <string.h>
struct emp
{
    char name[10];
    int qty;
    int price;
    int amt;
};
int main()
{
    struct emp s,*itm;
    itm=&s;
    printf("Enter the item name: ");
    gets(itm->name);
    printf("Enter the qty: ");
    scanf("%d",&itm->qty);
    printf("Enter the price: ");
    scanf("%d",&itm->price);
    itm->amt=itm->qty*itm->price;
    printf("********************************************************************\n");
    printf("item name: %s\nqty: %d\nprice: %d\namt: %d",itm->name,itm->qty,itm->price,itm->amt);
}
