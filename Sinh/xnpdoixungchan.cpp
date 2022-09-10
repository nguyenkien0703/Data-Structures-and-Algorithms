/*

Nhiệm vụ của bạn là hãy liệt kê các xâu nhị phân thuận nghịch có độ dài chẵn theo thứ tự từ điển với chiều dài không quá n kí tự.

Input Format

Dòng duy nhất chứa số nguyên N.

Constraints

2<=N<=30

Output Format

In ra các xâu nhị phân đối xứng có độ dài chẵn theo thứ tự từ điển.

Sample Input 0

4
Sample Output 0

00
0000
0110
1001
11
1111
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
int n, ok;
string s;
void sinh()
{
    int i = s.length() - 1;
    while (i >= 0 && s[i] == '1')
    {
        s[i--] = '0';
    }
    if (i == -1)
        ok = 0;
    else
        s[i] = '1';
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    vector<string> ans;
    for (int i = 1; i <= n / 2; i++)
    {
        ok = 1;
        s = string(i, '0');
        while (ok)

        {
            string t=s;
            reverse(begin(t), end(t));
            ans.pb(s+t);
            sinh();
        }
    }
    sort(ans.begin(), ans.end());
    for(auto x  : ans ) cout<<x<<endl;
}