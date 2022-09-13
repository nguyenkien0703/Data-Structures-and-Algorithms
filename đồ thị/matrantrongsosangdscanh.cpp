#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
int a[1005][1005];
vector <int> ke[1005];
int main()
{
    int n; cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i <= j && a[i][j]) cout << i << ' ' << j << ' ' << a[i][j] << '\n';
        }
    }
}