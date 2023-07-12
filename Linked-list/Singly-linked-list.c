
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int num;                        
    struct node *next;        
}*head;
void createNodeList(int n);
void displayList();  
void beginsert(int );
void endinsert(int );
int main()
{
    int n,item,items;
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list : \n");
    displayList();
    printf("\nEnter the item which you want to insert?\n");  
    scanf("%d",&item);  
    beginsert(item);
    printf("\nEnter the item which you want to insert?\n");  
    scanf("%d",&items);  
    endinsert(items);
    randominsert();
    displayList();
}
void createNodeList(int n)
{
    struct node *current, *tmp;
    int num, i;
    head = (struct node *)malloc(sizeof(struct node));

    if(head == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {

        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        head->num = num;      
        head->next = NULL;
        tmp = head;
        for(i=2; i<=n; i++)
        {
            current = (struct node *)malloc(sizeof(struct node));
            if(current == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
                current->num = num;      
                current->next = NULL;
                tmp->next = current;
                tmp = tmp->next;
            }
        }
    }
}
void displayList()
{
    struct node *tmp;
    if(head == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = head;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->num);      
            tmp = tmp->next;                      
        }
    }
}
void beginsert(int item)  
    {  
        struct node *ptr = (struct node *)malloc(sizeof(struct node *));  
        if(ptr == NULL)  
        {  
            printf("\nmemory not allocated\n");  
        }  
        else  
        {  
            ptr->num = item;  
            ptr->next = head;  
            head = ptr;  
            printf("\ndone\n");  
        }  
         
    }
void endinsert(int items)
{
    struct node *ptr1 = (struct node *)malloc(sizeof(struct node *));
    struct node *temp;
        if(ptr1 == NULL)  
        {  
            printf("\nmemory not allocated\n");  
        }
        else  
        {  
            ptr1->num = items;  
            if(head == NULL)  
            {  
                ptr1 -> next = NULL;  
                head = ptr1;  
                printf("\ndone\n");  
            }  
            else  
            {  
                temp = head;  
                while (temp -> next != NULL)  
                {  
                    temp = temp -> next;  
                }  
                temp->next = ptr1;  
                ptr1->next = NULL;  
                printf("\ndone\n");  
             
            }  
        }  
}
void randominsert()  
{  
    int i,loc,item;  
    struct node *ptr, *temp;  
    ptr = (struct node *) malloc (sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("\nEnter element value");  
        scanf("%d",&item);  
        ptr->num = item;  
        printf("\nEnter the location after which you want to insert ");  
        scanf("\n%d",&loc);  
        temp=head;  
        for(i=0 ;i<loc ;i++)  
        {  
            temp = temp->next;  
            if(temp == NULL)  
            {  
                printf("\nlol\n");          
               return;  
            }  
         
        }  
        ptr ->next = temp ->next;  
        temp ->next = ptr;  
        printf("\ndone");  
    }  
}  
