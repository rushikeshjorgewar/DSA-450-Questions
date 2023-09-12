#include<iostream>
#include<queue>
using namespace std;

class node{

    public:
        int data;
        node* left;
        node* right;
    
    node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};
node* buildTree(node* root){

    cout << "enter the data " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "enter the data for left node of " << root->data << endl;
    root->left = buildTree(root->left);

    cout << "enter the data for right node of " << root->data << endl;
    root->right = buildTree(root->right);
    
    return root;
}
void inOrderTraversal(node* root,int &count){
    
    if(root == NULL){
        return ;
    }
 
    inOrderTraversal(root->left,count);
    
    if(root->left == NULL && root->right == NULL){
        count++;   
    }
    
    inOrderTraversal(root->right,count);

}

int countLeafNodes(node* root){
    int count = 0;
    inOrderTraversal(root,count);
    return count;
}

int main(){

    node* root = NULL;

    root = buildTree(root);

    int count = countLeafNodes(root);
    cout << "the no of leaf nodes are " << count << endl;
    

    return 0;
}