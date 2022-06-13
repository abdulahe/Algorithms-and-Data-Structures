// matricna susednosti usmereng grafa
// #include <stdio.h>
// #define N 4

// void init(int arr[][N])
// {
//     for (int i = 0; i < N; i++)
//         for (int j = 0; j < N; j++)
//             arr[i][j] = 0;
// }

// void addEdge(int arr[][N], int a, int b)
// {
//     arr[a][b] = 1;
//     // za neusmereni se samo doda
//     // arr[b][a] = 1;
// }

// void display(int arr[][N])
// {
//     for (int i = 0; i < N; i++)
//     {
//         printf("%d: ", i);
//         for (int j = 0; j < N; j++)
//             printf("%d ", arr[i][j]);
//         printf("\n");
//     }
// }

// int main()
// {
//     int GRAPH[N][N];
//     init(GRAPH);
//     addEdge(GRAPH, 0, 2);
//     addEdge(GRAPH, 0, 3);
//     addEdge(GRAPH, 2, 1);
//     addEdge(GRAPH, 1, 3);
//     display(GRAPH);
//     return 0;
// }

// liste susednosti

#include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int vertex;
//     struct node *next;
// };
// struct node *createNode(int);

// struct graph
// {
//     int numVertices;
//     struct node **adjLists;
// };

// struct node *createNode(int v)
// {
//     struct node *newNode = malloc(sizeof(struct node));
//     newNode->vertex = v;
//     newNode->next = NULL;
//     return newNode;
// }

// struct graph *createGraph(int vertices)
// {
//     struct graph *newGraph = malloc(sizeof(struct graph));
//     newGraph->numVertices = vertices;
//     newGraph->adjLists = malloc(vertices * sizeof(struct node *));
//     for (int i = 0; i < vertices; i++)
//     {
//         newGraph->adjLists[i] = NULL;
//     }
//     return newGraph;
// }

// void addEdge(struct graph *g, int s, int d)
// {
//     struct node *newNode = createNode(d);
//     newNode->next = g->adjLists[s];
//     g->adjLists[s] = newNode;

//     // newNode = createNode(s);
//     // newNode->next = g->adjLists[d];
//     // g->adjLists[d] = newNode;
// }

// void printGraph(struct graph *g)
// {
//     int v;
//     for (v = 0; v < g->numVertices; v++)
//     {
//         struct node *temp = g->adjLists[v];
//         printf("\n Vertex %d\n: ", v);
//         while (temp)
//         {
//             printf("%d -> ", temp->vertex);
//             temp = temp->next;
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     struct graph *g = createGraph(4);
//     addEdge(g, 0, 1);
//     addEdge(g, 0, 2);
//     addEdge(g, 0, 3);
//     addEdge(g, 1, 2);

//     printGraph(g);

//     return 0;
// }

// DFS

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int vertex;
    struct node *next;
};

struct graph
{
    int numVertices;
    int *visited;
    struct node **AdjList;
};

void DFS(struct graph *g, int vertex)
{
    struct node *adjList = g->AdjList[vertex];
    struct node *temp = adjList;
    g->visited[vertex] = 1;
    printf("Visited %d \n", vertex);
    while (temp != NULL)
    {
        int connectedVertex = temp->vertex;
        if (g->visited[connectedVertex] == 0)
        {
            DFS(g, connectedVertex);
        }
        temp = temp->next;
    }
}

struct node *createNode(int v)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

struct graph *createGraph(int vertices)
{
    struct graph *newGraph = malloc(sizeof(struct graph));
    newGraph->numVertices = vertices;
    newGraph->AdjList = malloc(vertices * sizeof(struct node *));
    newGraph->visited = malloc(vertices * sizeof(int));
    for (int i = 0; i < vertices; i++)
    {
        newGraph->AdjList[i] = NULL;
        newGraph->visited[i] = 0;
    }
    return newGraph;
}

void addEdge(struct graph *g, int b, int s)
{
    struct node *newNode = createNode(b);
    newNode->next = g->AdjList[s];
    g->AdjList[s] = newNode;

    newNode = createNode(s);
    newNode->next = g->AdjList[b];
    g->AdjList[b] = newNode;
}

void print(struct graph *g)
{
    for (int i = 0; i < g->numVertices; i++)
    {
        struct node *temp = g->AdjList[i];
        while (temp)
        {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}
int main()
{
    struct graph *graph = createGraph(4);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);

    print(graph);

    DFS(graph, 2);

    return 0;
    return 0;
}