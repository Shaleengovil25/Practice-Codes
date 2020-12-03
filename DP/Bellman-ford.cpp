// Time O(ne) Space O(n), where n is no. of vertices in graph, e is no. of edges, e can be O(n^2) in worst case.
#include <bits/stdc++.h>
using namespace std;

void BellmanFord(int graph[][3], int V, int E, int src){
    int dist[V];
    for(int i=0;i<V;i++){
        dist[i] = INT_MAX;
    }
    dist[src] = 0;
    // Relax all edges v-1 times as a path between 2 node may be discovered at
    // (v-1)th iteration.
    for(int i=0;i<V-1;i++){
        for(int j=0;j<E;j++){
            if(dist[graph[j][0]] + graph[j][2] < dist[graph[j][1]]){
                dist[graph[j][1]] = dist[graph[j][0]] + graph[j][2];
            }
        }
    }
    // one more check for detecting negative wieght cycle in graph.
    for(int i=0;i<E;i++){
        int u = graph[i][0];
        int v = graph[i][1];
        int w = graph[i][2];
        if(dist[u]!=INT_MAX && dist[u] + w < dist[v]){
            cout << "Graph contains a negative weight cycle" << endl;
        }
    }
    cout << "\nvertex\tdistance from source\n";
    for(int i=0;i<V;i++){
        cout << i << "\t\t" << dist[i] << endl;
    }
}
int main(){
    cout << "Enter no. of vertices in graph:" << endl;
    int n; cin >> n;
    cout << "Enter no. of edges in graph:" << endl;
    int e; cin >> e;
    int graph[e][3];
    for(int i=0;i<e;i++){
        cout << "Enter vertices and weight(enter 1 if unweighted) of edge " << i+1 << endl;
        for(int j=0;j<3;j++){
            cin >> graph[i][j];
        }
    }
    BellmanFord(graph,n,e,0);
    return 0;
}



Enter no. of vertices in graph:
5
Enter no. of edges in graph:
8
Enter vertices and weight(enter 1 if unweighted) of edge 1
0 1 -1
Enter vertices and weight(enter 1 if unweighted) of edge 2
0 2 4
Enter vertices and weight(enter 1 if unweighted) of edge 3
1 2 3
Enter vertices and weight(enter 1 if unweighted) of edge 4
1 3 2
Enter vertices and weight(enter 1 if unweighted) of edge 5
1 4 2
Enter vertices and weight(enter 1 if unweighted) of edge 6
3 2 5
Enter vertices and weight(enter 1 if unweighted) of edge 7
3 1 1
Enter vertices and weight(enter 1 if unweighted) of edge 8
4 3 -3

vertex  distance from source
0               0
1               -1
2               2
3               -2
4               1

