/*

Cho số tự nhiên N và hai phép biến đổi (a), (b) dưới đây. • Thao tác (a): Trừ N đi 1 (N=N-1). Ví dụ N=17, thao tác (a) biến đổi N = N-1 =16. • Thao tác (b): N = max(u,v) nếu u * v =N (u>1, v>1). Ví dụ N=16, thao tác (b) có thể biến đổi N = max(2, 8)=8 hoặc N=max(4, 4)=4. Chỉ được phép sử dụng hai thao tác (a) hoặc (b), hãy biến đổi N thành 1 sao số các thao tác (a), (b) được thực hiện ít nhất. Ví dụ với N=17, số các phép (a), (b) nhỏ nhất biến đổi N thành 1 là 4 bước như sau: - Thao tác (a): N = N-1 = 17-1 = 16. - Thao tác (b): 16 = max(4,4) = 4. - Thao tác (b): 4 = max(2,2) = 2. - Thao tác (a): 2 = 2-1 = 1.

Input Format

• Dòng đầu tiên ghi lại số tự nhiên T là số lượng Test; • T dòng kế tiếp mỗi dòng ghi lại một bộ Test. Mỗi test là một số N

Constralls

1<=T<=100; 1<=N<10^9;

Output Format

• Đưa ra kết quả mỗi test theo từng dòng

Sample Input 0

7
896
99
841
880
227
870
291
Sample Output 0

5
6
6
5
7
5
6


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



ll max(ll a, ll b) {
    return a> b? a : b;
}
int main()
{
    
    faster;
    int t ;
    cin>> t ;
    while(t--){
        ll n;
        cin >> n;
        queue<pii> q;
        unordered_map<int, int> mp;
        mp[n] = 1;
        q.push({n, 0});
        while(!q.empty()){
            pii top =q.front();
            q.pop();
            if(top.fi==1){
                cout << top.se << endl;
                break;
            }
            for (int  i =1; i * i <= top.fi;i++){
                if(top.fi%i==0){
                    int m = max(i, top.fi / i);
                    if(mp[m]==0){
                        q.push({m, top.se + 1});
                        mp[m] = 1;
                    }
                }
            }
            if(mp[top.fi-1]==0){
                q.push({top.fi - 1, top.se + 1});
                mp[top.fi - 1] = 1;
            }
        }
        mp.clear();
    }
    return 0;
}
