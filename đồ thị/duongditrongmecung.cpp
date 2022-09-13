/*
Cho mê cung A có n hàng, n cột. Một con chuột xuất phát từ ô (s, t) và di chuyển tới ô (u, v). Nhiệm vụ của bạn là xác định số bước đi tối thiểu để con chuột con thể di chuyển từ ô (s, t) tới ô (u, v) hoặc xác định rằng không thể tìm được đường tới ô (u, v). Mê cung A chỉ bao gồm các số 1 hoặc 0. Trong đó 1 đại diện cho đường đi và 0 đại diện cho vật cản, con chuột chỉ có thể di chuyển từ ô hiện tại sang các ô chung đỉnh với nó và có đường đi.

Input Format

Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 gồm 4 số nguyên s, t, u, v. Dữ liệu đảm bảo ô (s, t) có giá trị 1. N dòng tiếp theo, mỗi dòng gồm N số nguyên mô tả mê cung A.

Constraints

2<=n<=1000; 0<=A[i][j]<=1;

Output Format

In ra số bước đi tối tiểu của con chuột hoặc in ra -1 nếu con chuột không thể đi đến nơi.

Sample Input 0

10
9 6 9 3
1 1 0 1 1 1 1 0 0 1 
0 0 1 0 0 1 0 1 0 1 
1 1 1 1 0 0 0 1 1 0 
1 0 0 0 1 0 0 0 1 1 
1 0 1 0 0 1 0 1 1 0 
0 0 1 1 0 1 0 0 0 0 
1 1 0 1 0 1 1 0 0 0 
0 0 0 1 1 0 1 1 0 1 
1 0 1 0 0 1 0 0 1 1 
0 1 1 1 1 0 1 0 1 1 
Sample Output 0

3


*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll a[1001][1001];
int n, m,s,t,u,v;;
int d[1001][1001];

int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};

void bfs(int i , int j){
    queue<pair<int,int> > q;
    if(a[i][j]==1){

        q.push({i,j});
    }
    a[i][j]=0;
    d[i][j]=0;

    while(!q.empty()){
        pair<int ,int> top =q.front(); q.pop();
        for(int k=0;k<8;k++){
            int i1= top.first + dx[k];
            int j1= top.second + dy[k];
            if(i1>=1 && i1<= n && j1>=1 && j1<=n && a[i1][j1]==1){
                d[i1][j1]=d[top.first][top.second]+1;
                
                q.push({i1,j1});
                a[i1][j1]=0;
            }

        }
    }

}
void inp()
{
    cin >> n>>s>>t>>u>>v;;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            

        }
    }
    bfs(s,t);
   

    if(d[u][v]==0){
        cout<<"-1";

    }else cout<<d[u][v]<<endl;
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    inp();
}