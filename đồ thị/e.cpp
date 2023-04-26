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
int n  , m ;
ll d[105][105];
void solve(){
    cin>> n>> m ;
    FOR(i,1,n){
    	FOR(j,1,n){
    		if(i==j){
    			d[i][j]=0;
    		}else {
    			d[i][j]=1e9;
    		}
    	}
    }
    for(int i=1;i<=m;i++){
    	int x, y, z;
    	cin>> x>> y>> z;
    	d[x][y]= d[y][x]=z;
    }

    
    FOR(k,1,n){
    	FOR(i,1,n){
    		for(int j=1;j<=n;j++){
    			d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
    		}
    	}
    }
    int q;
    cin>> q;
    while(q--){
    	int x, y;
    	cin>> x>> y;
    	cout<< d[x][y];el;
    }

}

int main()
{
   #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
   #endif 
    faster;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}