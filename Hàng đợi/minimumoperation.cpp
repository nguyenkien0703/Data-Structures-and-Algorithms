/*
Cho hai số nguyên dương S và T và hai thao tác (a), (b) dưới đây: Thao tác (a): Trừ S đi 1 (S = S-1) ; Thao tác (b): Nhân S với 2 ( S = S * 2); Hãy dịch chuyển S thành T sao cho số lần thực hiện các thao tác (a), (b) là ít nhất. Ví dụ vớiS =2, T=5 thì số các bước ít nhất để dịch chuyển S thành T thông qua 4 thao tác sau: Thao tác (a): 2 * 2 = 4; Thao tác (b): 4-1 = 3; Thao tác (a): 3 * 2 = 6; Thao tác (b): 6-1 = 5;

Input Format

• Dòng đầu tiên ghi lại số tự nhiên T là số lượng Test; • T dòng kế tiếp mỗi dòng ghi lại một bộ Test. Mỗi test là một bộ đôi S và T.

Constraints

1<=S,T<10000

Output Format

Đưa ra kết quả mỗi test theo từng dòng.

Sample Input 0

6
17 16
16 10
13 17
13 10
17 17
16 19
Sample Output 0

1
6
6
3
0
8

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



void solve(){
    

}
int main()
{
    
    faster;
    int t ;
    cin>> t ;
    while(t--){
        int s, t;
        cin >> s >> t;
        queue<pii> q;
        set<ll> se;
        se.insert(s);
        q.push({s, 0});
        while(1){
            pii top = q.front();
            q.pop();
            if(top.fi==t){
                cout << top.se << endl;
                break;
            }
            if(top.fi>1 && !se.count(top.fi-1)){
                q.push({top.fi - 1, top.se + 1});
                se.insert(top.fi - 1);
            }
            if(top.fi<t && !se.count(top.fi * 2)){
                q.push({top.fi * 2, top.se + 1});
                se.insert(top.fi * 2);
            }
        }
        
        }
    

}
