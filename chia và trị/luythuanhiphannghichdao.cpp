#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int> 
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
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9 + 7;
ll n, k;
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

ll sodao(ll m){
    ll ans = 0;
    while(m){
        ans = ans * 10 + m % 10;
        m /= 10;
    }
    return ans;
}

int main()
{
    faster;
    cin >> n;
    ll ans = sodao(n);
    cout << powmod(n, ans, MOD) << endl;
}