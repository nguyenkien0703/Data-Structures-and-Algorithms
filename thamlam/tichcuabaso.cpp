/*
Cho số nguyên dương N, nhiệm vụ của bạn là kiểm tra xem có thể viết N = a * b * c hay không, trong đó a, b, c là 3 số nguyên dương lớn hơn hoặc bằng 2 khác nhau.

Input Format

Dòng duy nhất chứa số nguyên dương N

Constraints

2<=N<=10^9

Output Format

In ra YES nếu có thể biểu diễn N dưới dạng tích của 3 số, ngược lại in ra NO

Sample Input 0

11
Sample Output 0

NO
Sample Input 1

24
Sample Output 1

YES
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int ac = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    int i = 2;
    map<int, int> db;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            db[i]++;
            n /= i;
        }
    }
    if (n != 1)
        db[n]++;
    if (db.size() >= 3)
    {
        cout << "YES";
    }
    else
    {
        if (db.size() == 1)
        {
            int res = 0;
            for (auto x : db)
            {
                if (res >= 6)
                    break;
                res += x.second;
            }
            if (res >= 6)
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
        }
        else
        {
            int res = 0;
            for (auto x : db)
            {
                if (res >= 4)
                    break;
                res += x.second;
            }
            if (res >= 4)
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
        }
    }
}