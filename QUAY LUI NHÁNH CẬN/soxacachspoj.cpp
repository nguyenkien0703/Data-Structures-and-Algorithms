/*

Cho số nguyên dương N (2 < N <10). Một số nguyên dương K có N chữ số được gọi là số xa cách nếu thỏa mãn: K không chứa chữ số 0. Tất cả các chữ số từ 1 đến N đều xuất hiện trong K đúng 1 lần. Không có hai chữ số liên tiếp nào trong K có hiệu bằng 1.

Input Format

1 dòng duy nhất chứa số nguyên dương N

Constraints

3<=N<=9

Output Format

In ra các số thỏa mãn theo thứ tự tăng dần

Sample Input 0

4
Sample Output 0

2413
3142
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
bool check(int a[], int n)
{
    for (int i = 2; i <= n - 1; i++)
    {
        if (abs(a[i] - a[i + 1]) == 1||abs(a[i]-a[i-1])==1)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
    do
    {
        if (check(a, n))
        {
            for (int i = 1; i <= n; i++)
            {
                cout << a[i];
            }
            cout << endl;
        }
    } while (next_permutation(a + 1, a + n + 1));
    return 0;
}