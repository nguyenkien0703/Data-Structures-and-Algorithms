/*

Cho số nguyên dương N và K, nhiệm vụ của bạn là liệt kê các xâu nhị phân có độ dài N và có K bit 1 theo thứ tự từ điển tăng dần. Sau đó tiếp tục liệt kê các xâu nhị phân mà chỉ có duy nhất K bit 1 liên tiếp.

Input Format

1 dòng chứa 2 số nguyên dương N và K.

Constraints

1<=K<=N<=15;

Output Format

Dòng đầu tiên in ra các xâu nhị phân có K bit 1. Dòng thứ 2 in ra các xâu nhị phân có duy nhất K bit 1 liên tiếp.

Sample Input 0

3 2
Sample Output 0

011 101 110 
011 110 
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fi first
#define se second
#define pb push_back
#define mpr make_pair
#define all(a) a.begin(), a.end()
#define ms(a, n) memset(a, n, sizeof(a))
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define RFOR(i, a, b) for (int i = b; i >= a; i--)
#define factphuongdz()          \
    ios::sync_with_stdio(NULL); \
    cout.tie(NULL);

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll, ll> pl;
typedef vector<ll> vll;
typedef vector<int> vii;
typedef pair<int, int> pi;
const int MOD = 1e9 + 7;

int x[1001], n, r, cnt = 1, ok;
void ktao()
{
    for (int i = 1; i <= n; i++)
    {
        x[i] = 0;
    }
}

void sinh()
{
    int i = n;
    while (i >= 1 && x[i] == 1)
    {
        x[i] = 0;
        --i;
    }
    if (i == 0)
        ok = 0;
    else
    {
        x[i] = 1;
    }
}
bool check()
{
    int count = 0;      
    bool isHave = false; 
    for (int i = 1; i <= n; i++)
    {
        if (x[i] == 0)
        { 
            count = 0;
        }
        else
        {
            count++; 
        }
        if (count > r)
        { 
            return false;
        }
        if (count == r)
        { 
            if (isHave == false)
                isHave = true;
            else
                return false; 
        }
    }

    return isHave;
}
int main()
{
    ios::sync_with_stdio(NULL);
    cout.tie(NULL);
    cin >> n >> r;
    ok = 1;
    ktao();
    vector<string> v1, v2;
    while (ok)
    {
        string s = "", res = "";
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += x[i];
            s += to_string(x[i]);
            res += to_string(x[i]);
        }
        if (sum == r)
            v1.pb(s);
        if (check())
            v2.pb(res);
        sinh();
    }
    sort(v1.begin(), v1.end());
    for (auto x : v1)
    {
        cout << x << " ";
    }
    cout << endl;
    for (auto x : v2)
        cout << x << " ";
    return 0;
}