#pragma once

#include <vector>


using Edge = std::pair<int, int>;


class Graph {
private:
	std::vector<std::pair<int, Edge>> G;
	std::vector<std::pair<int, Edge>> T;
	int* parent;
	int V;
public:
	Graph(int V);
	void addWeightedEdge(int u, int v, int w);
	int findSet(int i);
	void unionSet(int u, int v);
	void kruskal();
	void printTree();
	void printGraph();
};