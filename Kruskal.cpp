#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int src, dest, weight;
};

class Graph {
    int V;
    vector<Edge> edges;

public:
    Graph(int V) : V(V) {}

    void addEdge(int src, int dest, int weight) {
        Edge edge = {src, dest, weight};
        edges.push_back(edge);
    }

    int find(vector<int>& parent, int i) {
        if (parent[i] == -1)
            return i;
        return find(parent, parent[i]);
    }

    void Union(vector<int>& parent, int x, int y) {
        int xset = find(parent, x);
        int yset = find(parent, y);
        parent[xset] = yset;
    }

    vector<Edge> kruskalMST() {
        vector<Edge> result;
        int e = 0;
        int i = 0;
        edges.reserve(V);

        sort(edges.begin(), edges.end(), [](const Edge& a, const Edge& b) {
            return a.weight < b.weight;
        });

        vector<int> parent(V, -1);

        while (e < V - 1 && i < edges.size()) {
            Edge next_edge = edges[i++];
            int x = find(parent, next_edge.src);
            int y = find(parent, next_edge.dest);

            if (x != y) {
                result.push_back(next_edge);
                Union(parent, x, y);
                e++;
            }
        }

        return result;
    }
};

int main() {
    int V = 4;
    Graph g(V);

    g.addEdge(0, 1, 10);
    g.addEdge(0, 2, 6);
    g.addEdge(0, 3, 5);
    g.addEdge(1, 3, 15);
    g.addEdge(2, 3, 4);

    vector<Edge> result = g.kruskalMST();
    cout << "Edges of MST using Kruskal's Algorithm:" << endl;
    for (const Edge& edge : result) {
        cout << edge.src << " - " << edge.dest << " : " << edge.weight << endl;
    }

    return 0;
}
