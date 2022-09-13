/*


Cho đồ thị vô hướng G =(V, E) liên thông. Hãy in ra các cạnh của cây khung này theo thuật toán DFS bắt đầu từ đỉnh s. Thứ tự mở rộng cây khung của thuật toán DFS luôn mở rộng đỉnh có thứ tự nhỏ hơn trước.

Input Format

Dòng đầu tiên là n, m, và s tương ứng với số đỉnh, số cạnh và đỉnh gốc của cây khung. M dòng tiếp theo mỗi dòng là một cạnh của cây, dữ liệu đảm bảo cạnh chỉ nối giữa 2 đỉnh khác nhau.

Constraints

1<=s<=n<=1000; 1<=m<=n*(n - 1)/2;

Output Format

In ra các cạnh của cây khung theo thứ tự duyệt bằng thuật toán DFS theo từng dòng.

Sample Input 0

7 12 3
6 3
6 2
5 3
5 4
7 3
5 2
7 1
4 3
2 1
6 4
7 2
3 2
Sample Output 0

3->2
2->1
1->7
2->5
5->4
4->6
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
#define rep(a) for(ll i = 0; i < (a); i++)
#define vll vector<ll> 
#define vi vector<ll >
#define ms(a,n) memset(a,n,sizeof(a))
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define FOD(i,b,a) for(ll i=b;i>=a;i--)
#define faster ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
const ll MOD = 1e9 + 7;
int a[100005];
ll n, m, k;
vll ke[10001];
ll used[10001];
vector<string> kien;
void dfs(int u ){
    used[u] = 1;
    for(int x : ke[u]){
        if(!used[x]){

            string res = "";
            res += to_string(u) + "->" + to_string(x);
            kien.push_back(res);
            dfs(x);
            res.clear();
        }
        
    }
}
int s;
void solve(){
    cin >> n >>m>> s;
    for (int i = 0; i < m;i++){
        int x, y;
        cin>> x >> y;
        ke[x].pb(y);
        ke[y].pb(x);
    }
    ms(used, 0);
    for (int i = 1; i <= n;i++){
        sort(all(ke[i]));
    }
    dfs(s);
    
    for(auto x  : kien){
        cout << x << endl;
    }
}



int  main()
{
    
    faster;
    solve();

}
