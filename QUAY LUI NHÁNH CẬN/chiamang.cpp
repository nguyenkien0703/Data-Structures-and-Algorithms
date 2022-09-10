/*

Cho mảng các số nguyên A[] gồm N phần tử. Hãy chia mảng số nguyên A[] thành K tập con khác rỗng sao cho tổng các phần tử của mỗi tập con đều bằng nhau. Mỗi phần tử thuộc tập con xuất hiện duy nhất một lần trong tất cả các tập con. Ví dụ với A[] = {2, 1, 4, 5, 6}, K =3 ta có kết quả {2, 4}, {1, 5}, {6}.

Input Format

Dòng thứ nhất là hai số N và K; Dòng tiếp theo đưa vào N số của mảng A[]; các số được viết cách nhau một vài khoảng trống.

Constraints

1≤N, K≤20; 0≤A[i]≤100.

Output Format

Đưa ra 1 nếu có thể chia tập con thành K tập thỏa mãn yêu cầu bài toán, ngược lại đưa ra 0

Sample Input 0

6 4
82 43 38 38 18 61 
Sample Output 0

0
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9;

int n, k, s, a[200];
bool ok;
int used[200];

void Try(int sum, int cnt)
{
    if (ok == true)
        return;
    if (cnt == k)
    {
        ok = true;
        return;
    }
    for (int j = 1; j <= n; j++)
    {
        if (used[j])
        {
            used[j] = 0;
            if (sum == s)
            {
                Try(0, cnt + 1);
                return;
            }
            if (sum > s)
                return;
            else
                Try(sum + a[j], cnt);
        }
        used[j] = 1;
    }
}

int main()
{
    cin >> n >> k;
    s = 0;
    ok = false;
    memset(used, 1, sizeof(used));
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    if (s % k != 0)
        cout << 0;
    else
    {
        s /= k;
        Try(0, 0);
        if (ok == true)
            cout << 1;
        else
            cout << 0;
    }
}