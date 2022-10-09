/// Breadth first search implementation for directed graph by matrix representation
/// Needs queue data structure  / connection goes from u->v
///   suppose the graph is:
///         3
///        / \
///        2  5
///       / \
///       1  4

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define MAX_SIZE 6
#define INF INT_MAX/2
int graph[MAX_SIZE][MAX_SIZE];
int distance[MAX_SIZE]= {INF},prev[MAX_SIZE],queue[MAX_SIZE],front=0,rear=-1;
char color[MAX_SIZE];

void enqueue(int data)
{
    rear++;
    queue[rear]=data;
}

int dqueue()
{
    int data=queue[front];
    front++;
    return data;
}

int queueSize()
{
    return front>rear ? 0:1;
}

void bfs(int source)
{
    while(queueSize())
    {
        int u=dqueue();
        for(int i=0; i<MAX_SIZE; i++)
        {
            int v=i;
            if(graph[u][v]==1 && color[v]=='w')
            {
                distance[v]=distance[u]+1;
                prev[v]=u;
                color[v]='g';
                enqueue(v);
            }
        }
        color[u]='b';
    }
}

void printInfo(int source)
{
    /// present color
    for(int i=0; i<MAX_SIZE; i++)
        printf("%c ",color[i]);
    puts("");

    /// previous node
    for(int i=0; i<MAX_SIZE; i++)
        printf("%d ",prev[i]);
    puts("");

    /// distance from source
    for(int i=0; i<MAX_SIZE; i++)
        printf("%d ",distance[i]);
    puts("");
}

void printPath(int source,int v)
{
    if(v==source)
    {
        printf("%d ",source);
        return ;
    }
    else if(prev[v]==-1)
    {
        printf("no path");
        return ;
    }
    else
    {
        printPath(source,prev[v]);
        printf("%d ",v);
    }
}

int main()
{
    int edge;
    scanf("%d",&edge);

    for(int i=0; i<edge; i++)
    {
        int u,v;
        scanf("%d%d",&u,&v);
        graph[u][v]=1;
    }

    for(int i=0; i<MAX_SIZE; i++)
    {
        color[i]='w';
        prev[i]=-1;
    }

    int source;
    scanf("%d",&source);
    distance[source]=0;
    color[source]='g';
    enqueue(source);
    bfs(source);

    printInfo(source);
    for(int i=0; i<MAX_SIZE; i++)
    {
        printPath(source,i);
        puts("");
    }
}
