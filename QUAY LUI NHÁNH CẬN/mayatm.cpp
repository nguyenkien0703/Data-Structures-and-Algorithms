/*

Problem
Submissions
Leaderboard
Discussions
Một máy ATM hiện có n (n ≤ 30) tờ tiền có giá trị t[1], t[2], …, t[n]. Hãy tìm cách trả ít tờ nhất với số tiền đúng bằng S (các tờ tiền có giá trị bất kỳ và có thể bằng nhau, mỗi tờ tiền chỉ được dùng một lần).

Input Format

Dòng 1 gồm 2 số nguyên n và S (S ≤ 10^9). Dòng thứ hai chứa n số nguyên t[1], t[2], …, t[n] (t[i] ≤ 10^9)

Constraints

1<=N<=30; 1<=S<=10^9; 1<=t[i]<=10^9;

Output Format

In ra số tờ tiền ít nhất phải trả, nếu không thể tìm được ra kết quả thì in -1.

Sample Input 0

6 30
10 4 10 5 8 8 
Sample Output 0

4
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1001], s, res = 1e9, n;

void ATM(ll sum, ll i, ll pos)
{
    if (sum == s)
    {
        res = min(res, i);
        return;
    }
    for (ll j = pos; j < n; ++j)
    {
        if (sum + a[j] <= s)
        {
            ATM(sum + a[j], i + 1, j + 1);
        }
    }
}

int main()
{
    cin >> n >> s;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ATM(0, 0, 0);
    if (res != 1e9)
        cout << res << endl;
    else
        cout << -1 << endl;
}