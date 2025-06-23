#include <bits/stdc++.h>

using namespace std;

class Graph{
public : 
    int V; 
    vector<vector<int>> graph;

    Graph(int V){
        this->V = V;
        this->graph = vector<vector<int>>(V, vector<int>(V, 0));

        // this->graph = new int*[V]; // array  of row pointers

        // for (int i = 0; i < V; i++) {
        //     graph[i] = new int[V]; // each row
        //     for (int j = 0; j < V; j++) {
        //         graph[i][j] = 0; // initialize with 0 or any default value
        //     }
        // }
    }

    void bfs(int start) {
        // you can either use array or queue
        // bilkul same hai tree ke BFS se

        // vector<int> arr;
        queue<int> q;
        bool* visited = new bool[V](); // initializes all to false

        // arr.push_back(start);   // push root which means starting point  (take this as analogy)
        q.push(start);
        visited[start] = true;

        while(!q.empty()){  // jab tak queue mei kuch hai tab tak chalao
            // pop  the front element
            // int deleted = arr[0];
            // arr.erase(arr.begin()+0);
            int deleted = q.front();
            q.pop();

            cout << deleted << " ";

            // explore neighbours of the deleted
            for(int i=0 ; i<V ; i++){
                // there should be an edge going from deleted to ith and that neighbour should not be explored
                if(graph[deleted][i] == 1 && !visited[i]){
                    // arr.push_back(i);
                    q.push(i);
                    visited[i] = true;
                }
            }
        }
        cout << endl;
    }
    
    void dfs(int start) {
        vector<bool> visited(V,false);
        dfsUtil(start, visited);
    }
    
    void dfsUtil(int start, vector<bool> &visited){
        visited[start]=true;
        cout << start << "  ";
        for(int i=0; i<V; i++){
            if(graph[start][i] == 1 && !visited[i]){
                dfsUtil(i, visited);
            }
        }
    }


    ~Graph() {
        cout << "Everything deleted !!" << endl;
    }

};

int main() {

    // practically we represent graph with the help of adjacency matrix a square matrix of size [V X V]
    
    Graph* graph = new Graph(6);

    graph->graph = {
        {0,1,1,0,0,1},
        {1,0,0,1,0,0},
        {1,0,0,0,1,0},
        {0,1,0,0,0,1},
        {0,0,1,0,0,1},
        {1,0,0,1,1,0}
    };

    graph->bfs(0);
    graph->bfs(1);

    cout << "DFS of the graph is : " ;
    graph->dfs(0);

    return 0;
}