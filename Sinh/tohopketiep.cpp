/**
 * 
 * Cho tập gồm N phần tử là các số từ 1 tới N và số K. Bạn hãy đưa ra tập con kế tiếp của tập con hiện tại. Nếu tập con hiện tại là tập con cuối cùng thì bạn hãy đưa ra tập con kế tiếp là tập con đầu tiên.

Input Format

Dòng đầu tiên là 2 số nguyên dương N và K. Dòng thứ 2 là K số nguyên của tập con hiện tại

Constraints

1<=K<=N<=1000;

Output Format

In ra tập con kế tiếp trên 1 dòng.

Sample Input 0

6 5
2 3 4 5 6 
Sample Output 0

1 2 3 4 5 
Sample Input 1

11 7
1 3 5 6 7 8 9 
Sample Output 1

1 3 5 6 7 8 10 
Submissions: 106
Max Score: 100
Difficulty: Easy
Rate This Challenge:

    
More

 * /


 

#include <bits/stdc++.h>
using namespace std;
int n, k, a[1000];
void next()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << i << " ";
        }
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
        for (int i = 1; i <= k; i++)
        {
            cout << a[i] << " ";
        }
    }
}

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
    }
    next();
    cout << endl;

    return 0;
}