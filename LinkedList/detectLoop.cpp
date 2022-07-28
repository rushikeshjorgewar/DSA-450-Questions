#include<iostream>
using namespace std;

// time complexity - O(n).
// space complexity - O(1).
// approach - 1) using floyd loop detection Algorithm.
// approach - 2) using common logic.

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
bool floydDetectLoop(node* &head){

    if(head == NULL || head->next == NULL){
        return 0;
    }

    node* slow = head;
    node* fast = head;

    while(slow != NULL && fast != NULL){

        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;    
        }
        slow = slow->next;
        
        if(slow == fast){
            return 1;
        }

    }
    return 0;
}
int  main(){

    node* head = new node(1);
    node* second = new node(2);  
    node* third = new node(3);  
    node* forth = new node(4);  
    node* fifth = new node(4);  
    node* tail = new node(5);  

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = tail;
    tail->next = NULL;

    bool result = floydDetectLoop(head);
    
    if(result){
        cout << "loop is present." << endl;
    }
    else{
        cout << "loop is not present." << endl;
    }
    return 0;

}