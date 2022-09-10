/*

Cho 2 số nguyên dương N và K và một tổ hợp K phần tử của tập N phần tử các số từ 1 tới N. Bạn hãy xác định xem tổ hợp đã cho có số thứ tự bao nhiêu nếu xếp các tổ hợp chập K của N theo thứ tự ngược. Ví dụ N = 5, K = 3 và tổ hợp đã cho là (2, 3, 4) sẽ là tổ hợp có số thứ tự 4.

Input Format

Dòng đầu gồm 2 số nguyên dương N và K. Dòng thứ 2 gồm K số mô tả tổ hợp đã cho. Dữ liệu đảm bảo tổ hợp đã cho là hợp lệ.

Constraints

1<=K<=N<=15;

Output Format

In ra số thứ tự của tổ hợp

Sample Input 0

12 4
8 9 10 11 
Sample Output 0

5
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
int n, ok, k, a[1000], x[1000];
string s[1005];
void ktao()
{
    int m =n;
    for (int i = k; i >=1; i--)
    {
        a[i] = m--;;
    }
}
void sinh()
{
    int i = k;
    while (i >= 1 && a[i] -a[i-1]==1)
    {
        --i;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i]--;
        int m =n;
        for(int j=k;j>i;j--){
            a[j] = m--;
        }
    
    }
}
bool check(int  a[],int  x[]){
    for(int  i=1;i<=k;i++){
        if(a[i]!=x[i]){
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n>>k;
    for (int i = 1; i <= k; i++)
    {
        cin >> x[i];
    }
    ktao();
    ok = 1;
    int cnt = 1;
    while (ok)
    {
        if (check(a, x))
        {
            cout << cnt ;
            return 0;
        }
        sinh();
        ++cnt;
    }
}