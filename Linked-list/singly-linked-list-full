
#include<stdio.h>
#include<stdlib.h>

// self-referential structure                       
struct listNode {                                      
   int data; // each listNode contains a int 
   struct listNode *nextPtr; // pointer to next node
}; // end structure listNode                        

typedef struct listNode ListNode; // synonym for struct listNode
typedef ListNode *ListNodePtr; // synonym for ListNode*

// prototypes
void insert_beg(ListNode **sPtr,int item); 
void printList( ListNodePtr sPtr);
int isEmpty( ListNodePtr sPtr );
int delete( ListNode **sPtr, int value );

void avgList( ListNodePtr sPtr);
int delNode( ListNode **sPtr, int nodenum );
void reverseList( ListNode *sPtr);
void insertafterelement(ListNode **sPtr, int item,int after);
void swap(ListNode **sPtr, int index1, int index2);

void insert_end(ListNode **sPtr,int item); 
void concat(ListNode **sPtr, ListNode **sPtr1, ListNode **sPtr2);
void merge(ListNode **sPtr, ListNode **sPtr1, ListNode **sPtr2);
void common_data(ListNode **sPtr1,ListNode **sPtr2);
void del_greater_five(ListNode **sPtr);
void split_list(ListNode **sPtr, ListNode **sPtr1, ListNode **sPtr2);

