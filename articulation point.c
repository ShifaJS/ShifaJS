/// Articulation points Depth first search for undirected graph with matrix representation
/// by recursion / connection goes from u->v and v->u
/// suppose the graph is
///             1------3-----4-----5
///             |    / \
///             |   /    \
///             |  /      \
///             | /        \
///             2           6

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define MAX_SIZE 7
#define INF INT_MAX/2
int graph[MAX_SIZE][MAX_SIZE];
int prev[MAX_SIZE],discoveryTime[MAX_SIZE],finishingTime[MAX_SIZE];
char color[MAX_SIZE];
int time=0;
int stack[MAX_SIZE],bottom=0,top=-1;
int articulationPoints[MAX_SIZE],low[MAX_SIZE],index=0;

void printPath()
{
    int n=0;
    printf("path of %d : \n",stack[top]);
    while(n<=top)
    {
        printf("%d ",stack[n++]);
    }
    puts("");
}

void stackPush(int u)
{
    top++;
    stack[top]=u;
}

void stackPop()
{
    top--;
}

void dfsVisit(int u)
{
    color[u]='g';
    time=time+1;
    discoveryTime[u]=low[u]=time;
    int child=0;
    stackPush(u);
    for(int i=1;i<MAX_SIZE;i++)
    {
        int v=i;
        if(graph[u][v]==1 && color[v]=='w')
        {
            prev[v]=u;
            child++;
            dfsVisit(v);
            if(low[v]>=discoveryTime[u])
            {
                if(prev[u]==-1 && child>1)
                    articulationPoints[index++]=u;
                if(prev[u]!=-1)
                    articulationPoints[index++]=u;
            }
        }
        else if(graph[u][v]==1 && v!=prev[v])
        {
            if(discoveryTime[v]<low[u])
                low[u]=discoveryTime[v];
        }
    }

    color[u]='b';
    time+=1;
    finishingTime[u]=time;
    printPath();
    stackPop();
}

void printInfo()
{
    /// printing color
    for(int i=0;i<MAX_SIZE;i++)
        printf("%c ",color[i]);
    puts("");

    /// printing previous
    for(int i=0;i<MAX_SIZE;i++)
        printf("%d ",prev[i]);
    puts("");

    /// printing discovering and finishing time
    for(int i=0;i<MAX_SIZE;i++)
    {
        printf("for node %d: dis. %d and fin. %d \n",i,discoveryTime[i],finishingTime[i]);
    }
    puts("");

    /// printing articulation points
    for(int i=0;i<index;i++)
        printf("%d ",articulationPoints[i]);
    puts("");
}

int main()
{
    int edge;
    scanf("%d",&edge);

    for(int i=0;i<edge;i++)
    {
        int u,v;
        scanf("%d%d",&u,&v);
        graph[u][v]=1;
        graph[v][u]=1;
    }

    for(int i=0;i<MAX_SIZE;i++)
    {
        color[i]='w';
        prev[i]=-1;
        discoveryTime[i]=INF;
        finishingTime[i]=INF;
        low[i]=INF;
    }

    for(int i=1;i<MAX_SIZE;i++)
    {
        if(color[i]=='w')
        {
            dfsVisit(i);
        }
    }
    printInfo();
    return 0;
}

