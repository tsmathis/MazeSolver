#include "graph.h"
#include <iostream>


int main() {
    Graph g(6);
    g.addWeightedEdge(0, 1, 4);
    g.addWeightedEdge(0, 2, 4);
    g.addWeightedEdge(1, 2, 2);
    g.addWeightedEdge(1, 0, 4);
    g.addWeightedEdge(2, 0, 4);
    g.addWeightedEdge(2, 1, 2);
    g.addWeightedEdge(2, 3, 3);
    g.addWeightedEdge(2, 5, 2);
    g.addWeightedEdge(2, 4, 4);
    g.addWeightedEdge(3, 2, 3);
    g.addWeightedEdge(3, 4, 3);
    g.addWeightedEdge(4, 2, 4);
    g.addWeightedEdge(4, 3, 3);
    g.addWeightedEdge(5, 2, 2);
    g.addWeightedEdge(5, 4, 3);
    g.kruskal();
    g.printGraph();
    g.printTree();
    return 0;
}