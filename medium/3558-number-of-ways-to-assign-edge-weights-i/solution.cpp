class Solution {
public:
    static const long long MOD = 1000000007;

    long long power(long long a, long long b) {
        long long res = 1;

        while (b > 0) {
            if (b & 1)
                res = (res * a) % MOD;

            a = (a * a) % MOD;
            b >>= 1;
        }

        return res;
    }

    int maxDepth(vector<vector<int>>& graph, int node, int parent) {
        int depth = 0;

        for (int nbr : graph[node]) {
            if (nbr != parent) {
                depth = max(depth,
                            1 + maxDepth(graph, nbr, node));
            }
        }

        return depth;
    }

    int assignEdgeWeights(vector<vector<int>>& edges) {
        int n = edges.size() + 1;

        vector<vector<int>> graph(n + 1);

        for (auto &e : edges) {
            int u = e[0];
            int v = e[1];

            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        int d = maxDepth(graph, 1, 0);

        if (d == 0) return 0;

        return power(2, d - 1);
    }
};