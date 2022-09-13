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







int used[1001];
vll ke[1001];
int disc[1001];
int low[1001];
int n , m;
int timer=0;
set<ll> tru;
int  dfs(int u , int par){
    int cnt =0;
    disc[u]=low[u]=++timer;
    for(int v : ke[u]){
        if(v==par ) continue;
        if(disc[v]==0){
            dfs(v,u);
            ++cnt;
            if(par!=-1 && low[v]>=disc[u]){
                tru.insert(u);
            }
            low[u]=min(low[u],low[v]);
        }else {
            low[u]=min(low[u],disc[v]);
        }
    }

return cnt ;


}
void solve(){

    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x , y;
        cin>>x>>y;
        ke[x].pb(y);
        ke[y].pb(x);
    }
    ms(used,0);
    for(int i=1;i<=n;i++){
        if(disc[i]==0){
            int ans =dfs(i,-1);
            if(ans >=2){
                tru.insert(i);
            }
        }
    }
    cout<< tru.size()<<endl;

}

int main()
{
    faster;
    solve();
    

}
