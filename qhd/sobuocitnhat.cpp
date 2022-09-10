/*


Cho mảng A[] gồm N số nguyên. Nhiệm vụ của bạn là sắp xếp lại mảng số với số lượng bước là ít nhất. Tại mỗi bước, bạn chỉ được phép chèn phần tử bất kỳ của mảng vào vị trí bất kỳ trong mảng. Ví dụ A[] = {2, 3, 5, 1, 4, 7, 6 }sẽ cho ta số phép chèn ít nhất là 3 bằng cách lấy số 1 chèn trước số 2, lấy số 4 chèn trước số 5, lấy số 6 chèn trước số 7 ta nhận được mảng được sắp.

Input Format

Dòng đầu tiên là N; Dòng thứ 2 gồm N phần tử của mảng A;

Constraints

1<=N<=1000; 1<=A[i]<=1000;

Output Format

Đưa ra kết quả trên 1 dòng.

Sample Input 0

13
143 340 571 845 211 228 274 443 666 594 491 814 24 
Sample Output 0

6
Submissions: 80
Max Score: 100
Difficulty: Easy
Rate This Challenge:

    
More
*/


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int> 
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
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9 + 7;


int main()
{
    faster;
    int n ;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int f[n]={0};
    for(int i=0;i<n;i++){
        f[i]=1;
        for(int j=0;j<i;j++){
            if(a[i]> a[j]){
                f[i]=max(f[i],f[j]+1);
            }
        }
    }
    cout<<n-*max_element(f,f+n)<<endl;


    
   
    
}