/*
Cho đồ thị có hướng G = (V, E) được biểu diễn dưới dạng danh sách cạnh. Hãy kiểm tra đồ thị có liên thông mạnh hay không? Bài này các bạn thử cài đặt bằng 3 cách là : brute force, thuật toán Tarjan, thuật toán Kosaraju.

Input Format

Dòng đầu tiên là 2 số n, m, tương ứng với số lượng đỉnh, cạnh của đồ thị. Các đỉnh của đồ thị được đánh số từ 1 tới n. m dòng tiếp theo mỗi dòng chứa đỉnh u, v (u != v) tương ứng với một cạnh của đồ thị.

Constraints

1=<=n<=1000; 1<=m<=n*(n-1)/2;

Output Format

In ra 1 nếu đồ thị liên thông mạnh, ngược lại in ra 0.

Sample Input 0

6 14
3 4
3 1
2 5
2 6
4 6
2 3
5 6
1 5
1 2
3 5
4 5
6 3
4 2
1 4
Sample Output 0

1

*/

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
        int n, m, x, y, ok = 1;
        cin >> n >> m;
        queue<int> q;
        vector<bool> check(n + 1, 0);
        vector<vector<int>> a(n + 1);
        for (int i = 0; i < m; i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
        }
        q.push(1);
        check[1] = 1;
        while (q.size())
        {
            x = q.front();
            q.pop();
            for (auto y : a[x])
            {
                if (check[y]==0)
                {
                    check[y] = 1;
                    q.push(y);
                }
            }
        }
        for (int i = 2; i <= n; i++)
        {
            if (check[i]==0)
            {
                ok = 0;
                break;
            }
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
