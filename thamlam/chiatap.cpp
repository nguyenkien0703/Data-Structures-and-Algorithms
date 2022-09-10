/*
Cho mảng A[] gồm N số nguyên không âm và số K. Nhiệm vụ của bạn là hãy chia mảng A[] thành hai mảng con có kích cỡ K và N-K sao cho hiệu giữa tổng hai mảng con là lớn nhất. Ví dụ với mảng A[] = {8, 4, 5, 2, 10}, K=2 ta có kết quả là 17 vì mảng A[] được chia thành hai mảng {4, 2} và { 8, 5,10} có hiệu của hai mảng con là 23-6=17 là lớn nhất.

Input Format

Dòng duy nhất chứa 2 số nguyên N và K; Dòng thứ 2 gồm N số của mảng A[]

Constraints

1<=K<=N<=10^6; 0<=A[i]<=10^9;

Output Format

In ra đáp án của bài toán

Sample Input 0

6 4
3 10 10 7 5 2 
Sample Output 0

27

*/

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
#define ms(a) memset(a,sizeof(a))
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,b,a) for(int i=b;i>=a;i--)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9 + 7;


int main()
{
    faster;
    ll n, k;
    cin>> n>>k;
    k=max(k,n-k);
    ll a[n];
    for(auto & x : a ) cin>> x ;
    sort(a,a+n,greater<int>());
    ll ans=0;
    for(ll i=0;i<n;i++){
        if(k> 0 ) ans += a[i];
        else ans -= a[i];
        --k;
    }
    cout<< ans ;
    
    
   
    
}