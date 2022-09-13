/*

Trong một lớp học luôn tồn tại những nhóm học sinh, các học sinh trong nhóm này sẽ thân thiết với nhau hơn. Giả sử trong 1 nhóm, nếu bạn a chơi thân vs bạn b và bạn b chơi thân với bạn c, thì bạn a và bạn c sẽ chơi thân với nhau. Hiện nay Tèo là lớp trưởng lớp 10A1, vì không thích việc chia bè kéo cánh trong lớp nên Tèo quyết định tìm các bạn nhóm trưởng của các nhóm để bàn việc hợp nhất các nhóm. Tèo biết rằng trong các nhóm nhỏ, nhóm trưởng là người có nhiều quan hệ thân thiết với các thành viên khác trong nhóm nhất và là người có số thứ tự nhỏ nhất. Nếu một bạn nào đó không chơi với ai cả thì bạn đó là nhóm trưởng của chính mình. Bạn hãy giúp tèo in ra thứ tự của các trưởng nhóm theo thứ tự từ nhỏ đến lớn nhé.

Input Format

Dòng đầu tiên là n và m, tương ứng với số lượng sinh viên trong lớp và số lượng tình bạn giữa các bạn trong lớp. Các sinh viên được đánh số từ 1 tới n. M dòng tiếp theo mỗi dòng gồm 2 số a, b thể hiện tình bạn thân thiết giữa bạn a và bạn b, a và b khác nhau.

Constraints

1<=n<=1000; 1<=m<=n*(n-1)/2; 1<=a,b<=n;

Output Format

In ra thứ tự của các trưởng nhóm theo thứ tự từ nhỏ đến lớn nhé.

Sample Input 0

10 6
4 3
4 1
8 5
8 6
4 2
8 2
Sample Output 0

4 7 9 10 

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






int n , m ;
int used[1001];
vll ke[1001];
int parent[1001];
int color[1001];

char a[1001][1001];
vll res ;
int dx[]={-1,0,0,1};
int dy[]={0,-1,1,0};
int kien=0;
void dfs(int u ){
    res.pb(u);
    used[u]=1;
    for(int x : ke[u]){
        if(!used[x]){
            dfs(x);
        }
    }
}

void solve(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x, y;
        cin>>x>>y;
        ke[x].pb(y);
        ke[y].pb(x);
    }
    ms(used,0);
    ms(parent,0);
    ms(color,0);
    FOR(i,1,n){
        sort(all(ke[i]));
    }
    vll ans ;
    for(int i=1;i<=n;i++){
        if(!used[i]){
        
            dfs(i);
            int max=-1e9;
            int vt=i;
            for(int x : res){
                int r = ke[x].size();
                if(max<r){
                    max=r;
                    vt=x;
                }else if(max==r){
                    if(vt>x){
                        vt=x;
                    }
                }

            }
            ans.pb(vt);
            res.clear();
        }
    }
    sort(all(ans));
    for(int x : ans ){
        cout<<x<<' ';
    }




}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    faster;
    solve();
    

}
