#include<iostream>
#include<algorithm>
using namespace std;

#define maxn 5001
#define edgeType int 
#define inf 1000000001

void initEdge(int n, edgeType graph[maxn][maxn])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			graph[i][j] = (i == j ? 0 : inf);
		}
	}

}

void addEdge(edgeType graph[maxn][maxn], int u, int v, int w)
{
	graph[u][v] = min(graph[u][v], w);
	graph[v][u] = min(graph[v][u], w);
}

edgeType prim(int n, edgeType graph[maxn][maxn])
{
	edgeType sum = 0;
	int visited[maxn] = { 0 };
	edgeType dist[maxn];

	for (int i = 0; i < n; i++)
	{
		dist[i] = graph[0][i];
	}
	visited[0] = 1;

	while (1)
	{
		edgeType minDist = inf;
		int minIndex = -1;
		for (int i = 0; i < n; i++)
		{
			if (!visited[i] && dist[i] < minDist)
			{
				minDist = dist[i];
				minIndex = i;
			}
		}
		
		if (minIndex == -1)
		{
			break;
		}
		visited[minIndex] = 1;
		sum += minDist;

		for(int i = 0;i<n;i++)
		{
			if (!visited[i] && dist[i] > graph[minIndex][i])
			{
				dist[i] = graph[minIndex][i];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (!visited[i])
		{
			return -1;
		}
	}
	return sum;
}

edgeType graph[maxn][maxn];

int main()
{
	int n, m;
	cin >> n >> m;
	initEdge(n, graph);
	while (m--)
	{
		int u, v;
		edgeType w;
		cin >> u >> v >> w;
		u--; v--;
		addEdge(graph, u, v, w);
	}
	edgeType idx = prim(n, graph);
	if (idx == -1)
	{
		cout << "orz" << endl;
	}
	else
	{
		cout << idx << endl;
	}
	return 0;
}