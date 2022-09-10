/*

Ta gọi một cặp số (x, y) là tương tự nhau nếu chúng có cùng tính chất chẵn lẻ hoặc có abs(x - y) = 1. Bạn được cung cấp một mảng A[] có N phần tử, hãy kiểm tra xem có thể chia N phần tử này thành các cặp, sao cho mỗi cặp số đều tương tự nhau.

Input Format

Dòng đầu tiên chứa số nguyên dương N là số chẵn. Dòng 2 chứa N số nguyên của mảng A[]

Constraints

1<=N<=100; 1<=A[i]<=1000;

Output Format

In ra YES nếu có thể chia thành các cặp tương tự, ngược lại in ra NO

Sample Input 0

6
78 17 17 42 11 43 
Sample Output 0

YES

*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define vii vector<pii>
#define pb push_back
#define fi first
#define el cout << endl
#define se second
#define in(a) cin >> a;
#define out(a) cout << a;
#define all(x) (x).begin(), (x).end()
#define rep(a) for (int i = 0; i < (a); i++)
#define vll vector<ll>
#define vi vector<int>
#define ms(a) memset(a, sizeof(a))
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FOD(i, b, a) for (int i = b; i >= a; i--)
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const ll MOD = 1e9 + 7;

int main()
{
    faster;
    int n;
    cin >> n;
    vll a(n), b, c;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] & 1)
        {
            b.pb(a[i]);
        }
        else
        {
            c.pb(a[i]);
        }
    }
    if (c.size() % 2 == 0 && b.size() % 2 == 0)
    {
        cout << "YES\n";
        return 0;
    }
    int cnt =0;
    int ans =c.size();
    int ok =0;
    if (c.size() % 2 == 1 && b.size() % 2 == 1)
    {
        for (int i = 0; i < c.size(); i++)
        {
            // int ok =1;
            
            for (int j = 0; j < b.size(); j++)
            {
                if(abs(c[i]-b[j])==1){
                    ok=1;
                    cout<<"YES\n";
                    return 0;
                }
            }
        }
    }
    if(!ok){
        cout<<"NO\n";
    }
}
