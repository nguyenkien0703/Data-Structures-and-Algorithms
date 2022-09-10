/*
Cho một tập gồm N phần tử được đánh số từ 1 đến N. Nhiệm vụ của bạn là liệt kê tất cả các tập con khác rỗng của N theo thứ tự từ điển tăng dần.

Input Format

Dòng duy nhất chứa số nguyên dương N.

Constraints

1<=N<=9;

Output Format

In ra các tập con của N theo thứ tự từ điển tăng dần.

Sample Input 0

4
Sample Output 0

1 
1 2 
1 2 3 
1 2 3 4 
1 2 4 
1 3 
1 3 4 
1 4 
2 
2 3 
2 3 4 
2 4 
3 
3 4 
4 

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
int n, k, ok, a[1000];
void ktao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
}
void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i--] = 0;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i] = 1;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    ok = 1;
    ktao();
    sinh();
    vector<string > ans;
    while (ok)
    {
        string tmp = "";
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 1)
            {
                tmp += to_string(i) + " ";
            }
        }
        if (!tmp.empty())
        {
            ans.push_back(tmp);
        }
        sinh();
    }
    sort(ans.begin(), ans.end());
    for(auto x : ans){
        cout<<x<<endl;;
    }
    cout<<endl;
}