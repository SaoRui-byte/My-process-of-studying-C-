#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define inf 1000000001
#define maxn 100001
#define valueType int

struct Dist
{
	int v;
	valueType w;
	Dist();
	Dist(int v_, valueType w_) :v(v_), w(w_) {};
	bool operator<(const Dist& d) const
	{
		return w > d.w; //Ð¡¶¥¶Ñ
	}
};

typedef priority_queue<Dist> Heap;

void addEdge(vector<Dist>* edges, int u, int v, valueType w)
{
	edges[u].push_back(Dist(v, w));
}

void dijkstraInit(int n, int st, Heap& heap, valueType* d, bool* visitied)
{
	for (int i = 0; i < n; i++)
	{
		d[i] = inf;
		visitied[i] = false;
	}
	d[st] = 0;
	heap.push(Dist(st, d[st]));
}

int dijkstraFindMin(Heap& heap)
{
	Dist t = heap.top();
	heap.pop();
	return t.v;
}

void dijkstraUpdate(int n, int u, valueType* d, Heap& heap, bool* visited, vector<Dist>* edges)
{
	if (visited[u])
	{
		return;
	}
	visited[u] = true;
	for (int i = 0; i < edges[u].size(); i++)
	{
		int v = edges[u][i].v;
		valueType w = edges[u][i].w;
		if (d[v] > w + d[u])
		{
			d[v] = w + d[u];
			heap.push(Dist(v, d[v]));
		}
	}
}

void DijkstraHeap(int n, int st, valueType* d, vector<Dist>* edges)
{
	Heap heap;
	bool visited[maxn] = { false };
	dijkstraInit(n, st, heap, d, visited);
	while (!heap.empty())
	{
		int u = dijkstraFindMin(heap);
		dijkstraUpdate(n, u, d, heap, visited, edges);
	}
}

valueType d[maxn];
vector<Dist> edges[maxn];

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int u, v;
		valueType w;
		cin >> u >> v >> w;
		u--, v--;
		addEdge(edges,u, v, w);
	}

	DijkstraHeap(n, 0, d, edges);
	if (d[n - 1] == inf)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << d[n - 1] << endl;
	}
	return 0;
}
