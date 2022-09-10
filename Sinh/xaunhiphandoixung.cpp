/*
Nhiệm vụ của bạn là hãy liệt kê các xâu nhị phân thuận nghịch có độ dài n theo thứ tự từ điển.

Input Format

Dòng duy nhất chứa số nguyên dương n.

Constraints

1<=n<=15;

Output Format

In ra các xâu thuận nghịch theo thứ tự từ điển

Sample Input 0

4
Sample Output 0

0000
0110
1001
1111
Submissions: 82
Max Score: 100
Difficulty: Easy
Rate This Challenge:

    
More


*/


#include <bits/stdc++.h>
using namespace std;

int n, ok, a[1000];
void ktao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
}
void next()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i--] = 0;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i] = 1;
    }
}
// viet 1 ham check
bool check()
{
    int l = 1, r = n;
    while (l < r)
    {
        if (a[l] != a[r])
        {
            return false;
        }
        ++l;
        --r;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    ktao();
    ok = 1;
    while (ok)
    {
        if (check())
        {
            for (int i = 1; i <= n; i++)
            {
                cout << a[i];
            }
            cout << endl;
        }
        next();
    }

    return 0;
}