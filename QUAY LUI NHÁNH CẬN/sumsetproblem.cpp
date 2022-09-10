/*
Cho mảng A[] gồm n phần tử, hãy xác định xem có thể chia mảng A[] thành 2 tập sao cho tổng của 2 tập bằng nhau hay không?

Input Format

Dòng đầu tiên là số nguyên n; Dòng thứ 2 gồm n số nguyên của mảng A[]

Constraints

1<=n<=20; 1<=A[i]<=100;

Output Format

In ra 1 nếu có thể chia mảng thành 2 phần bằng nhau, ngược lại in 0.

Sample Input 0

5
9 9 4 4 5 
Sample Output 0

0
Sample Input 1

4
1 2 3 4
Sample Output 1

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
#define in(a) cin >> a;
#define out(a) cout << a;
#define all(a) (begin(a), end(a))
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

int n, k, ok, a[1000], x[1000];
ll sum,s;
void Try(int i,int s ){
    if(ok ==1){
        return ;
    }
    if(s==sum/2){
        ok =1;
        return ;
    }
    FOR(j,i,n){
        if(s+a[j]<=sum/2){
            Try(i+1,s+a[j]);
        }
    }
    
}
void solve()
{
    cin >> n;
    sum = 0;
    ok =0;
    FOR(i, 1, n)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum &1)
    {
        cout << 0 << endl;
        return;
    }
    Try(1,0);
    if(!ok){
        cout<<0;
    }else cout<<1;

}
int main()
{
    faster;
    solve();
}