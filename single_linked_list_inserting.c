 #include <stdio.h>
 #include <stdlib.h>
 
 struct node {
        int data;
        struct node *link;
    }*head;
    
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

   insertingAtFront(25);


   return 0;
}

void insertingAtFront(int data) {

    struct node *newNodeEnd = NULL;
    newNodeEnd = (struct node*) malloc(sizeof(struct node));
    newNodeEnd -> data = data;
    newNode -> link = head;
    
    head = newNode;
    printf("The new node is added to the field\n");
    printf("The new node data value is: %d", head->data);
}
void insertingAtEnd(int data) {
    struct node *newNodeEnd = NULL;
    newNodeEnd = (struct node*) malloc(sizeof(struct node));
    newNodeEnd -> data = data;
    newNodeEnd -> link = NULL;
    
}