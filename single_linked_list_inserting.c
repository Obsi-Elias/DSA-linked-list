 #include <stdio.h>
 #include <stdlib.h>
void insertingAtFront(int data);
void insertingAtEnd(int data);
void insertingAtMiddle(int position, int data); 
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
   insertingAtEnd(40);
   insertingAtMiddle(3, 5);


   return 0;
}
// inserting node at the first position of the list
void insertingAtFront(int data) {

    struct node *newNodeFront = NULL;
    newNodeFront = (struct node*) malloc(sizeof(struct node));
    newNodeFront -> data = data;
    newNodeFront -> link = head;
    
    head = newNodeFront;
    printf("The new node is added to the field\n");
    printf("The new node data value is: %d\n", head->data);
}
// Inserting node at the end of the node
void insertingAtEnd(int data) {
    struct node *newNodeEnd = NULL;
    newNodeEnd = (struct node*) malloc(sizeof(struct node));
    newNodeEnd -> data = data;
    newNodeEnd -> link = NULL;
    // Now traverse through the node 

    struct node *ptr;
    ptr = (struct node*) malloc(sizeof(struct node));
    ptr = head;
    while (ptr->link != NULL)
    {
        ptr -> link = ptr;
    }
    ptr -> link = newNodeEnd;
    printf("Successfuly inserted node at the end\n");
    printf("The new node data added at the end of the node is: %d \n", newNodeEnd -> data);
}
// Inserting node at any position of the list 
void insertingAtMiddle(int position, int data) {
    struct node *newNodeMiddle, *ptr;
    newNodeMiddle = (struct node*) malloc(sizeof(struct node));
    newNodeMiddle -> data = data;
    newNodeMiddle -> link = NULL;
    ptr = head;
    for(int i = 1; i < position-1; i++) {
        ptr = ptr -> link;
    }
    newNodeMiddle -> link = ptr -> link;
    ptr -> link = newNodeMiddle;
    printf("Successfully added a node at position %d", position);
    
}