/*

Cho số tự nhiên N. Hãy tìm số nguyên dương X nhỏ nhất được tạo bởi số 8 và số 0 chia hết cho N. Ví dụ với N = 5 ta sẽ tìm ra X = 80.

Input Format

Dòng đầu tiên ghi lại số lượng test T (T≤100). Những dòng kế tiếp mỗi dòng ghi lại một test. Mỗi test là một số tự nhiên N được ghi trên một dòng (N≤200).

Constraints

N/A

Output Format

Đưa ra theo từng dòng số X nhỏ nhất chia hết cho N tìm được

Sample Input 0

6
61
79
45
129
5
176
Sample Output 0

800808
80080088
8888888880
800800008
80
880

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

ll ans[210];

int main()
{
    
    faster;
    queue<ll> q;
    vll res;
    q.push(8);
    while(1){
        ll tmp = q.front();
        q.pop();
        if(tmp>=1e18) break;
        res.pb(tmp);
        q.push(tmp*10+0);
        q.push(tmp*10+8);
    }
    for (int i = 1; i <= 200;i++){
        for(ll x : res){
            if(x%i==0){
                ans[i] = x;
                break;
            }
        }
    }
    ll t;
    cin>> t ;
    while(t--){
        int n;
        cin >> n;
        cout << ans[n] << endl;
    }
    

}
