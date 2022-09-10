/*
Trong 8 chữ cái Tiếng Anh đầu tiên (ABCDEFGH) thì có 2 nguyên âm là ‘A’, ‘E’, còn lại là phụ âm. Người ta muốn ghép các chữ cái bắt đầu từ chữ cái ‘A’ cho đến chữ cái c (‘D’ <= c <= ‘H’) sao cho mỗi chữ cái được sử dụng đúng một lần và xâu kết quả không có nguyên âm nào bị kẹp giữa bởi hai phụ âm. Hãy liệt kê các xâu thỏa mãn theo thứ tự từ điển.

Input Format

Chỉ có một dòng ghi chữ cái c

Constraints

'D' <= c <= 'H'

Output Format

Liệt kê các xâu thỏa mãn, mỗi xâu trên một dòng.

Sample Input 0

D
Sample Output 0

ABCD
ABDC
ACBD
ACDB
ADBC
ADCB
BCDA
BDCA
CBDA
CDBA
DBCA
DCBA
Submissions: 73
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
// void ktao()
// {
//     for (int i = 1; i <= n; i++)
//     {
//         a[i] = 1;
//     }
// }
// void sinh()
// {
//     int i = n;
//     while (i >= 1 && a[i] == n)
//     {
//         --i;
//     }
//     if (i == 0)
//         ok = 0;
//     else
//     {
//         a[i]++;
//         for (int j = i + 1; j <= n; j++)
//         {
//             a[j] = 1;
//         }
//     }
// }
bool aka(char c)
{
    return c == 'A' || c == 'E';
}
bool check(string s)
{
    for (int i = 1; i <= s.size() - 2; i++)
    {
        if (aka(s[i]) && !aka(s[i - 1]) && !aka(s[i + 1]))
            return false;
    }
    return true;
}
int main()
{
    char n;
    cin >> n;
    string s = "";
    for (int i = 'A'; i <= n; i++)
    {
        s +=string(1,i);
    }
    do
    {
        if (check(s))
            cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    return 0;
}