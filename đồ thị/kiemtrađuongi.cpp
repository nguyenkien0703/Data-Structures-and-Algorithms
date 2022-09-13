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
vll ke[1001];
int used[1001];
int tplt[1001];
int cnt=0;
void bfs(int u ){
    queue<int> q;
    q.push(u);
    used[u]=1;
    while(!q.empty()){
        int top=q.front();
        q.pop();
        tplt[top]=cnt;
        for(int x : ke[top]){
            if(!used[x]){
                q.push(x);
                used[x]=1;
            }
        }
    }
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
    ms(tplt,0);
    for(int i=1;i<=n;i++){
        sort(all(ke[i]));
    }
    for(int i=1;i<=n;i++){
        if(!used[i]){
            ++cnt;
            bfs(i);
        }
    }

    int t ;
    cin>>  t;
    while(t--){
        int a, b;
        cin>> a>>    b;
        if(tplt[a]==tplt[b]){
            cout<<1;
        }else cout<<-1;
        cout<<endl;

    }
}



int main()
{
    faster;
    solve();    

}
