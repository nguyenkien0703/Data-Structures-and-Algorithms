/*
Cho ma trận A[M][N]. Nhiệm vụ của bạn là đếm tất cả các đường đi từ phần tử A[0][0] đến phần tử A[M-1][N-1]. Bạn chỉ được phép dịch chuyển xuống dưới hoặc sang phải phần tử liền kề với vị trí hiện tại.

Input Format

Dòng 1 là hai số M, N tương ứng với số hàng và số cột của ma trận; Dng tiếp theo đưa vào các phần tử của ma trận A[][]; các số được viết cách nhau một vài khoảng trống.

Constraints

1≤M, N, <=10; A[i][j]≤100;

Output Format

Đưa ra số cách di chuyển

Sample Input 0

3 5
4 6 8 3 1 
9 8 8 9 1 
10 6 3 4 5 
Sample Output 0

15
*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int> 
#define vii vector<pii> 
#define pb push_back 
#define fi first 
#define se second 
#define in(a) cin>>  a;
#define out(a) cout<<  a;
#define all(a) (begin(a) ,end(a))
#define vll vector<ll> 
#define vi vector<int >
#define ms(a) memset(a,sizeof(a))
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,b,a) for(int i=b;i>=a;i--)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9 + 7;

int n,m , ok  , a[100][100];
void nhap(){
    cin>>n>>m;
    FOR(i,1,n){
        FOR(j,1,m){
            cin>>a[i][j];
        }
    }
}
int ans ;
void Try(int i ,int j ){
    if(i==n && j==m){
        ++ans ;
    }
    if(i+1<= n){
        Try(i+1,j);
    }
    if(j+1<=m){
        Try(i,j+1);
    }
}
int main()
{
    faster;
    ans =0;
    nhap();
    Try(1,1);
    cout<<ans;
    
   
    
}