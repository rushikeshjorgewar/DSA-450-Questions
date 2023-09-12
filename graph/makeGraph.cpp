#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
        unordered_map<int,list<int>> adj;
    
    void addEdge(int u,int v,bool direction){
        adj[u].push_back(v);

        if(direction == 0){
            adj[v].push_back(u);
        }
    }

    void print(){
        for(auto i: adj){
            cout << i.first << " -> ";
            for(auto j: i.second){
                cout << j << ", ";
            }
            cout << endl;
        }
    }
}
int main(){

    graph g;

    int n;ṇ
    cout << "enter the no of nodes" << endl;
    cin >> n;

    int m;
    cout << "enter the no of edges" << endl;
    cin >> m;

    for(int i=0; i<m; i++){
        int u,v;
        cout << "enter the edges from and upto" << endl;
        cin >> u >> v;

        bool direction;
        cout << "enter the direction of the graph" << endl;
        cin >> direction;
        
        g.addEdge(u,v,direction);
    }

    g.print();


    return 0;
}