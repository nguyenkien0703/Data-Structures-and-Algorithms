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
ll n;
ll a[1000006];
int  merge(ll a[],int l, int mid , int r){
    vector<int> x(a + l, a + mid + 1);
    vector<int> y(a + mid + 1, a + r + 1);
    int i = 0, j = 0, cnt = 0;
    while(i<x.size() && j< y.size()) {
        if(x[i]<=y[j]){
            a[l] = x[i];
            ++l;
            ++i;
        }else {
            cnt += x.size()-i;
            a[l] = y[j];
            ++l;
            ++j;
        }
    }

    while(i<x.size()){
        a[l++] = x[i++];
    }
    while(j<y.size()){
        a[l++] = y[j++];
    }
    return cnt;
}
ll  mergeSort(ll a[],int l ,int r){
    ll dem = 0;
    if(l< r ){
        int mid =(l+r)/2;
        dem += mergeSort(a, l , mid);
        dem += mergeSort(a, mid + 1, r);
        dem += merge(a, l, mid, r);
    }
    return dem;
}

int main()
{
    
    faster;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    ll ans = mergeSort(a, 0, n - 1);
    cout << ans;
}
