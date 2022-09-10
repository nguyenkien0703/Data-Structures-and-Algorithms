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

ll n, p;
ll powmod(ll a, ll b ,ll c){
    ll res=1;
    a%=c;
    while(b){
        if(b%2==1){
            res*=a;
            res%=c;
        }
        a*=a;
        a%=c;
        b>>=1;
    }
    return res;
}
void solve(){

    cin >> n >> p;
    ll ans = powmod(n, p, MOD);
    cout << ans << endl;
}
int main()
{
    
    faster;
        solve();
    
    

}
