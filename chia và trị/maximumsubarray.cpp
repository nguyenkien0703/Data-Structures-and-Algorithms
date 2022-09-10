//cash 1 :
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
ll max(int a,int b){
    return a > b ? a : b;
    
}
int main()
{
    faster;
    cin >> n;
    vll a(n);
    FOR(i, 0, n - 1)
        cin >> a[i];
    ll sum1 = -1e18, sum2 = 0;
    for(int i = 0; i < n; i++){
        sum1+=a[i];
        sum2 = max(sum1, sum2);
        if(sum1<0){
            sum1 = 0;
        }
    }
    cout << sum2;
}

//casch 2 : giải bàng chia và trị 
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
ll max(int a, int b){
    return a > b ? a : b;
}
ll n;
ll a[100006];
ll crossSum(ll a[],int l , int m ,int r){
    int leftsum = 0, rightsum = 0;
    int sum = 0;
    for (int i = m; i >= l;i--){
        sum += a[i];
        leftsum = max(leftsum, sum);

    }
    sum = 0;
    for (int i = m + 1; i <= r;i++){
        sum += a[i];
        rightsum = max(rightsum, sum);
    }
    return max({rightsum + leftsum, leftsum, rightsum});

}


ll check(ll a[],ll l ,ll r ){
    if(l==r){
        return a[l];
    }else {
        ll mid = (l + r) / 2;
        return max(check(a, l, mid), check(a, mid + 1, r), crossSum(a, l, mid, r));
    }
}

void solve(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << check(a, 0, n - 1);
}
int main()
{
    
    faster;
        solve();
    
    

}
