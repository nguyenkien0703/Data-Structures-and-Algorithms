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






int n , m ;
int used[1001];
vll ke[1001];
int parent[1001];
int color[1001];
bool dfs(int u){
    color[u]=1;
    for(int x : ke[u]){
        if(color[x]==0){
            parent[x]=u;
            if(dfs(x)){
                return true;
            }
        }else if(color[x]==1){
            return true;
        }
    }
    color[u]=2;
    return false;
}
void solve(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        ke[a].pb(b);
       // ke[b].pb(a);

    }
    ms(used,0);
    ms(parent,0);
    ms(color, 0);
    FOR(i,1,n){
        sort(all(ke[i]));
    }
    for(int i=1;i<=n;i++){
        if(!used[i]){
            if(dfs(i)){
                cout<<1;
                return ;
            }
        }
    }
    cout<< 0;

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
