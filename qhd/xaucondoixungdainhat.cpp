/*

Cho xâu S chỉ bao gồm các ký tự viết thường và dài không quá 1000 ký tự. Hãy tìm xâu con đối xứng dài nhất của S.

Input Format

Dòng duy nhất chứa xâu S

Constraints

1<=len(S)<=1000;

Output Format

In ra đáp án của bài toán

Sample Input 0

edhcgeehahbbeggfcgcchffbffcgfghgc
Sample Output 0

5
*/

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

string s;
void solve(string s ){
    ll  n=s.size();

    s = "@" + s;
    ll dp[n+1][n+1];
    ms(dp, 0);
    for (ll i = 1; i <= n;i++){
        dp[i][i] = 1;
    }
    ll ans = -1;
    for (ll len = 2; len <= n;len++){
        for (ll i = 1; i <= n-len+1;i++){

            ll j = len + i - 1;
            if(len==2){
                if(s[i]==s[j]){
                    dp[i][j] = 1;
                }
            }
            else {
                dp[i][j] = dp[i + 1][j - 1] && (s[i] == s[j]);
            }
            if(dp[i][j]==1) {
                ans =max(ans,len);
            }
        }
    }
    cout << ans << endl;
}
int main()
{

    faster;
    cin >> s;
    solve(s);
}
