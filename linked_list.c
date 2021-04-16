#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {

    bool isHead; 
    int val;
    struct node* next;

} Node;

Node* create_empty_list() {

    Node* head =  (Node*)malloc(sizeof(Node));
    head->isHead = true;
    head->val =  -1;
    head->next = NULL;

    return head;
}

int main() {

    Node* test_list = create_empty_list();
    


    return 0;

}