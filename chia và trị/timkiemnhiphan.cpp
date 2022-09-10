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

int n , k;

bool bs(ll a[],int l, int r, int k ){
    while(l<=r){

        int m = (l + r) / 2;
        if(a[m]==k){
            return true;
        }else if(a[m]< k)
            ++l;
        else
            --r;
    }
    return false;
}
int main()
{
    faster;
    cin>>n>>k;
    long long a[n];
    FOR(i,0,n-1){
        cin >> a[i];
    }
    if(bs(a,0,n-1,k)){
        cout << "YES\n";
    }else
        cout << "NO\n";
}