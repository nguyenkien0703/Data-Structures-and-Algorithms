/*
Cho đồ thị vô hướng G = (V, E) được biểu diễn dưới dạng danh sách cạnh. Hãy đếm số lượng đỉnh trụ của đồ thị.

Input Format

Dòng đầu tiên là 2 số n, m, tương ứng với số lượng đỉnh, cạnh của đồ thị. Các đỉnh của đồ thị được đánh số từ 1 tới n. m dòng tiếp theo mỗi dòng chứa đỉnh u, v (u != v) tương ứng với một cạnh của đồ thị.

Constraints

1=<=n<=1000; 1<=m<=n*(n-1)/2;

Output Format

In ra số lượng đỉnh trụ của đồ thị

Sample Input 0

10 6
5 4
5 2
10 2
10 7
5 3
10 1
Sample Output 0

3
Explanation 0

3 đỉnh trụ của đồ thị là : 2, 5, 10

*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<ll, ll> 
#define vii vector<pii> 
#define pb push_back 
#define fi first 
#define el cout<<endl
#define se second 
#define in(a) cin>>  a;
#define out(a) cout<<  a;
#define all(x) (x).begin(), (x).end()
#define rep(a) for(int i = 0; i < (a); i++)
#define vll vector<ll> 
#define vi vector<int >
#define ms(a,n) memset(a,n,sizeof(a))
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,b,a) for(int i=b;i>=a;i--)
#define faster ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
const ll MOD = 1e9 + 7;
int n, m;
vll ke[1001];
ll used[1001];
ll degree[1001];

void solve(){

    cin >> n >> m;
    ms(degree, 0);
    FOR(i,0,m-1){
        int x, y;
        cin >> x >> y;
        ke[x].pb(y);
        degree[x]++;
        degree[y]++;

        ke[y].pb(x);

    }
    ms(used,0);
    int cnt = 0;
    for (int i = 1; i <= n;i++){
        if(degree[i]>=2){
            ++cnt;
        }
    }
    cout << cnt;
}

int main()
{
    
    faster;
  
    solve();
    
    

}
