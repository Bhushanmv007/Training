#include <iostream>
#include <vector>

using namespace std;

class Graph {
private:
    int V; // Number of vertices
    vector<vector<int>> adj; // Adjacency list

public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    // Function to add an edge to the graph
    void addEdge(int v, int w) {
        adj[v].push_back(w);
        adj[w].push_back(v); // Assuming an undirected graph
    }

    // Function to print the adjacency list
    void printAdjList() {
        for (int i = 0; i < V; ++i) {
            cout << i << " -> ";
            for (auto j : adj[i]) {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g(5); // Create a graph with 5 vertices

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.printAdjList();

    return 0;
}