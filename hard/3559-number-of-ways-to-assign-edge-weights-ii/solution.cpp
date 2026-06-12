class Solution {
public:
    static const int MOD = 1e9 + 7;
    static const int LOG = 20;

    vector<vector<int>> adj;
    vector<int> depth;
    vector<vector<int>> up;

    long long modPow(long long a, long long b) {
        long long res = 1;
        while (b) {
            if (b & 1) res = (res * a) % MOD;
            a = (a * a) % MOD;
            b >>= 1;
        }
        return res;
    }

    void dfs(int node, int parent) {
        up[node][0] = parent;

        for (int i = 1; i < LOG; i++) {
            up[node][i] = up[up[node][i - 1]][i - 1];
        }

        for (int nei : adj[node]) {
            if (nei == parent) continue;
            depth[nei] = depth[node] + 1;
            dfs(nei, node);
        }
    }

    int lca(int u, int v) {
        if (depth[u] < depth[v]) swap(u, v);

        int diff = depth[u] - depth[v];

        for (int i = LOG - 1; i >= 0; i--) {
            if (diff & (1 << i))
                u = up[u][i];
        }

        if (u == v) return u;

        for (int i = LOG - 1; i >= 0; i--) {
            if (up[u][i] != up[v][i]) {
                u = up[u][i];
                v = up[v][i];
            }
        }

        return up[u][0];
    }

    vector<int> assignEdgeWeights(vector<vector<int>>& edges,
                                  vector<vector<int>>& queries) {

        int n = edges.size() + 1;

        adj.assign(n + 1, {});
        depth.assign(n + 1, 0);
        up.assign(n + 1, vector<int>(LOG));

        for (auto &e : edges) {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs(1, 1);

        vector<int> ans;

        for (auto &q : queries) {
            int u = q[0];
            int v = q[1];

            if (u == v) {
                ans.push_back(0);
                continue;
            }

            int L = lca(u, v);

            long long d =
                depth[u] + depth[v] - 2LL * depth[L];

            ans.push_back(modPow(2, d - 1));
        }

        return ans;
    }
};