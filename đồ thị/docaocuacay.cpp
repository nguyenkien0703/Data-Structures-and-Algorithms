/*

Cho cây với đỉnh gốc là đỉnh 1, các đỉnh của cây được đánh số từ 1 tới n. Độ cao của một nốt trong cây được tính bằng số cạnh trên đường đi ngắn nhất giữa nốt này tới đỉnh gốc. Như vậy, gốc của cây là đỉnh 1 sẽ có độ cao là 0. Nhiệm vụ của bạn là hãy xác định chiều cao của mọi nốt trong cây. Dưới đây là một ví dụ về cây.



Input Format

Dòng đầu tiên là số n - số nốt của cây. N - 1 dòng tiếp theo mỗi dòng mô tả một cạnh của cây.

Constraints

1<=n<=1000;

Output Format

In ra độ cao của các nốt, từ nốt 1 tới nốt n.

Sample Input 0

7
1 2
2 3
3 4
1 5
5 6
1 7
Sample Output 0

0 1 2 3 1 2 1

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

vll ke[1001];
ll used[1001];
int n;
ll height[1001];

void dfs(int u , int par){
    used[u] = 1;
    height[u] = height[par] + 1;
    for(int x : ke[u]){
        if(!used[x]){
            dfs(x, u);
        }
    }
}
void solve(){
    cin >> n;
    for (int i = 0; i < n - 1;i++){
        int x, y;
        cin >> x >> y;
        ke[x].pb(y);
        ke[y].pb(x);
    }
    FOR(i,1,n){
        sort(all(ke[i]));
    }
    height[0] = -1;
    ms(used, 0);
    dfs(1, 0);
    FOR(i,1,n){
        cout << height[i] << ' ';
    }

}
int main()
{
    
    faster;
        solve();
    

}