int main( )
{ 

ListNodePtr startPtr = NULL;  // initially there are no nodes
ListNodePtr startPtr1 = NULL; // initially there are no nodes
ListNodePtr startPtr2 = NULL; // initially there are no nodes
ListNodePtr startPtr3 = NULL; // initially there are no nodes
ListNodePtr startPtr4 = NULL; // initially there are no nodes

unsigned int choice; // user's choice
int item; // int entered by user
int nodenum=1;
int after=1;
int index_1, index_2;
int i =0;
int length = 3;
int value1, value2;
value1 =0;
value2 =0;

printf("\nInitially: (startptr, &startptr) is:  (%p,  %p) ", startPtr, &startPtr);


printf("\n****************************");
puts( "\nEnter your choice:\t" "1 Insert at begin \t" "2 Display list.\t" "3 Delete the element. \t" "4 End. \t" " 5 Count elements and Average\t" " 6 Delete the nth node \t" " 7 Print Reverse List \t" " 8 Insert Element after Data value  \t" " 9 Swap nth and mth value \t" " 10 Insert at end  \t" " 11 Concatanate two lists  \t" " 12 Merge two lists \t" " 13 Common data elements in the two list \t" " 14 Delete a node with value greater than 5 \t" " 15 Split the list into two parts \n \n");
   scanf( "%u", &choice );

   // loop while user does not choose 3
   while ( choice != 4 ) { 

      switch ( choice ) { 
         case 1:
            printf( "%s", "Enter a integer data: " );
            scanf("%d", &item );
            insert_beg( &startPtr, item ); // insert item in list
            break;
  
         case 2:
            printf( "\n The list is:   " );
	    printf("\n(startptr, &startptr) is: (%p, %p)\n", startPtr, &startPtr);
            printList( startPtr );
            break;

	 case 3: 
	 // delete an element if list is not empty

            if ( !isEmpty( startPtr ) ) { 
               printf( "%s", "Enter data value to be deleted: " );
               scanf( "%d", &item );
               // if data is found, remove it
               if ( delete( &startPtr, item ) ) { // remove item
                  printf( "%d deleted.\n", item );
                } // end if
               else {
                  printf( "%d not found.\n\n", item );
               } // end else            
            } // end if
            else {
               puts( "List is empty.\n" );
            } // end else
            break;


       case 5:
            printf("\n(startptr, &startptr) is: (%p, %p)\n", startPtr, &startPtr);
	    avgList( startPtr );
            break;

	case 6: 
	 // delete an nth node if list is not empty

            if ( !isEmpty( startPtr ) ) { 
               printf( "%s", "Enter Node number to be deleted: " );
               scanf( "%d", &nodenum );

               // if data is found, remove it
	       if (delNode( &startPtr, nodenum ))
               {
		 printf( "%d deleted.\n", nodenum );
                
                } // end if
               else {
                  printf( "%d not found.\n\n", nodenum);
               } // end else   
		        
            } // end if
            else {
               puts( "List is empty.\n" );
            } // end else
            break;


	case 7:
            printf( "\n The Reverse list Print is:   " );
	    printf("\n(startptr, &startptr) is: (%p, %p)\n", startPtr, &startPtr);
            reverseList( startPtr );
            break;


	case 8:
            printf( "\n The insertafterelement is:   " );
	    printf("\n(startptr, &startptr) is: (%p, %p)\n", startPtr, &startPtr);
            printf( "\n Enter data value to be entered: " );
            scanf("%d", &item);
	    printf( "\nEnter data %d to be entered after data: ", item );
            scanf("%d", &after);
            insertafterelement(&startPtr, item, after);
            break;



	case 9:
            printf( "\n Swapping of the data values:\n " );
	    printf( "\n Enter node1 to be entered: " );
            scanf("%d", &index_1);
            
            printf( "\n Enter node2 to be entered: " );
            scanf("%d", &index_2);
      	    swap(&startPtr,index_1, index_2);
	break;


	case 10:
             printf( "%s", "Enter a integer data: " );
            scanf("%d", &item );
            insert_end( &startPtr, item ); // insert item in list
	break;


	case 11:
               
		printf(" \n The EQUAL size of list1 and List 2 length is: %d ", length);
		for(i = 0; i <length; i++)
		{
		printf("\n Enter the value for list 1: ");
		//scanf("%d",&value1);
                value1 = i + 5;
		insert_beg(&startPtr1,value1);

		printf("\n Enter the value for list 2: ");
		//scanf("%d",&value2);
                value2 = i+ 10;
		insert_end(&startPtr2,value2);
		}
	     
             printf(" \n The EQUAL size of list1 is: \n");
             printList( startPtr1 );
	     printf(" \n\n ");

             printf(" \n The EQUAL size of list2 is: \n");
             printList( startPtr2 );
	     printf(" \n\n ");

	      printf( "%s", "Concat or Join two list" );
             concat(&startPtr, &startPtr1, &startPtr2);

             printf(" \n The size of list is: \n");
             printList( startPtr );
             printf(" \n\n ");
	          	  
	break;


	case 12:
               
		printf(" \n The EQUAL size of list1 and List 2 length is: %d ", length);
		for(i = 0; i <length; i++)
		{
		printf("\n Enter the value for list 1: ");
		//scanf("%d",&value1);
                value1 = i + 5;
		insert_beg(&startPtr1,value1);

		printf("\n Enter the value for list 2: ");
		//scanf("%d",&value2);
                value2 = i + 10;
		insert_end(&startPtr2,value2);
		}
	     
             printf(" \n The EQUAL size of list1 is: \n");
             printList( startPtr1 );
             printf(" \n\n ");
	 
             printf(" \n The EQUAL size of list2 is: \n");
             printList( startPtr2 );
	     printf(" \n\n ");

	     printf( "%s", "Merge of two list" );
             merge(&startPtr, &startPtr1, &startPtr2);

             printf(" \n The size of list is: \n");
             printList( startPtr );
             printf(" \n\n ");
	          	  
	break;

	case 13:
                insert_end(&startPtr1,10);
		insert_end(&startPtr1,20);
		insert_end(&startPtr1,30);

		insert_end(&startPtr2,20);
		insert_end(&startPtr2,30);
		insert_end(&startPtr2,40);

		 printf(" \n The EQUAL size of list1 is: \n");
             	printList( startPtr1 );
             	printf(" \n\n ");
	 
             	printf(" \n The EQUAL size of list2 is: \n");
             	printList( startPtr2 );
	     	printf(" \n\n ");

		common_data(&startPtr1, &startPtr2);
	break;


	 case 14: 
	 printf(" \n Delete an element if data greater than 5 one by one \n");
	 if ( !isEmpty( startPtr ) ) { 
	         del_greater_five(&startPtr);

        }

	break;


	
	 case 15: 
         printf(" \n The  list is: \n");
         printList( startPtr);
         printf(" \n\n ");
	 printf(" \n Split the list into two lists\n");
	 split_list(&startPtr, &startPtr3, &startPtr4);
	 printf(" \n The first list is: \n");
         printList( startPtr3);
         printf(" \n\n ");
	 
         printf(" \n The second list is: \n");
         printList( startPtr4);
	 printf(" \n\n ");
	 break;

         default:
            puts( "Invalid choice.\n" );
	    break;
      } // end switch

printf("\n****************************");
puts( "\nEnter your choice:\t" "1 Insert at begin \t" "2 Display list. \n " "3 Delete the element. \t" "4 End. \n" " 5 Count elements and Average\t" " 6 Delete the nth node \t" " 7 Print Reverse List \t" " 8 Insert Element after Data value \t" " 9 Swap nth and mth value \t" " 10 Insert at end  \t" " 11 Concatanate two lists  \t" " 12 Merge two lists \t" " 13 Common data elements in the two list \t" " 14 Delete a node with value greater than 5  \t" " 15 Split the list into two parts \n \n");

      scanf( "%u", &choice );
   } // end while


printf("\nFinally: (startptr, &startptr) is:  (%p,  %p) ", startPtr, &startPtr);
   puts( "End of run." );
} // end main




