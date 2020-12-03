// Time O(elog(n))  Space O(n+2e) , where n = no. of vertex in graph, e = no. of edges in graph.

#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<pair<int,int>> *adj;
    public:
    Graph(int V);
    void addEdge(int u, int v, int w);
    void shortestPath(int src);
    void printlist();
};
Graph::Graph(int V){
    this->V = V;
    adj = new list<pair<int,int>> [V];
}
void Graph::addEdge(int u, int v, int w){
    adj[u].push_back(make_pair(v,w));
    adj[v].push_back(make_pair(u,w));
}
void Graph::shortestPath(int src){
    // Create a set to store vertices that are being prerocessed 
    set<pair<int,int> > setds;

    // Create a vector for distances and initialize all distances as infinite 
    vector<int> dist(V,INT_MAX);

    // Insert source itself in Set and initialize its distance as 0
    setds.insert(make_pair(0,src));// vertex label is stored in second of pair to keep the vertices sorted distance
    dist[src] = 0;

    // Looping till all shortest distance are finalized then setds will become empty 
    while(!setds.empty()){
        // The first vertex in Set is the minimum distance vertex, extract it from set. 
        pair<int,int> temp = *(setds.begin());
        setds.erase(setds.begin());
 
        // vertex is at second in pair of set and at first in pair of list. 
        int u = temp.second;

         // 'it' is used to get all adjacent vertices of a vertex 
        list<pair<int,int>>::iterator it;
        for(it=adj[u].begin();it!=adj[u].end();it++){
            int v = it->first;
            int weight = it->second;

            /*  If distance of v is not INF then it must be in our set, so removing it and inserting again 
                with updated less distance.  Note : We extract only those vertices from Set 
                for which distance is finalized. So for them,  we would never reach here.  */
            if(dist[u]+weight < dist[v]){
                if(dist[v]!=INT_MAX){
                    setds.erase(setds.find(make_pair(dist[v],v)));
                }
                // Updating distance of v 
                dist[v] = dist[u] + weight;
                setds.insert(make_pair(dist[v],v));
            }
        }
    }

    // Print shortest distances stored in dist[]
    cout << "\nVertex\tShortest distance from source\n";
    for(int i=0;i<V;i++){
        cout << "   " << i+1 << "\t\t" << dist[i] << endl;
    }
}
void Graph::printlist(){
    int v,w;
    cout << "\nThe Adjacency List is:\n";
    for(int u=0;u<V;u++){
        cout << "head-->" << u+1 << "-->/";
        for(auto it=adj[u].begin();it!=adj[u].end();it++){
            v = it->first;
            w = it->second;
            cout << v+1 << "," << w << "-->/";
        }
        cout << endl;
    }
}

int main(){
    cout << "Enter no. of vertices in graph:" << endl;
    int n; cin >> n;
    cout << "Enter no. of edges in graph:" << endl;
    int e; cin >> e;
    Graph g(n);
    for(int i=0;i<e;i++){
         cout << "Enter vertices and weight(enter 1 if unweighted) of edge " << i+1 << endl;
         int u,v,w; cin >> u >> v >> w;
        g.addEdge(u-1,v-1,w);
    }
    g.printlist();
    g.shortestPath(0);
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

The Adjacency List is:
head-->1-->/2,5-->/5,2-->/4,9-->/
head-->2-->/1,5-->/3,2-->/
head-->3-->/2,2-->/4,3-->/
head-->4-->/3,3-->/6,2-->/1,9-->/
head-->5-->/6,3-->/1,2-->/
head-->6-->/4,2-->/5,3-->/

Vertex  Shortest distance from source
   1            0
   2            5
   3            7
   4            7
   5            2
   6            5
   
   
   
  NOTE:
In Dijkstra’s algorithm, we need a priority queue and below operations on priority queue :

ExtractMin : from all those vertices whose shortest distance is not yet found, we need to get vertex with minimum distance.

DecreaseKey : After extracting vertex we need to update distance of its adjacent vertices, and if new distance is smaller, then update that in data structure.

However,  it is really complex to implement our own priority queue. STL provides priority_queue, but the provided priority queue doesn’t support above operations.

Above operations can be easily implemented by set data structure of c++ STL, set keeps all its keys in sorted order so minimum distant vertex will always be at beginning, 
we can extract it from there, which is the ExtractMin operation and update other adjacent vertex accordingly if any vetex’s distance become smaller then delete its previous 
entry and insert new updated entry which is DecreaseKey operation.
