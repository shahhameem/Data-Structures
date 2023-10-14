#include <iostream>
#include <list>
using namespace std;

class Graph {
private:
    int V;            
    list<int>* adj; 

    void addEdgeDirected(int v, int w) {
        adj[v].push_back(w);
    }

    void addEdgeUndirected(int v, int w) {
         adj[v].push_back(w);
        adj[w].push_back(v);        
    }

public:

    void addEdge(int v, int w, bool flag) {
        if(flag)    addEdgeDirected(v, w);
        addEdgeUndirected(v, w);
    }

    void create() {
        cout << "Enter the number of verticies: ";
        cin >> V;

        cout << "Is the graph directed graph(1 if yes or 0 for no): ";
        bool flag{}; cin >> flag;


        adj = new list<int>[V];

        for(int i = 0; i < V; i++){
            cout << "Enter the adjcents of vertex (-999 if not)\n" <<  i << ": ";
            int adjcent{}; cin >> adjcent;
            while(adjcent != -999){
                addEdge(i, adjcent, flag);
                cin >> adjcent;
            }
            cout << endl;
        }
    }

    void printGraph() {
        for(int i = 0; i < V; i++) {
            cout << i << " -> ";
            //adj[i].display();
            for (auto i : adj[i])
                cout << i << ' ';
            cout <<  endl;
        }
    }

    ~Graph() {
        delete[] adj;
    }
};

int main() {
    Graph g;

    g.create();

    cout << "Adjacency List Representation of the Graph:" << endl;
    g.printGraph();

    return 0;
}
