#include<iostream>
using namespace std;

// que - program to find the first node in loop.

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = next;
    }

};
node* findLoopMid(node* &head){
    
    if(head == NULL || head->next == NULL){
        return head;
    }

    node* slow = head;
    node* fast = head->next;

    while(slow != NULL && fast->next->next != NULL){
        
        fast = fast->next;
        if(fast->next!= NULL){
            fast = fast->next;
        }

        if(slow == fast){
            return slow;
        }
        slow = slow->next;

    }
    return NULL;
}
node* findFirstNode(node* &head){

    node* mid = findLoopMid(head);
    node* curr = head;

    node* prev = NULL;
    node* forward = NULL;

    while(curr->next != mid){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;

    return prev;

}
bool isLoopPresent(node* &head){

    if(head == NULL || head->next == NULL){
        return 0;
    }

    node* slow = head;
    node* fast = head;

    while(slow != NULL && fast->next != NULL){
        
        fast = fast->next;
        if(fast->next!= NULL){
            fast = fast->next;
        }

        if(slow == fast){
            return 1;
        }
        slow = slow->next;

    }

    return 0;
}
int main(){

    node* head = new node(1);
    node* second = new node(2);
    node* third = new node(3);
    node* forth = new node(4);
    node* fifth = new node(5);
    node* six = new node(6);
    node* seven = new node(7);
    node* tail = new node(8);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = six;
    six->next = seven;
    seven->next = tail;
    tail->next = third;

    bool result = isLoopPresent(head);

    if(result){
        cout << "loop present." << endl;
    }
    else{
        cout << "loop not present." << endl;
    }

    node* temp = findLoopMid(head);
    cout << temp->data << endl;

    return 0;
}