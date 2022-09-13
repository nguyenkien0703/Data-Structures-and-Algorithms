/*

Có K người (1 ≤ K ≤ 100) đứng tại vị trí nào đó trong N địa điểm cho trước (1 ≤ N ≤ 1,000) được đánh số từ 1..N. Các điểm được nối với nhau bởi M đoạn đường một chiều (1 ≤ M ≤ 10,000) (không có đoạn đường nào nối một điểm với chính nó). Mọi người muốn cùng tụ họp tại một địa điểm nào đó. Tuy nhiên, với các đường đi cho trước, chỉ có một số địa điểm nào đó có thể được chọn là điểm họp mặt. Cho trước K, N, M và vị trí ban đầu của K người cùng với M đường đi một chiều, hãy xác định xem có bao nhiêu điểm có thể được chọn làm điểm họp mặt.

Input Format

Dòng 1: Ghi 3 số: K, N, và M Dòng 2 đến K+1: dòng i+1 chứa một số nguyên trong khoảng (1..N) cho biết địa điểm mà người thứ i đang đứng. Dòng K+2 đến M+K+1: Mỗi dòng ghi một cặp số A và B mô tả một đoạn đường đi một chiều từ A đến B (cả hai trong khoảng 1..N và A != B).

Constraints

(1 ≤ K ≤ 100); (1 ≤ N ≤ 1,000); (1 ≤ M ≤ 10,000);

Output Format

In ra số địa điểm có thể được chọn là điểm họp mặt.

Sample Input 0

4 10 15
1
4
5
7
10 3
5 6
4 9
5 3
8 6
4 6
8 9
3 9
1 9
6 9
7 9
9 6
7 3
2 9
5 9
Sample Output 0

2
Sample Input 1

2 4 4
2
3
1 2
1 4
2 3
3 4
Sample Output 1

2
Explanation 1

2 điểm có thể họp mặt : 3, 4


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
#define sz(a) a.size();
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

int k, n, m;
vll ke[1001];
int used[1001];
ll a[1001];
map<int, int> mp;
void dfs(int u ){
    mp[u]++;
    used[u] = 1;
    for(int  x: ke[u]){
        if(!used[x]){
            dfs(x);
        }
    }
}
void solve(){
    cin >> k >> n >> m;
    for (int i = 1;i<=k;i++){
        cin >> a[i];
    }
    FOR(i,1,m){
        int x, y;cin>>x>>y;
        ke[x].push_back(y);
    }

    for (int i = 1; i <= k; i++)
    {
        ms(used, 0);
        dfs(a[i]);
    }
    ll ans = 0;
    for(auto x : mp){
        if(x.se==k){
            ++ans;
        }
    }
    cout << ans;
}

int main()
{
    
    faster;
    solve();
}
