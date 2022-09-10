/*

Cho số tự nhiên N, hiện tại bạn được cung cấp một hoán vị của N phần tử các số từ 1 đến N. Nhiệm vụ của bạn là xác định xem hoán vị này là hoán vị thứ bao nhiêu nếu bạn sinh ra tất cả các hoán vị của tập N phần tử. Ví dụ với N = 3, thì hoán vị 132 là hoán vị thứ 2.

Input Format

Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N số nguyên của cấu hình hiện tại

Constraints

1<=N<=10;

Output Format

In ra số thứ tự của hoán vị được cho

Sample Input 0

3
3 1 2 
Sample Output 0

5
Submissions: 98
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
#define se second
#define foru(i, a, b) for (int i = a; i < b; i++)
#define ford(i, b, a) for (int i = b; i >= a; i--)
const ll MOD = 1e9 + 7;
int n, ok, k, a[1000], x[1000];
string s[1005];
void ktao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}
void sinh()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
    {
        --i;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        int j = n;
        while (a[j] < a[i])
            --j;
        swap(a[i], a[j]);
        reverse(a + 1 + i, a + 1 + n);
    }
}
bool check(int a[],int x[]){
    for(int i=1;i<=n;i++){
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
    cin >> n;
    for (int i = 1; i <= n; i++)
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