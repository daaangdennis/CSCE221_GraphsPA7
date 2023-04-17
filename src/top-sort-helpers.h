#pragma once

#include <unordered_map>

#include "weighted-graph.hpp"
#include "graph-types.h"

template <typename T>
void computeIndegrees(const WeightedGraph<T>& graph, std::unordered_map<value_type<T>, int>& indegrees) {
    // TODO store the indegree for each vertex in the graph in the indegrees map
    for(value_type<T> vertex: graph)
    {
        indegrees[vertex] = 0;
    }

    for(adjacency_list<T> adj_list: graph)
    {
        for(value_type<T> vertex: adj_list)
        {
            indegrees[vertex] += 1;
        }
    }
}
