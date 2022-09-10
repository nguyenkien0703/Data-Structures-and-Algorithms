/*

Cho mê cung được mô tả bởi một ma trận kí tự gồm N hàng và N cột. Mỗi ô trên ma trận chứa kí tự '.' tương ứng với đường đi và dấu * tương ứng với bẫy. Một con chuột muốn đi từ ô (1, 1) tới ô (N, N) và chỉ được di chuyển khi một ô nào đó là đường đi và nó được di chuyển sang phải hoặc xuống dưới. Hãy đếm số cách con chuột có thể di chuyển tới đích. Vì kết quả quá lớn nên hãy lấy dư với 10^9 + 7

Input Format

Dòng đầu tiên là N; N dòng tiếp theo mỗi dòng là N kí tự

Constraints

1<=N<=1000

Output Format

Số đường đi tối đa

Sample Input 0

4
....
.*..
...*
*...
Sample Output 0

3
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

ll dp[10001][1001];
int main()
{

    faster;
    int n ;
    cin>>  n;
    char a[n+1][n+1];
    FOR(i,1,n){
        FOR(j,1,n){
            cin>>a[i][j];
        }
    }
    dp[1][0]=dp[0][1]=1;
    FOR(i,1,n){
        FOR(j,1,n){

            if(a[i][j]=='.'){
                if(i==1){
                    dp[i][j]=dp[i][j-1];
                }else if(j==1){
                    dp[i][j]=dp[i-1][j];
                }else {
                    dp[i][j]+=dp[i-1][j]+dp[i][j-1];
                }
                dp[i][j]%=MOD;

            }else {
                dp[i][j]=0;
                
            }
        }
    }
    cout<<dp[n][n];


}