void insert_beg(ListNode **sPtr,int item)
{
ListNode *tempPtr;
tempPtr=(ListNode*)malloc(sizeof(ListNode));
tempPtr->data=item;

if((*sPtr)==NULL)
tempPtr->nextPtr=NULL;
else
tempPtr->nextPtr=(*sPtr);

*sPtr=tempPtr;
//printf("\nInside insert_beg:(sptr ,&stptr) is:  (%p, %p)", sPtr, &sPtr);
}


void printList( ListNodePtr sPtr)
{
//printf("\n(sptr, &sptr) is: (%p, %p)\n", sPtr, &sPtr);
while(sPtr!=NULL)
{
printf("%d\t",sPtr->data);
sPtr=sPtr->nextPtr;
}
printf("\n");
}


// return 1 if the list is empty, 0 otherwise
int isEmpty( ListNodePtr sPtr )
{ 
   return sPtr == NULL;
} // end function isEmpty






// delete a list element
int delete( ListNode **sPtr, int value )
{ 
   ListNodePtr previousPtr; // pointer to previous node in list
   ListNodePtr currentPtr; // pointer to current node in list
   ListNodePtr tempPtr; // temporary node pointer

   // delete first node
   if ( value == ( *sPtr )->data ) { 
      tempPtr = *sPtr; // hold onto node being removed
      *sPtr = ( *sPtr )->nextPtr; // de-thread the node
      free( tempPtr ); // free the de-threaded node
      return value;
   } // end if
   else { 
      previousPtr = *sPtr;
      currentPtr = ( *sPtr )->nextPtr;

      // loop to find the correct location in the list
      while ( currentPtr != NULL && currentPtr->data != value ) { 
         previousPtr = currentPtr; // walk to ...  
         currentPtr = currentPtr->nextPtr; // ... next node  
      } // end while

      // delete node at currentPtr
      if ( currentPtr != NULL ) { 
         tempPtr = currentPtr;
         previousPtr->nextPtr = currentPtr->nextPtr;
         free( tempPtr );
         return value;
      } // end if
   } // end else

   return 0;
} // end function delete



