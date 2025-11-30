#include <cstdio>
#include <vector>
#define INF 9999

int findMin(int dist[], int vis[], int n) {
    int min = INF, idx = -1;
    for (int i = 0; i < n; i++) {
        if (vis[i] == 0 && dist[i] < min) {
            min = dist[i];
            idx = i;
        }
    }
    return idx;
}

void dj(int n, std::vector<std::vector<int>>& graph, int src, int nextHop[]) {
    int dist[n], vis[n], parent[n];

    for (int i = 0; i < n; i++) {
        dist[i] = INF;
        vis[i] = 0;
        parent[i] = -1;
    }
    dist[src] = 0;
    for (int count = 0; count < n - 1; count++) {
        int u = findMin(dist, vis, n);
        if (u == -1) {
            break;
        }
        vis[u] = 1;

        for (int v = 0; v < n; v++) {
            if (vis[v] == 0 && graph[u][v] != 0 && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
                parent[v] = u;
            }
        }
    }

    // nhop shi
    for (int i = 0; i < n; i++) {
        if (i == src) {
            nextHop[i] = src;
            continue;
        }
        int v = i;
        while (parent[v] != src && parent[v] != -1) {
            v = parent[v];
        }
        nextHop[i] = (parent[v] == -1) ? -1 : v;
    }

    printf("ROUTING TABLE FOR ROUTER %d\n", src);
    printf("Destination NextHop Cost\n");
    for (int i = 0; i < n; i++) {
        if (dist[i] != INF) {
            printf("%d %d %d\n", i, nextHop[i], dist[i]);
        }
        else {
            printf("%d - INF\n", i);
        }
    }
}


int main() {
    int n;

    printf("Enter number of routers: ");
    scanf("%d", &n);

    std::vector<std::vector<int>> graph(n, std::vector<int>(n));

    printf("Enter adjacency matrix (0 for no link):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    for (int src = 0; src < n; src++) {
        int nextHop[n];
        dj(n, graph, src, nextHop);
    }

    return 0;
}