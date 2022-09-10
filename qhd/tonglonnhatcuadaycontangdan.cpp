/*

Cho dãy số A[] gồm N số. Nhiệm vụ của bạn là tìm tổng lớn nhất của dãy con được sắp theo thứ tự tăng dần của dãy A[]. Ví dụ với dãy A[] = {1, 101, 2, 3, 100, 4, 5} ta có kết quả là 106 = 1 + 2 + 3 + 100. Với dãy A[] = {10, 7, 5} ta có kết quả là 10. Với dãy A[] = {1, 2, 3, 5} ta có kết quả là 11.

Input Format

Dòng đầu tiên đưa vào N là số phần tử của dãy A[]; Dòng tiếp theo đưa vào N số A[i]; các số được viết cách nhau một vài khoảng trống.

Constraints

1≤N≤1000; 0≤A[i]≤1000.

Output Format

Đưa ra kết quả của bài toán trên 1 dòng

Sample Input 0

8
2 12 3 15 3 16 11 4 
Sample Output 0

45
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; i++)
#define ford(i, b, a) for (int i = b; i >= a; i--)
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    vector<int> dp(n, 0);
    int ans = a[0];
    dp[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        int add = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i])
            {
                add = max(add, dp[j]);
            }
        }

        dp[i] = add + a[i];
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    cout << endl;
}