void avgList( ListNodePtr sPtr)
{
//printf("\n(sptr, &sptr) is: (%p, %p)\n", sPtr, &sPtr);

if((sPtr)==NULL)
{

printf("\n List is empty");
}
else
{
int sum =0;
int counter =0;

	while(sPtr!=NULL)
	{
	printf(" sum: %d \t", sum = sum + (sPtr->data) );
	sPtr=sPtr->nextPtr;
	counter = counter+ 1;
	}
	printf("\n(sum, counter): (%d , %d) ", sum , counter );
	printf( "\n The Average of data is: %f  ", (float) sum / (float)counter);
	printf("\n");
}

}// end function avgList





// delete nth node
int delNode( ListNode **sPtr, int nodenum )
{ 
   ListNodePtr previousPtr; // pointer to previous node in list
   ListNodePtr currentPtr; // pointer to current node in list
   ListNodePtr tempPtr; // temporary node pointer
   int count =0;
   int count1 =1;
   
  // delete first node
   if ( nodenum == 1 ) { 
      tempPtr = *sPtr; // hold onto node being removed
      *sPtr = ( *sPtr )->nextPtr; // de-thread the node
      free( tempPtr ); // free the de-threaded node
      return nodenum;
   } // end if
   else{      //delete mid or last lode

        
	   // loop to find the total number of nodes in the list
        currentPtr = *sPtr ;
        while ( currentPtr != NULL ) { 
         currentPtr = currentPtr->nextPtr; // ... next node  
         count = count + 1;
         } // end while

         printf("\n The total number of nodes in the list is %d\n",count);

        
         if(nodenum > count)   //Invalid choice
         {  
		return 0;
	 }
         else     //Delete middle or last node
	 {

	    currentPtr = *sPtr ; 
            while ( count1 < nodenum ) { 
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr; // ... next node  
            count1 = count1 + 1;
            } // end while 
   
                tempPtr = currentPtr;
                previousPtr->nextPtr = currentPtr->nextPtr;
                free( tempPtr );
                return nodenum;
             
	 }
  }//end else

   return 0;
} // end function delnode



void reverseList(ListNode *sPtr)
{


	if( (sPtr->nextPtr) != NULL)
	{
           reverseList(sPtr->nextPtr);
       	}

printf("%d ",sPtr->data);
}





void insertafterelement(ListNode **sPtr, int item,int after)
{
ListNode *previousPtr, *currentPtr;

ListNode *tempPtr;

	
        currentPtr = *sPtr;
	      // loop to find the correct location in the list
        while ( (currentPtr != NULL)  && ( ( currentPtr->data) != after ) ) { 
         currentPtr = currentPtr->nextPtr; // ... next node  
         } // end while



	
	if( currentPtr != NULL)   
	{
   
	tempPtr=(ListNode*)malloc(sizeof(ListNode));
	tempPtr->data = item;        

	tempPtr->nextPtr = currentPtr->nextPtr;
	currentPtr->nextPtr=tempPtr;
        }

}


void swap(ListNode **sPtr, int index_1, int index_2)
{

ListNode *Ptr1, *Ptr2;
int i=0;
int temp;


Ptr1 = *sPtr;
Ptr2 = *sPtr;

if((*sPtr)==NULL)
{
printf("\n List is empty");
return;
}

	for( i =0; i <index_1; i++)
	{
 	Ptr1 = Ptr1->nextPtr; // ... next node  

        if( Ptr1 == NULL)   
 	{
  	printf("\n Wrong Location for index1");
	return;
 	}
 	}//end for

	

	for( i =0; i <index_2; i++)
	{
 	Ptr2 = Ptr2->nextPtr; // ... next node  

        if( Ptr2 == NULL)   
 	{
  	printf("\n Wrong Location for index2");
	return;
 	}
 	}//end for

        
        temp = Ptr1->data; 
        Ptr1->data = Ptr2->data;
	Ptr2->data = temp;
      


}//end swap



