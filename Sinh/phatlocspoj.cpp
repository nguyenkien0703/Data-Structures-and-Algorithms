/*
Một xâu ký tự số chỉ bao gồm các chữ số 6 và 8 sẽ được gọi là “phát lộc” nếu thỏa mãn các điều kiện sau: Chữ số đầu tiên là chữ số 8, chữ số cuối cùng là chữ số 6. Không có 2 chữ số 8 nào ở cạnh nhau. Không có nhiều hơn 3 chữ số 6 ở cạnh nhau. Viết chương trình liệt kê các xâu ký tự phát lộc độ dài N theo thứ tự tăng dần.

Input Format

Số nguyên dương N;

Constraints

2<=N<=15;

Output Format

Các xâu lộc phát thỏa mãn điều kiện

Sample Input 0

7
Sample Output 0

8666866
8668666
8668686
8686686
8686866
Submissions: 93
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
int n, ok, k, a[1000];
void ktao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 6;
    }
}

void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 8)
    {
        a[i--] = 6;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i] = 8;
    }
}
bool check()
{
    if (a[1] != 8 || a[n] != 6)
        return false;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == 8 && a[i - 1] == 8)
            return false;

        if (i >= 4 && a[i] == 6 && a[i - 1] == 6 && a[i - 2] == 6 && a[i - 3] == 6)
            return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    ok = 1;
    ktao();
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
        sinh();
    }
}
