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
vll ke[10001];
int low[1001], disc[10001], timer = 0;
vii cau;

void  dfs(int u ,int par){
    low[u] = disc[u] = ++timer;
    for (int v :  ke[u]){
        
        if(v==par)
            continue;
        if(disc[v]==0){
            dfs(v, u);
            if(low[v]>disc[u]){
                cau.pb({u,v});
            }
            low[u]=min(low[u],low[v]);
        }else {
            low[u] = min(low[u], disc[v]);
        }
    }
}
void solve(){
    cin >> n >> m;
    for (int i = 0; i < m;i++){
        int x, y;cin>>x >> y;
        ke[x].pb(y);
        ke[y].pb(x);
    }
    for (int i = 1; i <= n;i++){
        sort(all(ke[i]));
    }
    for (int i = 1; i <= n;i++){
        if(disc[i]==0){

            dfs(i, -1);
        }

    }
    cout << cau.size();
    
}

int main()
{
    
    faster;
    solve();
}
