/*
Cho một bàn cờ vua có kích thước n * n. Vấn đề đặt ra rằng, có n quân hậu, bạn cần đếm số cách đặt n quân hậu này lên bàn cờ sao cho với 2 quân hậu bất kì, chúng không “ăn” nhau.

Input Format

Dòng duy nhất chứa n là kích thước của bàn cờ.

Constraints

1<=N<=12

Output Format

In ra số cách xếp hậu hợp lệ

Sample Input 0

8
Sample Output 0

92

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
int n , xuoi[1000],nguoc[1000], ok , a[1000],x[100];
int cnt ;
void Try(int i){
    FOR(j,1,n){
        if(!a[j]&& !xuoi[n+i-j]&& !nguoc[i+j-1]){
            a[j]= xuoi[n+i-j]= nguoc[i+j-1]=1;
            if(i==n){
                ++cnt;
            }else {
                Try(i+1);
            }
            a[j]= xuoi[n+i-j]= nguoc[i+j-1]=0;

        }
    }
}
int main()
{
    faster;
    cin>> n;
    Try(1);
    cout<<cnt;
    
   
    
}