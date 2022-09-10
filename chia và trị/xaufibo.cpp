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
ll   fb[92];
char   solve(int n , int k){
    if(n==1)
        return 'A';
    if(n==2) return 'B';
    if(k<=fb[n-2]) return solve(n-2, k);
    else return solve(n-1, k-fb[n-2]); 
}

int main()
{
    faster;
    cin >> n >> k;
    fb[1] = 1;
    fb[2] = 1;
    FOR(i,3,n){
        fb[i] = fb[i - 1] + fb[i - 2];

    }
    cout << solve(n, k) << endl;

}