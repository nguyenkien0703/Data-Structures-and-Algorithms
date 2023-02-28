
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pii pair<ll, ll> 
#define vii vector<pii> 
#define pb push_back 
#define fi first 
#define el cout<<endl
#define oo 1000000008
#define se second 
#define sz(a) a.size();
#define all(x) (x).begin(), (x).end()
#define vll vector<ll> 
#define vi vector<int >
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
#define f0(a) for(ll i = 0; i < (a); i++)
#define f1(a) for(ll i = 1; i <= (a); i++)
#define ms(a,n) memset(a,n,sizeof(a))
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define FOD(i,b,a) for(int i=b;i>=a;i--)
#define faster ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
const ll MOD = 1e9 + 7;
int  n, m ;
vll ke[1010];
ll used[1000];

void dfs(int u ){
    used[u]=1;
    for(auto x : ke[u]){
        if(!used[x]){
            dfs(x);
        }
    }
}


void solve(){
    cin>>n>> m ;
    FOR(i,1,n){
        ke[i].clear();
    }    
    ms(used,0);
    FOR(i,1,m){
        ll x, y;
        cin>> x>> y ;
        ke[x].pb(y);
        ke[y].pb(x);
    }
    FOR(i,1,n){
        sort(all(ke[i]));
    }
    int tplt = 0;
    FOR(i,1,n){
        if(!used[i]){
            ++tplt;
            dfs(i);
        }
    }
    // ms(used,0);
    FOR(i,1,n){
        ms(used,0);
        int subtplt = 0;
        used[i]=1;
        FOR(j,1,n){
            if(!used[j]){
                ++subtplt;
                dfs(j);
            }
        }
        if(subtplt > tplt) cout<< i<< ' ';
    }
    el;

}
int main()
{

    faster;

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    int t ;
    cin>> t;
    while(t--){
        solve();
        
    }

    

}







===============
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
