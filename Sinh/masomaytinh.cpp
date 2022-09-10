/*

Số lượng máy tính ở các phòng thực hành tăng lên nhanh chóng. Để gán mã cho các máy tính của trường đó người ta sử dụng mã gồm 2*N ký tự, trong đó: N ký tự đầu tiên là hoán vị của N chữ cái in hoa đầu tiên, tính từ A. N ký tự tiếp theo là các ký tự số bất kỳ từ 1 đến N (có thể trùng nhau). Người ta ước tính chỉ cần N = 5 là đủ để gán mã cho toàn bộ máy tính kể cả khi mở rộng quy mô các phòng thực hành. Hãy viết chương trình liệt kê các mã tạo được với giá trị N cho trước.

Input Format

Số nguyên dương N

Constraints

1 < N < 6

Output Format

Ghi ra lần lượt các mã khác nhau tạo được theo thứ tự từ điển, mỗi mã ghi trên một dòng

Sample Input 0

2
Sample Output 0

AB11
AB12
AB21
AB22
BA11
BA12
BA21
BA22
Submissions: 70
Max Score: 100
Difficulty: Easy
Rate This Challenge:

    
More


*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int a[1001], ok, n;
void ktao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 1;
    }
}
void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == n)
    {
        --i;
    }
    if (i == 0)
        ok = 0;
    else
    {
        a[i]++;
        for (int j = i + 1; j <= n; j++)
        {
            a[j] = 1;
        }
    }
}
int main()
{
    cin >> n;
    string s = "";
    for (int i = 1; i <= n; i++)
    {
        s += 'A' + i - 1;
    }
    vector<string> v1, v2;
    do
    {
        v1.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    ok = 1;
    ktao();
    while (ok)
    {
        string res = "";
        for (int i = 1; i <= n; i++)
        {
            res += to_string(a[i]);
        }
        v2.push_back(res);
        sinh();
    }
    for (auto x : v1)
    {
        for (auto y : v2)
        {
            cout << x << y << endl;
        }
    }
    return 0;
}