/*
Có n quả táo với khối lượng đã biết. Nhiệm vụ của bạn là chia táo thành hai nhóm sao cho sự khác biệt giữa trọng lượng của 2 nhóm là nhỏ nhất.

Input Format

Dòng 1 là số nguyên dương N : số lượng quả táo. Dòng thứ 2 là N số nguyên p1,p2,...,pn là trọng lượng tương ứng của các quả táo.

Constraints

1<=N<=20; 1<=pi<=10^9;

Output Format

In ra độ chênh lệch nhỏ nhất giữa 2 nhóm táo.

Sample Input 0

5
3 2 7 4 1
Sample Output 0

1

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define vii vector<pii>
#define pb push_back
#define fi first
#define se second
#define foru(i, a, b) for (int i = a; i < b; i++)
#define ford(i, b, a) for (int i = b; i >= a; i--)
const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int w[n];
    for (int &x : w)
        cin >> x;
    ll res = (ll)1e18 + 5;
    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        sum1 = 0, sum2 = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum1 += w[j];
            }
            else
                sum2 += w[j];
        }
        res = min(res, abs(sum1 - sum2));
    }
    cout << res << endl;
}