#include <iostream>
#include "DDL.h"
using namespace std;

typedef DoublyLinkedList<int> list;

class Graph {
private:
    int V;              // Number of vertices
    list* adj; // Pointer to an array containing adjacency lists

public:
    // Constructor to initialize the graph with a given number of vertices
    Graph(int vertices) {
        V = vertices;
        adj = new list [V];
    }

    // Function to add an edge between two vertices
    void addEdge(int v, int w) {
        adj[v].insertEnd(w);
        //adj[w].insertEnd(v); // For undirected graph
    }

    // Function to print the adjacency list representation of the graph
    void printGraph() {
        for(int i = 0; i < V; i++) {
            cout << i << " -> ";
            adj[i].display();
        }
    }

    // Destructor to free memory
    ~Graph() {
        delete[] adj;
    }
};

int main() {
    // Create a graph with 5 vertices
    Graph g(4);

    // Add edges
   g.addEdge(0, 1);
   g.addEdge(0, 3);
   g.addEdge(1, 3);
   g.addEdge(1, 2);
   g.addEdge(3, 2);

    // Print the adjacency list
    cout << "Adjacency List Representation of the Graph:" << endl;
    g.printGraph();

    return 0;
}
