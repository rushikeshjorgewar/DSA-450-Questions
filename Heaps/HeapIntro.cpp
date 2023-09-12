#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index / 2;
            
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1; i<=size; i++){
            cout << arr[i] << endl;
        }
    }

    void deleteMaxElement(){
        if(size == 0){
            cout << "Nothing to delete" << endl;
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while(i < size){
            int leftHand = 2*i;
            int rightHand = 2*i+1;

            if(i < leftHand && arr[i] < arr[leftHand]){
                swap(arr[i],arr[leftHand]);
                i = leftHand;
            }
            else if(i < rightHand && arr[i] < arr[rightHand]){
                swap(arr[i],arr[rightHand]);
                i = rightHand;
            }
            else{
                return ;
            }
        }
    }
};

    void heapify(int arr[],int n, int i){
        int largest = i;
        int left = 2*i;
        int right = 2*i+1;

        if(i < left && arr[i] < arr[left]){
            i = left;
        }

        if(i < right && arr[i] < arr[right]){
            i = right;
        }

        if(largest != i){
            swap(arr[i],arr[largest]);
            heapify(arr,n,largest);
        }

    }

int main(){

    heap h;

    h.insert(55);
    h.insert(65);
    h.insert(45);
    h.insert(54);
    h.insert(53);
    
    // cout << "before deletion" << endl;
    // h.print();
    // h.deleteMaxElement();
    // cout << "after deletion" << endl;
    // h.print();

    int arr[6] = {-1,54,55,53,50,65};
    int n = 5;
    for(int i=n/2; i>0; i--){
        heapify(arr,n,i);
    }

    for(int i=1; i<=n; i++){
        cout << arr[i] << endl;
    }

    return 0;
}