/*

Cho hai số nguyên lớn N và M có không quá 1000 chữ số. Người ta muốn tính xem liệu có thể lấy ra nhiều nhất bao nhiêu chữ số trong N (không cần liên tiếp) và giữ nguyên thứ tự của nó để tạo ra một số X sao cho ta cũng có thể tìm thấy X trong số M theo cách tương tự.

Input Format

Dòng thứ nhất ghi số N, dòng thứ 2 ghi số M

Constraints

1<=len(N), len(M) <= 1000

Output Format

In ra số chữ số nhiều nhất có thể của X

Sample Input 0

82619136359
5572555993152891122
Sample Output 0

5
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s1, s2;
    cin >> s1 >> s2;
    ll n1 = s1.size(), n2 = s2.size();
    vector<vector<int> > dp(n1+5, vector<int>(n2+5,0));
    for (ll i = 1; i <= n1; i++)
    {
        for (ll j = 1; j <= n2; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    cout<<dp[n1][n2];
}