#include <stdio.h>
#include <stdlib.h>

   // Creating node of single linked list
 struct node {
        int data;
        struct node *link;
    };
int main()
{
   struct node *head = NULL;
   head = (struct node*)malloc(sizeof(struct node));
   head-> data = 40;
   head-> link = NULL;

   struct node *current = (struct node*)malloc(sizeof(struct node));
   current-> data = 50;
   current-> link = NULL;
   head->link = current;

   current = (struct node*) malloc(sizeof(struct node));
   current -> data = 3;
   current -> link = NULL;
   head -> link -> link = current ;

   countNode(head);
   printData(head);

   return 0;
}

// Traversing through the list for counting nodes
void countNode(head) {
    int count = 0;
    if(head == NULL)
        printf("The list is empty");
    else {
        struct node *ptr = NULL;
        ptr = head;
        while(ptr != NULL) {
            count++;
            ptr = ptr -> link;
        }
        printf("The number of nodes are: %d\n", count);
    }
}

// Traversing through the list and printing the data
void printData(head) {
    if(head == NULL)
        printf("\nThe list is empty");
    else {
        struct node *ptr = NULL;
        ptr = head;
        while(ptr != NULL){
            printf("The data are: %d, ", ptr -> data);
            ptr = ptr -> link;
        }
    }
}
