#include <iostream>
#include <vector>
using namespace std;

struct Edge {
    int u, v;
    long long w;
};

const long long INF = 4e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, s;
    cin >> n >> m >> s;
    
    vector<Edge> edges(m);
    for (int i = 0; i < m; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }
    
    vector<long long> dist(n + 1, INF);
    dist[s] = 0;
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m; j++) {
            int u = edges[j].u;
            int v = edges[j].v;
            long long w = edges[j].w;
            
            if (dist[u] != INF && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }
    
    for (int j = 0; j < m; j++) {
        int u = edges[j].u;
        int v = edges[j].v;
        long long w = edges[j].w;
        
        if (dist[u] != INF && dist[u] + w < dist[v]) {
            cout << "Negative cycle" << endl;
            return 0;
        }
    }
    
    for (int i = 1; i <= n; i++) {
        if (dist[i] == INF) {
            cout << "inf ";
        } else {
            cout << dist[i] << " ";
        }
    }
    cout << endl;
    
    return 0;
}
