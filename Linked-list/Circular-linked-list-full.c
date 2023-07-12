
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int num;                        
    struct node *next;        
}*head;
void createNodeList(int n);
void displayList();
int main()
{
    int n,item,items;
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\nData entered in the list : \n");
    displayList();
    printf("\nEnter the first element : \n");
    scanf("%d",&item);
    beginsert(item);
    printf("\nEnter the last element : \n");
    scanf("%d",&items);
    endinsert(items);
    randominsert();
    beg_delete();
    last_delete();
    deletePos ();
    search();
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
                current->next = head;
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
        do
        {
            printf(" Data = %d\n", tmp->num);      
            tmp = tmp->next;                      
        }while(tmp != head);
    }
}
void beginsert(int item)  
    {  
        struct node *temp,*ptr = (struct node *)malloc(sizeof(struct node *));  
        if(ptr == NULL)  
        {  
            printf("\nmemory not allocated\n");  
        }  
        else  
        {  
            ptr->num = item;    
            if(head == NULL)    
            {    
                head = ptr;    
                ptr -> next = head;    
            }    
            else    
            {      
                temp = head;    
                while(temp->next != head)    
                temp = temp->next;    
                ptr->next = head;    
                temp -> next = ptr;    
                head = ptr;    
            }
            printf("\n%d Insterted at the beg\n",item);  
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
                ptr1 -> next = head;  
                head = ptr1;  
                printf("\n%d Insterted at the end\n",items);  
            }  
            else  
            {  
                temp = head;  
                while (temp -> next != head)  
                {  
                    temp = temp -> next;  
                }  
                temp->next = ptr1;  
                ptr1->next = head;
                printf("\n%d Insterted at the end\n",items);
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
        printf("\nEnter element value to place at some place : \n");  
        scanf("%d",&item);  
        ptr->num = item;  
        printf("\nEnter the location after which you want to insert:\n ");  
        scanf("\n%d",&loc);  
        temp=head;  
        for(i=0 ;i<loc-1 ;i++)  
        {  
            temp = temp->next;  
            if(temp == NULL)  
            {  
                printf("\nEmpty list\n");          
               return;  
            }  
         
        }  
        ptr ->next = temp ->next;  
        temp ->next = ptr;  
        printf("\n%d Insterted at the %d place\n",item,loc);
    }
}
void beg_delete()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("empty list\n");      
    }  
    else if(head->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("deleted at the beginning\n");
    }  
     
    else  
    {    
        ptr = head;  
        while(ptr -> next != head)  
            ptr = ptr -> next;  
        ptr->next = head->next;  
        free(head);  
        head = ptr->next;
        printf("deleted at the beginning\n");
    }  
}  
void last_delete()  
{  
struct node *ptr, *preptr;    
    if(head==NULL)  
    {  
        printf("empty list");
    }  
    else if (head ->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("deleted at the end\n");
    }  
    else  
    {  
        ptr = head;  
        while(ptr ->next != head)  
        {  
            preptr=ptr;  
            ptr = ptr->next;  
        }  
        preptr->next = ptr -> next;  
        free(ptr);
        printf("deleted at the end\n");
    }  
}  
void deletePos ()
{

  int n;
  printf("enter the position of the node: ");
  scanf("%d",&n);
  int size = calcSize (*head);

  if (n < 1 || size < n)
    {
      printf ("Can't delete, %d is not a valid position\n", n);
    }
  else
    {
      struct node *tempNode = head;
      struct node *previous;
      while (--n)
{
 previous = tempNode;
 tempNode = tempNode->next;
}

      previous->next = tempNode->next;
      free (tempNode);
    }
}
int calcSize ()
{
  int size = 0;
  struct node *temp = head;

  if (temp == NULL)
    return size;

  do
    {
      size++;
      temp = temp->next;

    }
  while (temp != head);

  return size;
}
void search()
{
    int n,i=1;
    struct node *tmp=head;
    printf("enter item to search: ");
    scanf("%d",&n);
    while((tmp->next!=head)&&(tmp->num!=n))
    {
        tmp=tmp->next;
        i++;
    }
    printf("the item is at %d location\n",i);
}
