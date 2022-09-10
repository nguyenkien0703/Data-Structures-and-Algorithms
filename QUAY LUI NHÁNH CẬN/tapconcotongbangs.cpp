/*

Xét tất cả các tập hợp các số nguyên dương có các phần tử khác nhau và không lớn hơn số n cho trước. Nhiệm vụ của bạn là hãy đếm xem có tất cả bao nhiêu tập hợp có số lượng phần tử bằng k và tổng của tất cả các phần tử trong tập hợp bằng s? Các tập hợp là hoán vị của nhau chỉ được tính là một. Ví dụ với n = 9, k = 3, s = 23, {6, 8, 9} là tập hợp duy nhất thỏa mãn.

Input Format

1 dòng gồm 3 số nguyên n, k, s

Constraints

1 ≤ n ≤ 20, 1 ≤ k ≤ 10 và 1 ≤ s ≤ 155

Output Format

In ra số lượng các tập hợp thỏa mãn điều kiện đề bài.

Sample Input 0

16 8 91
Sample Output 0

28
Submissions: 102
Max Score: 100
Difficulty: Easy
Rate This Challenge:

    
More
 


*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1001], x[1001], s , k, n , res;

void Backtrack(int sum , int cnt,int pos)
{
    if(sum == s && cnt == k)
    {
        ++res;
        return;
    }
    for(int j = pos ; j <= n ; j++)
    {
        if(sum + j <= s)
        {
            Backtrack(sum + j , cnt + 1, j + 1);
        }
    }
}

int main()
{
    cin >> n >> k >> s;
    res = 0;
    Backtrack(0 ,0 , 1);
    cout << res;
}