#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {

    // bool isHead; 
    int val;
    struct node* next;

} Node;

Node* create_node(int val) {

    Node* new_node = (Node*) malloc (sizeof(Node));

    new_node->val = val;
    new_node->next = NULL;

    return new_node;
}

void attach_node_to_list(Node* head, Node* node) {
    
    Node* cursor = head;

    while(cursor->next != NULL) {
        cursor = cursor->next;
    }

    cursor->next = node;
}


int main() {

    Node* head = create_node(0);
    Node* second = create_node(1);

    attach_node_to_list(head,second);


    printf("the val: %d\n", head->val);
    printf("the val: %d\n", head->next->val);


    return 0;

}