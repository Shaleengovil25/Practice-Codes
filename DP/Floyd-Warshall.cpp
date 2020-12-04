//Time O(n^3) Space O(n^2), where n is no. of vertex in graph

#include<bits/stdc++.h>
using namespace std;

void FloydWarshall(int graph[][11], int V){
    // dist matrix that will contain final output
    int dist[V][V];
    // initialize it with ajacency cum initial distance matrix(D0)
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            dist[i][j] = graph[i][j];
        }
    }
    // running the iterations for D1, D2 ...,DV.
    for(int k=0;k<V;k++){
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(dist[i][k] + dist[k][j] < dist[i][j]){
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    // print result
    cout << "\nThe All Pair Shortest distance matrix is:\n";
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            if(dist[i][j] > 999){
                cout << "INF" << " ";
            }
            else{
                cout << dist[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    cout << "Enter no. of vertices in graph:" << endl;
    int n; cin >> n;
    cout << "Enter no. of edges in graph:" << endl;
    int e; cin >> e;
    int arr[e][3];
    for(int i=0;i<e;i++){
        cout << "Enter vertices and weight(enter 1 if unweighted) of edge " << i+1 << endl;
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }
    int adj[11][11];
    // initialize as infinity(larger number)
   for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            adj[i][j] = 9999;
        }
    }
    // shortest distance to self will be 0
    for(int i=0;i<n;i++){
        adj[i][i] = 0;
    }
    // updating if edge is present between two nodes
    for(int i=0;i<e;i++){
        int x = arr[i][0];
        int y = arr[i][1];
        int w = arr[i][2];

        adj[x][y] = w;
    }
    cout << "\nThe Adjacency cum Initial distance Matrix is: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(adj[i][j] > 999){
                cout << "INF" << " ";
            }
            else{
                cout << adj[i][j] << " ";
            } 
        }
        cout << endl;
    }
    FloydWarshall(adj,n);
    return 0;
}


Enter no. of vertices in graph:
4
Enter no. of edges in graph:
4
Enter vertices and weight(enter 1 if unweighted) of edge 1
0 1 5
Enter vertices and weight(enter 1 if unweighted) of edge 2
1 2 3
Enter vertices and weight(enter 1 if unweighted) of edge 3
2 3 1
Enter vertices and weight(enter 1 if unweighted) of edge 4
0 3 10

The Adjacency cum Initial distance Matrix is:
0 5 INF 10
INF 0 3 INF
INF INF 0 1
INF INF INF 0

The All Pair Shortest distance matrix is:
0 5 8 9
INF 0 3 4
INF INF 0 1
INF INF INF 0




