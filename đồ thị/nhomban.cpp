/*
Trong một lớp học luôn tồn tại những nhóm học sinh, các học sinh trong nhóm này sẽ thân thiết với nhau hơn. Giả sử trong 1 nhóm, nếu bạn a chơi thân vs bạn b và bạn b chơi thân với bạn c, thì bạn a và bạn c sẽ chơi thân với nhau. Hiện nay Tèo là lớp trưởng lớp 10A1, vì không thích việc chia bè kéo cánh trong lớp nên Tèo quyết định tìm ra nhóm có số bạn chơi thân với nhau nhất trong nhóm để đưa các thành viên của các nhóm khác vào trong nhóm có số lượng thành viên cao nhất này. Bạn hãy giúp Tèo tìm ra số lượng thành viên lớn nhất của 1 nhóm chơi thân bất kỳ trong lớp nhé !

Input Format

Dòng đầu tiên là n và m, tương ứng với số lượng sinh viên trong lớp và số lượng tình bạn giữa các bạn trong lớp. Các sinh viên được đánh số từ 1 tới n. M dòng tiếp theo mỗi dòng gồm 2 số a, b thể hiện tình bạn thân thiết giữa bạn a và bạn b, a và b khác nhau.

Constraints

1<=n<=1000; 1<=m<=n*(n-1)/2; 1<=a,b<=n;

Output Format

In ra nhóm có số lượng bạn lớn nhất

Sample Input 0

10 6
8 2
4 1
8 6
8 7
8 1
8 5
Sample Output 0

7


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

int n, m;
vll ke[1001];
ll used[1001];
int cnt = 0;


void dfs(int u ){
    used[u] = 1;
    ++cnt;

    for(int x : ke[u]){
        if(!used[x]){
            dfs(x);
        }
    }
}


void solve(){
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].pb(y);
        ke[y].pb(x);
    }

    ms(used, 0);
    int ans = 0;
    for (int i = 1; i <= n;i++){
        if(!used[i]){
            cnt = 0;
            dfs(i);
            ans = max(ans, cnt);
        }
    }
    cout << ans << endl;
}
int main()
{
    
    faster;
        solve();
    
    

}
