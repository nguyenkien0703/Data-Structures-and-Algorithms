/*

Cho N bạn học sinh, giáo viên muốn xếp các bạn học sinh này vào một hàng ngang gồm N chiếc ghế. Nhiệm vụ của bạn là liệt kê các cách sắp xếp N bạn học sinh này theo thứ tự tên người tăng dần về thứ tự từ điển.

Input Format

Dòng đầu tiên là số N. Dòng thứ 2 là N tên học sinh, mỗi tên chỉ bao gồm một từ.

Constraints

1<=N<=10;

Output Format

In ra các cách xếp trên từng dòng.

Sample Input 0

3
Lan Ngoc Nhung 
Sample Output 0

Lan Ngoc Nhung 
Lan Nhung Ngoc 
Ngoc Lan Nhung 
Ngoc Nhung Lan 
Nhung Lan Ngoc 
Nhung Ngoc Lan 
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
int n, ok, k, a[1000];
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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
    }
    sort(s+1,s+1+n);
    ktao();
    ok = 1;
    while (ok)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << s[a[i]] << ' ';
        }
        cout << endl;
        sinh();
    }
}