#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int num;                        
    struct node *next;        
}*head,*last;
void createNodeList(int n);
void displayList(); 
int main()
{
    int n,item,items;
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list : \n");
    displayList();
    printf("Enter the item to insert in the beggining:\n ");
    scanf("%d",&item);
    beginsert(item);
    printf("Enter the item to insert in the end:\n ");
    scanf("%d",&items);
    endinsert(items);
    randominsert();
    deletebeg();
    printf("List from the last:\n ");
    displayListlast();
    printf("List from the beginning;\n");
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
        head->prev= NULL;
        head->next = NULL;
        tmp = head;
        last=head;
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
                current->prev= last;
                current->next = NULL;
                last->next = current;
                last = current;
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
void displayListlast()
{
    struct node *temp;
    if (last == NULL)
    {
        printf("empty list");
    }
    else
    {
        temp=last;
        while(temp != NULL)
        {
            printf("Date = %d\n",temp->num);
            temp=temp->prev;
        }
        
    }
}
void beginsert(int item)  
    {  
        struct node *tmp=head;
        struct node *ptr = (struct node *)malloc(sizeof(struct node *));  
        if(ptr == NULL)  
        {  
            printf("\nmemory not allocated\n");  
        }  
        else  
        {  
            ptr->num = item;  
            ptr->prev=NULL;
            head->prev=ptr;
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
                ptr1->prev= NULL;
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
                ptr1->prev = temp;
                last=ptr1;
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
        printf("\nmemory not allocated\n");
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
        temp->next->prev=ptr;
        ptr ->next = temp ->next;
        ptr->prev=temp;
        temp ->next = ptr;  
        printf("\ndone\n");  
    }
}
void deletebeg()
{
    struct node *ptr;
    if(head == NULL)
    printf("\nempty list\n");
    else if(head->next == NULL)
    {
        head= NULL;
        last=NULL;
        free(ptr);
    }
    else
    {
        ptr=head;
        head=head->next;
        head->prev=NULL;
        free(ptr);
    }
}
