#include "graph.h"
#include <iostream>

Graph::Graph(int V) {
	parent = new int[V];

	for (int i = 0; i < V; ++i)
		parent[i] = i;

	G.clear();
	T.clear();
}


void Graph::addWeightedEdge (int u, int v, int w) {
	G.push_back(std::make_pair(w, Edge(u, v)));
}

int Graph::findSet(int i) {
	if (i == parent[i])
		return i;
	else
		return findSet(parent[i]);
}

void Graph::unionSet(int u, int v) {
	parent[u] = parent[v];
}

void Graph::kruskal() {
	int uRep, vRep;
	for (int i = 0; i < G.size(); ++i) {
		uRep = findSet(G[i].second.first);
		vRep = findSet(G[i].second.second);
		if (uRep != vRep) {
			T.push_back(G[i]);
			unionSet(uRep, vRep);
		}
	}
}

void Graph::printTree() {
	std::cout << "(Tree) Edge : Weight\n";
	for (int i = 0; i < T.size(); ++i) {
		std::cout << T[i].second.first << " - " << T[i].second.second << " : " << T[i].first << "\n";
	}
}

void Graph::printGraph() {
	std::cout << "(Graph) Edge : Weight\n";
	for (int i = 0; i < G.size(); ++i) {
		std::cout << G[i].second.first << " - " << G[i].second.second << " : " << G[i].first << "\n";
	}
}