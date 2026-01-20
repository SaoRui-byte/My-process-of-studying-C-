#include<iostream>
#include<queue>
#include<vector>
using namespace std;

#define maxn 2022
#define eType int 
#define inf 1000000000
#define relaxCond <

struct EDGE
{
	int v;
	eType w;
	EDGE(){}
	EDGE(int _v,eType _w):v(_v),w(_w){}
};

void initEdge(int n,vector<EDGE>* edges)
{
	for (int i = 0; i < n; i++)
	{
		edges[i].clear();
	}
}

void addEdge(vector<EDGE>* edges,int u,int v,int w)
{
	edges[u].push_back(EDGE(v, w));
}

void SPFAInit(int n,int st,vector<EDGE>* edges,bool* inqueue,queue<int>& q,eType* dist)
{
	for (int i = 0; i < n; i++)
	{
		dist[i] = inf;
		inqueue[i] = false;
	}
	dist[st] = 0;
	inqueue[st] = true;
	q.push(st);
}

bool SPFAUpdate(int u,int n,int st, vector<EDGE>* edges,eType* dist,bool* inqueue,queue<int>& q,int* cnt)
{
	for (int i = 0; i < edges[u].size(); i++)
	{
		int v = edges[u][i].v;
		eType w = edges[u][i].w;
		if (dist[v] > dist[u] + w)
		{
			dist[v] = dist[u] + w;
			cnt[v]++;

			if (cnt[v] >= n)
			{
				return true;
			}

			if (!inqueue[v])
			{
				inqueue[v] = true;
				q.push(v);
			}
		}
	}
	return false;
}


bool SPFA(int n,int st,vector<EDGE>* edges,eType* dist)
{
	bool inqueue[maxn] = {false};
	queue<int> q;
	int cnt[maxn] = { 0 };
	SPFAInit(n, st, edges, inqueue, q, dist);

	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		inqueue[u] = false;

		if (SPFAUpdate(u, n, st, edges, dist, inqueue, q, cnt))
		{
			return true;
		}

	}
	return false;
}

int gcd(int a, int b)
{
	return !b ? a : gcd(b, a % b);
}

int lcm(int a, int b)
{
	return a / gcd(a, b) * b;
}

vector<EDGE> edges[maxn];
eType dist[maxn];


int main()
{
	int n = 2021;
	initEdge(n, edges);
	for (int i = 1; i <= n; ++i) {
		int a = i;
		for (int j = 1; j - i <= 21; ++j) {
			if (i - j > 21) continue;
			if (j > n) break;
			int b = j;
			int a = i;
			addEdge(edges, --a,--b, lcm(i, j));
		}
	}

	SPFA(n, 0, edges, dist);
	cout << dist[n - 1] << endl;

	return 0;
}