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



vll ke[1001];
int used[1001];

int n , m , u;
void dfs(int u){
    used[u]=1;
    cout<<u<<' ';
    for(int x : ke[u]){
        if(!used[x]){
            dfs(x);
        }
    }
}
void solve(){
    cin>>n>>m>>u;
    for(int i=0;i<m;i++){
        int x, y;
        cin>>x>>y;
        ke[x].pb(y);
        //ke[y].pb(x);

    }
    ms(used,0);
    for(int i=1;i<=n;i++){
        sort(all(ke[i]));
    }
    dfs(u);

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
