/*
Cho hai số nguyên dương S và D, trong đó S là tổng các chữ số và D là số các chữ số của một số. Nhiệm vụ của bạn là tìm số nhỏ nhất thỏa mãn S và D?

Input Format

1 dòng gồm 2 số S, D

Constraints

1<=S,D<=1000;

Output Format

In ra số nhỏ nhất có D chữ số và có tổng bằng S, nếu không tìm được đáp án thì in ra -1

Sample Input 0

12 8
Sample Output 0

10000029

*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pii pair<int, int>

string calc(int s, int d)
{
    if (9 * d < s || s == 0)
        return "-1";
    string res;
    int number_start = -1; 
    for (int i = 1; i <= 9; i++)
    {
        if (9 * (d - 1) >= s - i)
        {
            number_start = i;
            break;
        }
    }
    res.push_back(number_start + '0');
    s -= number_start;
    d--;
    for (int i = 0; i <= 9; i++)
    {
        while (9 * (d - 1) >= s - i && s - i >= 0)
        {
            res.push_back(i + '0');
            s -= i;
            d--;
        }
    }
    return res;
}
void solve()
{
    int s, d;
    cin >> s >> d;
    cout << calc(s, d) << endl;
}

int main()
{
    solve();
}