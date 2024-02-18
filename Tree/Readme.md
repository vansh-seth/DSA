# Graph Data Structure Overview

## Introduction

In the realm of computer science, a graph data structure serves as a foundational tool for modeling relationships between entities. Imagine social media platforms like Facebook, where every entity, be it a user, photo, event, group, or page, can be viewed as a node. Each interaction or relationship between these entities becomes an edge in the graph.

## Example: Facebook Graph

Consider Facebook as an example. Users, groups, pages, events, and more are all represented as nodes within the graph. Actions such as making friends, joining groups, or liking pages create connections or edges between these nodes.

## Components of a Graph

A graph, denoted as \( G = (V, E) \), consists of:

- **Vertices (V)**: These are the nodes representing entities like users or pages.
- **Edges (E)**: These are the connections between nodes, often represented as ordered pairs of vertices, indicating relationships.

## Graph Terminology

- **Adjacency**: Two vertices are adjacent if there exists an edge between them.
- **Path**: A sequence of edges enabling traversal from one vertex to another.
- **Directed Graph**: In this type of graph, edges have directionality, meaning \( (u, v) \) does not necessarily imply \( (v, u) \).

## Graph Representation

Graphs can be represented in two primary ways:

### 1. Adjacency Matrix

- A 2D array where rows and columns represent vertices.
- If \( a[i][j] = 1 \), it signifies an edge between vertex \( i \) and vertex \( j \).
- For undirected graphs, the matrix is symmetric about the diagonal.

### 2. Adjacency List

- An array of linked lists where each index represents a vertex.
- Each element in the linked list corresponds to vertices connected to the indexed vertex.

## Graph Operations

Common graph operations include:

- Checking element presence in the graph.
- Traversing the graph to visit all vertices or find specific paths.
- Adding elements (vertices or edges) to the graph.
- Finding paths between vertices.
