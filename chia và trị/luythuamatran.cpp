/*
Cho ma trận A[][] là ma trận vuông cỡ N x N. Hãy tính kết quả A^K và chia dư các phần tử trong ma trận kết quả cho 10^9 + 7

Input Format

Dòng đầu tiên chứa 2 số nguyên dương N và K; N dòng tiếp theo là các phần tử trong ma trận A

Constraints

1<=N<=10; 1<=K<=10^9; 0<=A[i][j]<=1000

Output Format

In ra ma trận đáp án

Sample Input 0

2 3
712 141 
55 619 
Sample Output 0

376787593 188740908 
73622340 252298909 

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
ll n;
struct matran{
    ll pos[15][15];

};

matran  operator * (matran a, matran b){
    matran res;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            res.pos[i][j] = 0;
            for (int k = 0; k < n;k++){
                res.pos[i][j] += (a.pos[i][k] * b.pos[k][j]);
                res.pos[i][j] %= MOD;
            }

        }
    }
    return res;
}

matran powmod(matran a, ll k ){
    if(k==1){
        return a;
    }
    matran tmp = powmod(a, k / 2);
    if(k&1){
        return tmp * tmp * a;
    }else
        return tmp * tmp;
}

int k;
void solve(){
    cin >> n >> k;
    matran a;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a.pos[i][j];
        }
    }
    matran  ans =powmod(a, k);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << ans.pos[i][j] << ' ';
        }
        cout << endl;
    }
}
int main()
{
    
    faster;
        solve();
    
    

}
