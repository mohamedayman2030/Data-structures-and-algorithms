
#include <iostream>

using namespace std;

struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;

void insertNodeAtLast (int data){
    struct node *Link = (struct node*) malloc (sizeof(struct node));
    Link -> data = data;
    Link -> next = NULL;
    if ( head == NULL ){
        head = Link;
        return;
    }
    current = head ;
    while (current -> next != NULL){
        current = current -> next;
    }
    current -> next = Link;
}



void printLinkedList(){
    struct node *ptr = head;
    while (ptr != NULL){
        cout << ptr -> data;
        ptr = ptr -> next;
    }
}
int main()
{
    insertNodeAtLast(1);
    insertNodeAtLast(2);
    insertNodeAtLast(5);
    insertNodeAtLast(6);
    printLinkedList();
}