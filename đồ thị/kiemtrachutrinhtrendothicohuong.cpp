#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<ll, ll>
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
#define ms(a, n) memset(a, n, sizeof(a))
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FOD(i, b, a) for (int i = b; i >= a; i--)
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
const ll MOD = 1e9 + 7;
int color[1001];
vll ke[1001];
int n , m ;
int ok;
void dfs(int i){
    color[i]=1;
    for(auto x : ke[i]){
        if(color[x]==0){
            dfs(x);
        }else if(color[x]==1){
            ok =1;
        }
    }
    color[i]=2;
}
void solve(){
    ok =0;
    cin>>n>>m;
    FOR(i,1,1000){
        ke[i].clear();
    }
    ms(color,0);
    FOR(i,1,m){
        int a, b;
        cin>>a>>b;
        ke[a].pb(b);
    }
    FOR(i,1,n){
        sort(all(ke[i]));
    }
    FOR(i,1,n){
        if(color[i]==0 ){
            dfs(i);
        }
    }
    cout<<(ok==1?"YES":"NO");el;
}

int main()
{
   #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
   #endif 
    faster;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
