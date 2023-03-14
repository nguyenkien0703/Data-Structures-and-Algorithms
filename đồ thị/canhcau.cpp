#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
vector<bool> check;
vector<vector<int>> a;
void bfs(int n, int x, int y)
{
    queue<int> q;
    q.push(n);
    while (q.size())
    {
        int u = q.front();
        q.pop();
        for (auto v : a[u])
        {
            if ((u == x && v == y) || (u == y && v == x))
                continue;
            if (check[v])
            {
                check[v] = 0;
                q.push(v);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, stp = 0, s;
        cin >> n >> m;
        a.clear();
        a.resize(n + 1);
        check.clear();
        check.resize(n + 1, 1);
        vector<pair<int, int>> e(m);
        for (int i = 0; i < m; i++)
        {
            cin >> e[i].first >> e[i].second;
            a[e[i].first].push_back(e[i].second);
            a[e[i].second].push_back(e[i].first);
        }
        sort(e.begin(), e.end());
        for (int i = 1; i <= n; i++)
        {
            if (check[i])
            {
                stp++;
                check[i] = 0;
                bfs(i, -1, -1);
            }
        }
        for (int i = 0; i < m; i++)
        {
            check.clear();
            check.resize(n + 1, 1);
            s = 0;
            for (int j = 1; j <= n; j++)
            {
                if (check[j])
                {
                    s++;
                    check[j] = 0;
                    bfs(j, e[i].first, e[i].second);
                }
            }
            if (s > stp)
                cout << e[i].first << " " << e[i].second << " ";
        }
        cout << endl;
    }
}
