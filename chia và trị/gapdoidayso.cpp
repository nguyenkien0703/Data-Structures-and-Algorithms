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
#define rep(a) for(ll i = 0; i < (a); i++)
#define vll vector<ll> 
#define vi vector<ll >
#define ms(a,n) memset(a,n,sizeof(a))
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define FOD(i,b,a) for(ll i=b;i>=a;i--)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9 + 7;
ll n,k;


ll solve(ll n , ll k){
    if(k&1){
        return 1;
    }
    ll ans = pow(2, n - 1);
    if(k==ans){
        return n;

    }else if(k<ans)
        return solve(n - 1, k);
    else{
        return solve(n - 1, k - ans);
        
    }
}
int   main()
{
    faster;
    cin >> n>>k;
    cout << solve(n, k);
}