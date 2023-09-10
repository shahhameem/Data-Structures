#include <iostream>
#include <list>
using namespace std;

class Graph {
private:
    int V;              // Number of vertices
    list<int>* adj; // Pointer to an array containing adjacency lists

public:
    // Constructor to initialize the graph with a given number of vertices
    Graph(int vertices) {
        V = vertices;
        adj = new list<int>[V];
    }

    // Function to add an edge between two vertices
    void addEdge(int v, int w) {
        adj[v].push_back(w);
        adj[w].push_back(v); // For undirected graph
    }

    // Function to print the adjacency list representation of the graph
    void printGraph() {
        for (int v = 0; v < V; ++v) {
            cout << "Vertex " << v << " -> ";
            for (const auto& neighbor : adj[v]) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }

    // Destructor to free memory
    ~Graph() {
        delete[] adj;
    }
};

int main() {
    // Create a graph with 5 vertices
    Graph g(5);

    // Add edges
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    // Print the adjacency list
    cout << "Adjacency List Representation of the Graph:" << endl;
    g.printGraph();

    return 0;
}
