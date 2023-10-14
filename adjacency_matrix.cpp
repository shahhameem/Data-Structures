#include <iostream>
#include <vector>
using namespace std;

class Graph {
    private:
        int V;
        vector<vector<int>> adj;
    
    public:
        void create() {
            cout << "Enter the number of verticies: ";
            cin >> V;

            adj.resize(V, vector<int>(V));

            cout << "Is there any edge between the given two edges write 1 else 0" << endl;
            int edge{};
            for(int i = 0; i < V; i++) {

                for(int j = 0; j < V; j++) {

                    cout << "Between " << i << " & " << j << ": ";
                    cin >> edge;
                    adj[i][j] = edge;
                }
            }
        }
        void printGraph() {
            for(int i = 0; i < V; i++) {
                for(int j = 0; j < V; j++) {
                    cout << adj[i][j] << "  ";
                }
                cout << endl;
            }          
        }
};

int main() {
    Graph g;

    g.create();

    cout << "Adjacency Matrix Representation of the Graph:" << endl;
    g.printGraph();

    return 0;
}