void insert_end(ListNode **sPtr,int item)
{
ListNode *tempPtr;
ListNode *currentPtr;

tempPtr=(ListNode*)malloc(sizeof(ListNode));
tempPtr->data=item;
tempPtr->nextPtr=NULL;

currentPtr = *sPtr;

if((*sPtr)==NULL)
{
*sPtr = tempPtr;
}
else{
while(currentPtr->nextPtr !=NULL)
{
currentPtr = currentPtr->nextPtr;
}

currentPtr->nextPtr=tempPtr;

}


//printf("\nInside insert_beg:(sptr ,&stptr) is:  (%p, %p)", sPtr, &sPtr);
}



void concat(ListNode **sPtr, ListNode **sPtr1, ListNode **sPtr2)
{
ListNodePtr currentPtr,previousPtr;

currentPtr = *sPtr1;

while(currentPtr != NULL)
{
previousPtr = currentPtr;
currentPtr = currentPtr->nextPtr;
}

previousPtr->nextPtr = *sPtr2;
*sPtr = *sPtr1;

}




void merge(ListNode **sPtr, ListNode **sPtr1, ListNode **sPtr2)
{
ListNodePtr currentPtr, currentPtr1, currentPtr2;

currentPtr = *sPtr;
currentPtr1 = *sPtr1;
currentPtr2 = *sPtr2;

while( (currentPtr1 != NULL) && (currentPtr2 != NULL))
{
insert_end(&currentPtr, currentPtr1->data);
insert_end(&currentPtr, currentPtr2->data);

currentPtr1 = currentPtr1->nextPtr;
currentPtr2 = currentPtr2->nextPtr;
}


*sPtr = currentPtr;
}



void common_data(ListNode **sPtr1,ListNode **sPtr2)
{
ListNodePtr tempPtr1, tempPtr2;
tempPtr1 = *sPtr1;
tempPtr2 = *sPtr2;
printf("The common elements in the two lists are:\n");
while(tempPtr1 !=NULL)
{
while(tempPtr2 !=NULL)
{
if(tempPtr1->data == tempPtr2 ->data)
	printf("%d\t",tempPtr2 ->data);
tempPtr2 =tempPtr2->nextPtr;
}
tempPtr2 = *sPtr2;
tempPtr1 =tempPtr1->nextPtr;
}
printf("\n");
}



void del_greater_five(ListNode **sPtr)
{
ListNodePtr previousPtr; // pointer to previous node in list
ListNodePtr currentPtr; // pointer to current node in list
ListNodePtr tempPtr; // temporary node pointer


  // delete first node with value >= 5
   if ( ( *sPtr )->data  >= 5 ) 
   { 
      tempPtr = *sPtr; // hold onto node being removed
      *sPtr = ( *sPtr )->nextPtr; // de-thread the node
      free( tempPtr ); // free the de-threaded node
    } // end if
  else { 
      previousPtr = *sPtr;
      currentPtr = ( *sPtr )->nextPtr;

      // loop to find the correct location in the list
      while ( currentPtr != NULL && currentPtr->data < 5 ) { 
         previousPtr = currentPtr; // walk to ...  
         currentPtr = currentPtr->nextPtr; // ... next node  
      } // end while

      // delete node at currentPtr
      if ( currentPtr != NULL ) 
	{ 
         tempPtr = currentPtr;
         previousPtr->nextPtr = currentPtr->nextPtr;
         free( tempPtr );
      } // end if
   } // end else


}


void split_list(ListNode **sPtr, ListNode **sPtr1, ListNode **sPtr2)
{

ListNodePtr currentPtr, currentPtr1, currentPtr2;
int i =0;

currentPtr = *sPtr;
currentPtr1 = *sPtr1;
currentPtr2 = *sPtr2;

for(i=0; i<2; i++)
{
if(currentPtr !=NULL)
{
insert_end(&currentPtr1,currentPtr->data);
currentPtr = currentPtr ->nextPtr;
}
}

while(currentPtr !=NULL)
{
insert_end(&currentPtr2,currentPtr->data);
currentPtr = currentPtr->nextPtr;
}

*sPtr1 = currentPtr1;
*sPtr2 = currentPtr2;
}
