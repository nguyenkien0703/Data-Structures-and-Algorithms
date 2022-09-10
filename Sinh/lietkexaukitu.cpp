/*
Cho chữ cái c in hoa và số nguyên K; Hãy tìm cách liệt kê tất cả các xâu có K ký tự khác nhau được tạo ra bởi các chữ cái tính từ ‘A’ đến ký tự c. Các ký tự được phép lặp lại nhưng có tính các xâu là hoán vị của xâu nào đó đã liệt kê trước đó.

Input Format

Chữ cái c và K

Constraints

'A' < c <='H'; 0 < K < (c – ‘A’);

Output Format

Ghi ra lần lượt các xâu ký tự kết quả theo thứ tự từ điển trên từng dòng.

Sample Input 0

C 2
Sample Output 0

AA
AB
AC
BA
BB
BC
CA
CB
CC

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

char a[1000], c;
int n, k, ok;
void ktao()
{
    for (int i = 1; i <= k; i++)
    {
        a[i] = 'A';
    }
}
void sinh()
{
    int i = k;
    while (i >= 1 && a[i] == c)
    {
        --i;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = 'A';
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> c >> k;
    ok = 1;
    ktao();
    while (ok)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
}