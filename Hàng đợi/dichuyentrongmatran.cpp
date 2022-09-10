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
ll a[1005][1005];
ll dp[1005][1005];
ll used[1005][1005];
int bfs(int s ,int t ){
    queue<pii> q;
    q.push({s, t});
    used[s][t]= 1;
    while(!q.empty()) {
        pii top = q.front(); q.pop();
        if(top.fi==m && top.se==n){
            return dp[top.fi][top.se];
        }
        int i = top.fi;
        int j = top.se;
        if(i+a[i][j]<=m&& used[i+a[i][j]][j]==0){
            q.push({i+ a[i][j], j });
            dp[i+a[i][j]][j] = dp[i][j] + 1;
            used[i+a[i][j]][j]= 1;
        }
        if(j+a[i][j]<=n&& used[i][j+a[i][j]]==0){
            q.push({i, j+ a[i][j] });
            dp[i][j+a[i][j]] = dp[i][j] + 1;
            used[i][j+a[i][j]] = 1;
        }
    }
    return -1;
}
void solve(){
    cin >> m >> n;
    FOR(i,1,m){
        FOR(j, 1, n)
            cin >> a[i][j];
    }
    ms(dp, 0);
    ms(used, 0);
    cout<<   bfs(1,1);

}
int main()
{
    
    faster;
    int t ;
    cin>> t ;
    while(t--){
        solve();
    }
    

}

