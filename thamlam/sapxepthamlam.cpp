/*
Cho mảng A[] gồm N số và thực hiện các thao tác theo nguyên tắc dưới đây: 1. Ta chọn một mảng con sao cho phần tử ở giữa của mảng con cũng là phần tử ở giữa của mảng A[] (trong trường hợp N lẻ). 2. Đảo ngược mảng con đã chọn trong mảng A[]. Ta được phép chọn mảng con và phép đảo ngược mảng con bao nhiêu lần tùy ý. Ví dụ với mảng A[] = {1, 6, 3, 4, 5, 2, 7} ta có câu trả lời là YES vì: ta chọn mảng con {3, 4, 5} và đảo ngược để nhận được mảng A[]={1, 6, 5, 4, 3, 2, 7}, chọn tiếp mảng con {6, 5, 4, 3, 2} và đảo ngược ta nhận được mảng A[]={1, 2, 3, 4, 5, 6, 7}. Hãy cho biết ta có thể sắp xếp được mảng A[] bằng cách thực hiện các thao tác kể trên hay không?

Input Format

Dòng 1 chứa số nguyên dương N là số lẻ.
Dòng 2 chứa N số nguyên của mảng A[]

Constraints

1<=N<=10^6; 0<=A[i]<=10^9;

Output Format

In ra YES hoặc NO là đáp án của bài toán

Sample Input 0

5
1 3 8 7 3 
Sample Output 0

NO
Sample Input 1

5
1 4 3 2 5
Sample Output 1

YES
Submissions: 53
Max Score: 100
Difficulty: Easy
Rate This Challenge:

    
More


*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int n;
int a[1000001], b[1000001];
int main()
{
    fast_io();
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    int ok = 1;
    for (int i = 0; i < n; i++)
    {
        if (b[i] != a[i] && a[i] != b[n - 1 - i])
        {
            ok = 0;
            break;
        }
    }
    if (ok)
        cout << "YES";
    else
        cout << "NO";
}