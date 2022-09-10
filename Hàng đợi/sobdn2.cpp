/*
Ta gọi số nguyên dương K là một số BDN nếu các chữ số trong K chỉ bao gồm các 0 hoặc 1 có nghĩa. Ví dụ số K = 101 là số BDN, k=102 không phải là số BDN. Số BDN của N là số P =M´N sao cho P là số BDN. Cho số tự nhiên N, hãy tìm số BDN nhỏ nhất của N. Ví dụ. Với N=2, ta tìm được số BDN của N là P = 5´2=10. N = 17 ta tìm được số BDN của 17 là P = 653´17=11101.

Input Format

• Dòng đầu tiên ghi lại số tự nhiên T là số lượng Test; • T dòng kế tiếp mỗi dòng ghi lại một bộ Test. Mỗi test là một số tự nhiên N.

Constraints

1<=T<=100; 1<=N<=500;

Output Format

Đưa ra kết quả mỗi test theo từng dòng.

Sample Input 0

14
19
18
9
10
27
23
14
22
40
38
6
13
30
43
Sample Output 0

11001
1111111110
111111111
10
1101111111
110101
10010
110
1000
110010
1110
1001
1110
1101101


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
void solve(){
    cin >> n;
    queue<ll> q;
    q.push(1);
    vll res;

    while(1){
        ll top = q.front();
        q.pop();
        if(top >=1e18)
            break;
        else {
            res.pb(top);
            q.push(top * 10 + 0);
            q.push(top * 10 + 1);

        }
    }
    for(auto x : res){
        if(x%n==0){
            cout << x << endl;
            break;
        }
    }


}



int main()
{
    
    faster;
    int t ;
    cin>> t ;
    while(t--){
        solve();
    }
    

}
