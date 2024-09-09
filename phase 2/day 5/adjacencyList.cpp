// AdjLists

// Implementation of Graph and Representing it with Adjacent List
#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class Graph
{
    public:
    unordered_map<int, list<int> > adj;

    void addEdge(int u, int v, bool direction)
    {
        // direction = 0 -> undirected
        // direction = 1 -> directed 

        // create an edge from u to v (this has to happen cuz its 1st node)

        adj[u].push_back(v); // this will create an edge btw u and v
        // Well this edge has to be created anyways for start

        if(direction==0) // if its unordered then do vice-versa and create the opposite running edge also!
        {
            adj[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for(auto i:adj)
        {
            cout << i.first << "-> ";
            for(auto j:i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }

};

int main()
{
    int n;
    cout << "Enter the number of Node: " << endl;
    cin >> n;

    int m;
    cout << "Enter the number of Edges: " << endl;
    cin >> m;

    Graph g;

    for(int i=0; i<m; i++)
    {
        int u, v;
        cin >> u >> v;
        
        // creating an undirected graph
        g.addEdge(u,v,0);
    }

    //print graph
    g.printAdjList();
    return 0;
}