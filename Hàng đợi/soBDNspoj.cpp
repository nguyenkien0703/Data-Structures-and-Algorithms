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

string x;


int main()
{
    
    faster;
    queue<ll> q;
    vll res;
    q.push(1);
    while(1){
        ll tmp = q.front();
        q.pop();
        if(tmp>=1e18){
            break;
        }
        res.pb(tmp);
        q.push(tmp * 10 + 0);
        q.push(tmp * 10 + 1);
    }
    int t;
    cin>> t ;
    while(t--){
        ll x;
        cin >> x;
        ll cnt = 0;
        for(ll y : res){
            if( y <= x ){
                ++cnt;
            }else break;
        }
        cout << cnt << endl;
    }
}
