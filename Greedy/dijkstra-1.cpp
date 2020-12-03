// Time O(n^2) Space O(n^2), where n is no. of vertex in graph.
// This method use of adjacency representation of graph.
#include<bits/stdc++.h>
using namespace std;

//function to print the constructed distance array 
void printsolution(int dist[],int n){
    cout << "\nvertex\tshortest distance from source \n";
    for(int i=0;i<n;i++){
        cout << "   " << i+1 << "                   " << dist[i] << endl; 
    }
}

//function to find the vertex with minimum distance value, from 
// the set of vertices not yet included in shortest path tree 
int minDistance(int dist[], bool sptSet[], int v){
    int min = INT_MAX, min_index;
    for(int i=0;i<v;i++){
        if(sptSet[i] == false && dist[i] <= min){
            min = dist[i];
            min_index = i;
        }
    }
    return min_index;
}

void dikstra(int adj[][11],int src, int n){
    int dist[n];        // will hold the shortest distance from src to i 
    bool sptSet[n];     // will be true if vertex i is included in shortest path tree

    // Initialize all distances as INFINITE and stpSet[] as false 
    for(int i=0;i<n;i++){
        dist[i] = INT_MAX;
        sptSet[i] = false;
    }
    // Distance of source vertex from itself is always 0 
    dist[src] = 0;
    // Find shortest path for all vertices 
    for(int count = 0; count < n-1; count++){
        // Pick the minimum distance vertex from the set of vertices not 
        // yet processed. u is always equal to src in the first iteration. 
        int u = minDistance(dist,sptSet,n);
        // Mark the picked vertex as processed 
        sptSet[u] = true;
        // Update dist value of the adjacent vertices of the picked vertex.
        for(int v=0;v<n;v++){
            // Update dist[v] only if is not in sptSet, there is an edge from 
            // u to v, and total weight of path from src to  v through u is 
            // smaller than current value of dist[v] 
            if(!sptSet[v] && adj[u][v] && dist[u]!=INT_MAX && dist[u]+adj[u][v]<dist[v]){
                dist[v] = dist[u] + adj[u][v];
            }
        }

    }
    // print the constructed distance array 
    printsolution(dist,n);
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
    // initialising the ajacency matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            adj[i][j] = 0;
        }
    }
    // traversing the edges info array
    for(int i=0;i<e;i++){
        int x = arr[i][0];
        int y = arr[i][1];
        int w = arr[i][2];

        adj[x-1][y-1] = w;
        adj[y-1][x-1] = w;
    }
    // printing the Adj matrix
    cout << "\nThe Adjacency Matrix is: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << adj[i][j] << " "; 
        }
        cout << endl;
    }
    dikstra(adj,0,n);
    return 0;
}



Enter no. of vertices in graph:
6
Enter no. of edges in graph:
7
Enter vertices and weight(enter 1 if unweighted) of edge 1
1 2 5
Enter vertices and weight(enter 1 if unweighted) of edge 2
2 3 2
Enter vertices and weight(enter 1 if unweighted) of edge 3
3 4 3
Enter vertices and weight(enter 1 if unweighted) of edge 4
4 6 2
Enter vertices and weight(enter 1 if unweighted) of edge 5
6 5 3
Enter vertices and weight(enter 1 if unweighted) of edge 6
5 1 2
Enter vertices and weight(enter 1 if unweighted) of edge 7
1 4 9

The Adjacency Matrix is:
0 5 0 9 2 0
5 0 2 0 0 0
0 2 0 3 0 0
9 0 3 0 0 2
2 0 0 0 0 3
0 0 0 2 3 0

vertex  shortest distance from source
   1                   0
   2                   5
   3                   7
   4                   7
   5                   2
   6                   5
   
   
   
NOTE: More efficient solution can me made using adjacency list representation of graph.
