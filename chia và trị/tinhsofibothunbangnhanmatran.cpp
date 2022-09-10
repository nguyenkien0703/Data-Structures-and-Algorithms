#include <bits/stdc++.h>
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
ll n;
struct  matran{
    ll pos[2][2];
};
matran operator * (matran a, matran b){
    matran res;
    for (ll i = 0; i < 2;i++){
        for (ll j = 0; j < 2;j++){
            res.pos[i][j] = 0;
            for (ll k = 0; k < 2;k++){
                res.pos[i][j] += (a.pos[i][k] * b.pos[k][j]);

                res.pos[i][j] %= MOD;
            }
        }
    }
    return res;
}
matran powmod(matran a, ll k ){
    if(k==1)
        return a;
    matran tmp = powmod(a, k / 2);
    if(k%2==1){
        return tmp * tmp * a;
    }else
      return   tmp * tmp;

}

int   main()
{
    faster;
    cin >> n;
    matran a;
    a.pos[0][0] = 1;
    a.pos[1][0] = 1;
    a.pos[0][1] = 1;
    a.pos[1][1] = 0;
    matran ans = powmod(a, n);
    cout << ans.pos[0][1];

}