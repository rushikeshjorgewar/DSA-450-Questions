#include<iostream>
using namespace std;

// que - reverse a linked list using iterative and recursive way.
// time complexity - O(n);
// space complexity - O(1);

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void reverseUsingRecursion(node* &head){

    if(head == NULL){
        return ;
    }

    reverseUsingRecursion(head->next);

    cout << head->data << endl;

}
void print(node* &head){

    node* temp = head;

    while(temp!=NULL){

        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}
// void reverseLLDataReplacement(node* &head){

//     if( head == NULL || head->next == NULL){
//         return ;
//     }
    
//     node* curr = head;
//     while(curr != NULL){

//         node* temp = curr->next;
//         while(temp != NULL){

//             if(curr->data < temp->data){

//                 int temper = curr->data;
//                 curr->data = temp->data;
//                 temp->data = temper;

//             }
//             else{
//                 temp = temp->next;
//             }
//         }
//         curr = curr->next;
//     }

// }
// void reverseLL(node* &head){
    
//     if( head == NULL || head->next == NULL){
//         return ;
//     }

//     node* curr = head;
//     node* prev = NULL;
//     node* forward = NULL;
    
//     while(curr != NULL){
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//     }
//     head = prev;
// }
int  main(){

    node* head = new node(1);
    node* second = new node(2);  
    node* third = new node(3);  
    node* forth = new node(4);  
    node* tail = new node(5);  

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = tail;
    tail->next = NULL;

    // print(head);
    // cout << endl;
    
    // by using three pointers.

    // reverseLL(head);
    // print(head);
    // cout << endl;
    // by using data replacement.

    // reverseLLDataReplacement(head);
    // print(head);

    // using recursion.

    reverseUsingRecursion(head);
    // print(head);

    return 0;
}