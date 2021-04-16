#include <stdio.h>
#include <stdlib.h>

// structure of Node
typedef struct node {
    
    //value
    int val;
    // point to the next node
    struct node* next;

} Node;

// function that creates a new node
// accept integer value as parameter
Node* create_node(int val) {

    // create new node
    Node* new_node = (Node*) malloc (sizeof(Node));

    // set the value and the next node as NULL
    new_node->val = val;
    new_node->next = NULL;

    // return the newly created node
    return new_node;
}

// function that attach a new node to linked_list
// accept head node and new node to attach as parameters
void attach_node_to_list(Node* head, Node* node) {
    
    // assign a cursor to the head node
    Node* cursor = head;

    //traverse the list and the find the last node
    while(cursor->next != NULL) {
        cursor = cursor->next;
    }

    // assign a new node to last node's next
    cursor->next = node;
}

// print all data starting from the head node;
void print_list (Node* head) {

    // assign the cursor to the head node
    Node* cursor = head;

    printf("The data : ");

    // traverse the list
    while(cursor->next != NULL) {
        // print the current node's data
        printf("%d\t",cursor->val);
        // iterate to the next node
        cursor = cursor->next;
    }
    // print the last node of the list
    printf("%d\n",cursor->val);
} 


int main() {

    Node* head = create_node(0);
    Node* second = create_node(1);

    attach_node_to_list(head,second);

    print_list(head);

    return 0;

}