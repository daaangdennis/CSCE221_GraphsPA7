#pragma once

#include <unordered_map>

#include "weighted-graph.hpp"
#include "graph-types.h"

template <typename T>
void computeIndegrees(const WeightedGraph<T>& graph, std::unordered_map<value_type<T>, int>& indegrees) {
    // TODO store the indegree for each vertex in the graph in the indegrees map

    // Set each indegree initially to 0
    for(auto it = graph.begin(); it != graph.end(); it++)
    {
        value_type<T> vertex = it->first;
        indegrees[vertex] = 0;
    }

    // Compute indegrees
    for(auto it = graph.begin(); it != graph.end(); it++)
    {
        value_type<T> vertex = it->first;
        for(auto [dst_vertex, weight]: graph.at(vertex))
        {
            indegrees[dst_vertex] += 1;
        }
    }
}
