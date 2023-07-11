#include <stdio.h>
#include <stdlib.h>

struct Graph {
    int numVertices;
    int** adjacencyMatrix;
};

struct Graph* createGraph(int numVertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->numVertices = numVertices;

    graph->adjacencyMatrix = (int**)malloc(numVertices * sizeof(int*));
    for (int i = 0; i < numVertices; i++) {
        graph->adjacencyMatrix[i] = (int*)calloc(numVertices, sizeof(int));
    }

    return graph;
}

void addEdge(struct Graph* graph, int src, int dest) {
    graph->adjacencyMatrix[src][dest] = 1;
    graph->adjacencyMatrix[dest][src] = 1;
}

int getDegree(struct Graph* graph, int vertex) {
    int degree = 0;
    for (int i = 0; i < graph->numVertices; i++) {
        if (graph->adjacencyMatrix[vertex][i] == 1) {
            degree++;
        }
    }
    return degree;
}

int isCompleteGraph(struct Graph* graph) {
    int numVertices = graph->numVertices;
    int totalEdges = numVertices * (numVertices - 1) / 2;

    int actualEdges = 0;
    for (int i = 0; i < numVertices; i++) {
        for (int j = i + 1; j < numVertices; j++) {
            if (graph->adjacencyMatrix[i][j] == 1) {
                actualEdges++;
            }
        }
    }

    return (actualEdges == totalEdges);
}

void printGraph(struct Graph* graph) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < graph->numVertices; i++) {
        for (int j = 0; j < graph->numVertices; j++) {
            printf("%d ", graph->adjacencyMatrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int numVertices;
    printf("Enter the number of vertices: ");
    scanf("%d", &numVertices);

    struct Graph* graph = createGraph(numVertices);

    int numEdges;
    printf("Enter the number of edges: ");
    scanf("%d", &numEdges);

    printf("Enter the edges (source destination):\n");
    for (int i = 0; i < numEdges; i++) {
        int src, dest;
        scanf("%d %d", &src, &dest);
        addEdge(graph, src, dest);
    }

    printf("\nGraph:\n");
    printGraph(graph);

    printf("\nNumber of Vertices: %d\n", graph->numVertices);

    int numActualEdges = 0;
    for (int i = 0; i < graph->numVertices; i++) {
        numActualEdges += getDegree(graph, i);
    }
    numActualEdges /= 2;
    printf("Number of Edges: %d\n", numActualEdges);

    printf("\nDegree of Each Vertex:\n");
    for (int i = 0; i < graph->numVertices; i++) {
        int degree = getDegree(graph, i);
        printf("Vertex %d: %d\n", i, degree);
    }

    if (isCompleteGraph(graph)) {
        printf("\nThe graph is complete.\n");
    } else {
        printf("\nThe graph is not complete.\n");
    }

    return 0;
}
