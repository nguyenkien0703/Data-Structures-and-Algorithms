/*
Cho một bàn cờ 8 x 8, mỗi ô có một giá trị A[i][j] nhất định (0 ≤ A[i][j] ≤ 100), tương ứng với điểm số đạt được nếu như bạn đặt một quân cờ vào đó. Nhiệm vụ của bạn là đặt 8 quân hậu lên bàn cờ, sao cho không có 2 quân nào ăn nhau, và số điểm đạt được là lớn nhất.

Input Format

Gồm 8 dòng, mỗi dòng gồm 8 số tương ứng với các số trên bàn cờ.

Constraints

1<=A[i][j]<=100;

Output Format

In ra số điểm đạt được lớn nhất.

Sample Input 0

12 29 80 91 56 46 97 13 
54 88 27 84 85 9 32 77 
48 80 88 74 30 77 38 98 
6 82 20 95 7 86 12 43 
100 82 15 7 95 9 5 84 
51 40 65 98 86 38 30 63 
96 78 98 76 33 11 2 58 
33 51 35 68 62 87 67 39 
Sample Output 0

653

*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int> 
#define vii vector<pii> 
#define pb push_back 
#define fi first 
#define se second 
#define foru(i,a,b) for(int i=a;i<=b;i++)
#define ford(i,b,a) for(int i=b;i>=a;i--)
const ll MOD = 1e9 + 7;
int n=8 ,x[100],cot[100],xuoi[1000],nguoc[1000], ok ;
int a[1000][1000];
//ll sum ;
int  ans ;

void Try(int i )
{
    for(int j=1;j<=n;j++){
        if(!cot[j]&& !xuoi[n+i-j]&& !nguoc[i+j-1]){
            x[i]=j;
            cot[j]= xuoi[n+i-j]=nguoc[i+j-1]=1;
            if(i==n){
                int sum =0;
                for(int i=1;i<=n;i++){
                    sum+=a[i][x[i]];
                }
                ans =max(ans,sum);
                sum =0;
            }else Try(i+1);
            cot[j]= xuoi[n+i-j]=nguoc[i+j-1]=0;
            
        }

    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    cin>> n;
    foru(i,1,8){
        foru(j,1,8){
            cin>>a[i][j];
        }
    }
    ans =0;
    Try(1);
    cout<<ans;
    
}