/*

Cho một mê cung được mô tả dưới dạng một ma trận nhị phân có N hàng và N cột. Một con chuột bắt đầu tử ô (1, 1) và muốn di chuyển tới ô (N, N). Con chuột chỉ được di chuyển sang trái, sang phải, lên trên và xuống dưới và chỉ được di chuyển tới ô nào đó nếu ô đó có giá trị là 1. Bạn hãy in ra các cách đi hợp lệ của con chuột, trong đó nếu con chuột đi sang phải thì nước đi được mô tả là chữ R, và nếu con chuột đi xuống dưới thì nước đi được mô tả là chữ D, nếu đi sang trái thì nước đi được mô tả là chữ L, nếu đi lên trên thì nước đi được mô tả là chữ U. Nếu con chuột không thể đi xuống ô (N, N) thì in ra -1. Chú ý trên mỗi đường đi con chuột chỉ có thể đi qua 1 ô nào đó đúng 1 lần.

Input Format

Dòng thứ nhất đưa vào N; N dòng tiếp theo mỗi dòng gồm N số;

Constraints

1<=N<=8; Dữ liệu đảm bảo ô (1, 1) là số 1.

Output Format

Đưa ra các đường đi hợp lệ theo thứ tự từ điển tăng dần trên từng dòng.

Sample Input 0

4
1 1 1 1 
1 1 0 1 
1 1 1 1 
0 1 1 1 
Sample Output 0

DDRDRR
DDRDRURD
DDRRDR
DDRRRD
DDRUURRDDD
DDRUURRDDLDR
DRDDRR
DRDDRURD
DRDRDR
DRDRRD
DRURRDDD
DRURRDDLDR
DRURRDDLLDRR
RDDDRR
RDDDRURD
RDDRDR
RDDRRD
RDLDRDRR
RDLDRDRURD
RDLDRRDR
RDLDRRRD
RRRDDD
RRRDDLDR
RRRDDLLDRR
Submissions: 94
Max Score: 100
Difficulty: Easy
Rate This Challenge:

    
More

*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pii pair<ll, ll>
#define vii vector<pii>
#define pb push_back
#define fi first
#define el cout<<endl
#define oo 1000000008
#define se second
#define sz(a) a.size();
#define all(x) (x).begin(), (x).end()
#define vll vector<ll>
#define vi vector<int >
template<class T> bool ckmin(T& a, const T& b) {
	return b < a ? a = b, 1 : 0;
}
template<class T> bool ckmax(T& a, const T& b) {
	return a < b ? a = b, 1 : 0;
}
#define f0(a) for(ll i = 0; i < (a); i++)
#define f1(a) for(ll i = 1; i <= (a); i++)
#define ms(a,n) memset(a,n,sizeof(a))
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define FOD(i,b,a) for(int i=b;i>=a;i--)
#define faster ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
const ll MOD = 1e9 + 7;

int n;
ll check[11][11];
int ok ;
string s; 
int a[11][11];;
void Try(int i ,int j ){
	if(i==n && j== n ){
		cout<< s<<' ';ok =1;
		
	}
	check[i][j]=1;
	if(i+1<= n && a[i+1][j]==1 && check[i+1][j]==0){
		s+="D";
		Try(i+1, j);
		s.pop_back();
	}
	if(j-1 >=1 && a[i][j-1]==1 && check[i][j-1]==0){
		s+="L";
		Try(i,j-1);
		s.pop_back();
	}
	if(j+1<=n && a[i][j+1]==1 && check[i][j+1]==0){
		s+="R";
		Try(i,j+1);
		s.pop_back();
	}
	if(i-1 >=1 && a[i-1][j]==1 && check[i-1][j]==0){
		s+="U";
		Try(i-1, j);
		s.pop_back();
	}
	check[i][j]=0;
}
void solve() {

	cin>> n;
	ok =0;
	for(int i=1;i<=n;i++){
		FOR(j,1,n){
			cin>> a[i][j];
		}
	}
	if(a[1][1]==0){
		cout<< -1;
		el;
		return ;
	}
	Try(1,1);
	if(!ok){
		cout<<-1;
		
	}
		el;
}
int main() {

	faster;

	int t=1 ;
	cin>> t;
	while(t--) {
		solve();




	}
}

