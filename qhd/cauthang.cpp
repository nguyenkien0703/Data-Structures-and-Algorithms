/*
Một chiếc cầu thang có N bậc. Mỗi bước, bạn được phép bước lên trên tối đa K bước. Hỏi có tất cả bao nhiêu cách bước để đi hết cầu thang? (Tổng số bước đúng bằng N).

Input Format

Dòng duy nhất chứa 2 số nguyên N và K

Constraints

1<=N<=100000; 1<=K<=100;

Output Format

In ra đáp án tìm được trên một dòng theo modulo 10^9+7.

Sample Input 0

7 3
Sample Output 0

44
Sample Input 1

4 2
Sample Output 1

5

*/

#include <bits/stdc++.h>
 
using namespace std;
const int N = 1e5 + 1;
const int K = 101;
const int M = 1e9 + 7;
int f[N][K];
int main() {
    f[0][0] = 1;
    for (int i = 1; i < N; ++i) f[i][0] = 0;
    for (int j = 1; j < K; ++j) {
        int ans = 1;
        f[0][j] = 1;
        for (int i = 1; i < j; ++i) {
            f[i][j] = ans;
            ans = (ans + f[i][j]) % M;
        }
        for (int i = j; i < N; ++i) {
            f[i][j] = ans;
            ans = (ans - f[i - j][j] + M) % M;
            ans = (ans + f[i][j]) % M;
        }
    }
    int n, k; cin >> n >> k;
        cout << f[n][k] << '\n';
    return 0;
} 