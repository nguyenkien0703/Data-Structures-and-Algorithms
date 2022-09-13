/*

Cho đồ thị vô hướng G =(V, E) liên thông. Hãy in ra các cạnh của cây khung này theo thuật toán BFS bắt đầu từ đỉnh s. Thứ tự mở rộng cây khung của thuật toán BFS luôn mở rộng đỉnh có thứ tự nhỏ hơn trước.

Input Format

Dòng đầu tiên là n, m, và s tương ứng với số đỉnh, số cạnh và đỉnh gốc của cây khung. M dòng tiếp theo mỗi dòng là một cạnh của cây, dữ liệu đảm bảo cạnh chỉ nối giữa 2 đỉnh khác nhau.

Constraints

1<=s<=n<=1000; 1<=m<=n*(n - 1)/2;

Output Format

In ra các cạnh của cây khung theo thứ tự duyệt bằng thuật toán BFS theo từng dòng.

Sample Input 0

9 18 4
9 3
5 4
5 1
5 2
7 5
4 3
8 5
4 2
2 1
9 4
7 2
8 6
9 7
4 1
6 1
9 1
6 3
7 1
Sample Output 0

4->1
4->2
4->3
4->5
4->9
1->6
1->7
5->8


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
void bfs(int u ){
    queue<string> q;
    q.push(to_string(u));
    used[u] = 1;
    while(!q.empty()){
        string tp = q.front();
        q.pop();
        ll hoa = stoll(tp);
        for(int x : ke[hoa]){
            if(!used[x]){
                string res = "";
                res += to_string(hoa) + "->" + to_string(x);
                q.push(to_string(x));
                used[x] = 1;
                kien.pb(res);
                res.clear();

            }
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
    bfs(s);
    
    for(auto x  : kien){
        cout << x << endl;
    }
}



int  main()
{
    
    faster;
    solve();

}
