#include <iostream>

using namespace std;

struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;

void insertNodeAtFirst(int data){
    struct node *Link = (struct node *) malloc (sizeof(struct node));
    Link -> data = data;
    Link -> next = head;
    head = Link;
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
    insertNodeAtFirst(1);
    insertNodeAtFirst(2);
    insertNodeAtFirst(5);
    insertNodeAtFirst(6);
    printLinkedList();
}