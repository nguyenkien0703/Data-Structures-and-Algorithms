/*

Bạn được cung cấp một cây gốc với các nút và nút 1 là gốc. Có một đường đi duy nhất giữa hai nút bất kỳ. Ở đây, d(i, j) được định nghĩa là số cạnh trong một đường đi ngắn nhất giữa 2 nút i và j. Nhiệm vụ của bạn phải tìm số lượng cặp i, j sao cho d(i, j) = d(1, i) - d(1, j).

Input Format

Dòng đầu tiên là N là số lượng nút của cây. N - 1 dòng tiếp theo là các cạnh của cây.

Constraints

1<=N<=1000;

Output Format

In ra số lượng cặp (i, j) thỏa mãn yêu cầu của đầu bài.

Sample Input 0

10
9 10
5 9
7 4
4 5
2 3
6 7
7 8
3 6
1 2
Sample Output 0

51
Sample Input 1

4
1 2
2 3
3 4
Sample Output 1

10
Explanation 1

Các cặp thỏa mãn : (1, 1), (1, 2), (1, 3), (1, 4), (2, 2), (2, 3), (2, 4), (3, 3), (3, 4), (4, 4).

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






int n , s,t,u,v ;
int used[1001];
vll ke[1001];
int parent[1001];
int color[1001];
ll dp[1001][1001];
ll a[1001][1001];
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};

ll d[1001];
ll dfs(int u){
    used[u]=1;
    int cnt =1;
    for(int x : ke[u]){
        if(!used[x]){
            cnt+=dfs(x);
        }
    }
    d[u]=cnt;
    return cnt ;
}


void solve(){
    cin>> n;
    FOR(i,1,n-1){
        int a, b;
        cin>>a>>b;
        ke[a].pb(b);
        ke[b].pb(a);
    }
    ms(used,0);
    ms(parent,0);
    ms(color,0);
    dfs(1);
    ll ans =0;
    for(int i=1;i<=n;i++){
        ans +=d[i];
    }
    cout<< ans ;





}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    faster;
    solve();
    

}
