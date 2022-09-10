/*
Cho một mê cung được mô tả dưới dạng một ma trận nhị phân có N hàng và N cột. Một con chuột bắt đầu tử ô (1, 1) và muốn di chuyển tới ô (N, N). Con chuột chỉ được di chuyển xuống dưới hoặc sang phải và chỉ được di chuyển tới ô nào đó nếu ô đó có giá trị là 1. Bạn hãy in ra các cách đi hợp lệ của con chuột, trong đó nếu con chuột đi sang phải thì nước đi được mô tả là chữ R, và nếu con chuột đi xuống dưới thì nước đi được mô tả là chữ D. Nếu con chuột không thể đi xuống ô (N, N) thì in ra -1. Chú ý trên mỗi đường đi con chuột chỉ có thể đi qua 1 ô nào đó đúng 1 lần.

Input Format

Dòng thứ nhất đưa vào N; N dòng tiếp theo mỗi dòng gồm N số;

Constraints

1<=N<=12; Dữ liệu đảm bảo ô (1, 1) là số 1.

Output Format

Đưa ra các đường đi hợp lệ theo thứ tự từ điển tăng dần trên từng dòng.

Sample Input 0

4
1 1 0 1 
1 1 1 1 
1 0 1 1 
1 1 1 1 
Sample Output 0

DDDRRR
DRRDDR
DRRDRD
DRRRDD
RDRDDR
RDRDRD
RDRRDD

*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define vii vector<pii>
#define pb push_back
#define fi first
#define se second
#define in(a) cin >> a;
#define out(a) cout << a;
#define all(a) (begin(a), end(a))
#define vll vector<ll>
#define vi vector<int>
#define ms(a) memset(a, sizeof(a))
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FOD(i, b, a) for (int i = b; i >= a; i--)
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const ll MOD = 1e9 + 7;
char ans[10000];
bool ok;
int cnt, n, a[100][100];
void nhap()
{
    cin >> n;
    FOR(i, 1, n)
    {
        FOR(j, 1, n)
        {
            cin >> a[i][j];
        }
    }
}
string s ;
void Try(int i, int j, int cnt)
{
    if (i == n && j == n)
    {
        ok =true;
        cout<<s<<endl;
    }
    if (i + 1 <= n && a[i + 1][j]==1)
    {
        s+="D";
        // ++cnt;
        a[i + 1][j] = 0;
        Try(i + 1, j, cnt + 1);
        a[i + 1][j] = 1;
        s.pop_back();
    }
    if(j+1<=n && a[i][j+1]==1){
        s+="R";
        // ++cnt;
        a[i][j+1] = 1;
        Try(i , j+1, cnt + 1);
        a[i][j+1] = 1;
        s.pop_back();
    }
}
int main()
{
    faster;
    nhap();
    Try(1,1,1);
    if(!ok){
        cout<<-1<<endl;
    }else cout<<endl;
}