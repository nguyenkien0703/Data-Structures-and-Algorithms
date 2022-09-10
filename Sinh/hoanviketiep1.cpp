/*

Cho số tự nhiên N, bạn được cung cấp một hoán vị của N phần tử từ 1 tới N. Nhiệm vụ của bạn là sinh ra hoán vị kế tiếp của hoán vị được cho, nếu hoán vị được cho là hoán vị cuối cùng thì yêu cầu in ra hoán vị đầu tiên.

Input Format

Dòng đầu tiên là số tự nhiên N. Dòng thứ 2 là các số tự nhiên trong hoán vị hiện tại.

Constraints

1<=N<=1000;

Output Format

In ra hoán vị kế tiếp trên một dòng.

Sample Input 0

6
3 1 5 6 2 4 
Sample Output 0

3 1 5 6 4 2 

*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define vii vector<pii>
#define pb push_back
#define fi first
#define se second
#define foru(i, a, b) for (int i = a; i < b; i++)
#define ford(i, b, a) for (int i = b; i >= a; i--)
const ll MOD = 1e9 + 7;

int n, ok;
;
ll a[1005];
void sinh()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
    {
        i--;
    }
    if(i==0){
        for(int i=1;i<=n;i++){
            a[i]=i;
            cout<<a[i]<<' ';
        }
    }else{
        int j =n;
        while(a[j]<a[i]) --j;
        swap(a[j],a[i]);
        reverse(a+1+i,a+n+1);
        for(int i=1;i<=n;i++){
            cout<<a[i]<<' ';
        }

    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sinh();
}