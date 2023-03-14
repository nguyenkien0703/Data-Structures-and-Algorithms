#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, y, s = 0, k;
        cin >> n >> m;
        int check[n + 1] = {};
        vector<vector<int>> a(n + 1);
        for (int i = 0; i < m; i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for (int i = 1; i <= n; i++)
        {
            if (!check[i])
            {
                s++;
                check[i] = 1;
                stack<int> st;
                st.push(i);
                while (st.size())
                {
                    k = st.top();
                    st.pop();
                    for (auto j : a[k])
                    {
                        if (!check[j])
                        {
                            check[j] = 1;
                            st.push(j);
                        }
                    }
                }
            }
        }
        cout << s << endl;
    }
}
