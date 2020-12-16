#include <iostream>

using std::cout;
using std::endl;
struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;
struct node *prev = NULL;

void insertAtLast(int data){
    struct node *link = (struct node*) malloc (sizeof(struct node));
    link -> data = data;
    link -> next = NULL;
    if(head == NULL){
        head = link;
        return;
    }
    current = head;
    while(current -> next != NULL){
        current = current -> next;
    }
    current -> next = link;
}

void printList(){
    struct node *ptr = head;
    
    while(ptr != NULL){
        cout << ptr -> data <<" ";
        ptr = ptr -> next;
    }
}

int sizeofList(){
    int size = 0;
    
    if(head == NULL){
        cout << " empty linked list " ;
        return -1;
    }
    
    current = head;
    size = 1;
    while(current -> next != NULL){
        current = current -> next ;
        size++;
    }
    return size;
}

void insertInsideList(int data, int position){
    int pos = 0;
    struct node *link = (struct node *) malloc (sizeof(struct node));
    if (head == NULL){
        link -> data = data;
        link -> next = NULL;
        head = link;
        return;
    }
    
    if ( position > sizeofList() ){
        cout<< "Invalid position";
        return;
    }
    if ( position == 0){
         link -> data = data;
        link -> next = head;
        head = link;
        return;
    }
    current = head;
    while(pos < position){
        prev = current;
        current = current -> next;
        pos++;
    }
    link -> data = data;
    link -> next = current;
    prev -> next = link;
}
int main()
{
   insertAtLast(1);
   insertAtLast(2);
   insertAtLast(4);
   insertAtLast(5);
   printList();
   cout<<endl;
   insertInsideList(3,2);
   cout<<"the updated list"<<endl;
   printList();
}
