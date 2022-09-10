/*
Cho số nguyên dương N. Nhiệm vụ của bạn là hãy liệt kê tất cả các hoán vị của các số từ 1 tới N theo thứ tự ngược.

Input Format

Dòng duy nhất chứa số nguyên dương N.

Constraints

1<=N<=10;

Output Format

In ra các hoán vị của N phần tử theo thứ tự ngược

Sample Input 0

3
Sample Output 0

321
312
231
213
132
123

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define vii vector<pii>
#define pb push_back
#define fi first
#define se second
#define foru(i, a, b) for (int i = a; i <= b; i++)
#define ford(i, b, a) for (int i = b; i >= a; i--)
const ll MOD = 1e9 + 7;

int n, a[100], check[10];
void in()
{
    foru(i, 1, n)
    {
        cout << a[i];
    }
    cout << endl;
}
void Try(int i)
{
    for (int j = n; j >= 1; j--)
    {
        if (check[j] == 0)
        {
            a[i] = j;
            check[j] = 1;
            if (i == n)
            {
                in();
            }
            else
            {
                Try(i + 1);
            }
            check[j] = 0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    Try(1);
}