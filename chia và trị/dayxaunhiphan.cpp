
/*
Xâu nhị phân S được định nghĩa như sau :

S[1] = “0”.

S[2] = “1”.

S[i] = S[i-2] + S[i-1] với i>2.

Với phép cộng (+) là phép nối hai xâu với nhau. Hãy xác định ký tự thứ K trong xâu S[N] là ký tự ‘0’ hay ký tự ‘1’.

Input Format

1 Dòng duy nhất chứa 2 số nguyên N và K

Constraints

2<=N<=92; 1<=K<=7e18 và đảm bảo là một vị trí hợp lệ trong xâu S

Output Format

In ra kí tự là đáp án của bài toán

Sample Input 0

7 7
Sample Output 0

0
Sample Input 1

8 6
Sample Output 1

1
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
#define ms(a,n) memset(a,n,sizeof(a))
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,b,a) for(int i=b;i>=a;i--)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9 + 7;

ll n, k;
ll  f[100];
void  init(){
    f[0] = 0;
    f[1] = 1;
    for (ll i = 2; i <= 93;i++){
        f[i] = f[i - 2] + f[i - 1];
        f[i] %= MOD;
    }
}

ll solve(ll n ,ll k ){
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    if(k<=f[n-2]){
        return solve(n - 2, k);
    }else
        return solve(n - 1, k - f[n - 2]);
}

int main()
{
    faster;
    init();

    cin>>n>>k;
  cout<< solve(n,k)<<endl;

}
