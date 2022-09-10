/*
John có một đàn bò. Một ngày đẹp trời, anh ta quyết định mua xe tải với khả năng chở được C kg (1000 ≤ C ≤ 25000) để đưa những con bò đi xem phim. Cho số con bò là N (20 ≤ N ≤ 100) và khối lượng w[i] của từng con (đều nhỏ hơn C), hãy cho biết khối lượng bò lớn nhất mà John có thể đưa đi xem phim là bao nhiêu.

Input Format

Dòng 1: 2 số nguyên C và N cách nhau bởi dấu cách; Dòng 2: Ghi lần lượt các số nguyên: w[i]

Constraints

1000 ≤ C ≤ 25000; 20 ≤ N ≤ 100; w[i] <= C;

Output Format

Một số nguyên là tổng khối lượng bò lớn nhất mà John có thể mang đi xem phim.

Sample Input 0

259 5
81 58 42 33 61
Sample Output 0

242
Submissions: 68
Max Score: 100
Difficulty: Easy
Rate This Challenge:

    
More
 
1
with Ada.Text_IO, Ad
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1;
const int K = 101;
const int M = 1e9 + 7;
int f[N][K];
int main() {
    
    int s , k ; cin >> s >> k;
   int a[k];
    for(int i = 0; i < k; i++){
        cin>>a[i];
    }
    bool dp[s+1]={0};

    dp[0]=1;

    for(int i = 0; i < k; i++){
        for(int j=s;j>=a[i];j--){
            if(dp[j-a[i]]==1){
                dp[j]=1;
            }

        }
    }

    for(int j=s;j>=1;j--){
        if(dp[j]==1){
            cout<<j;
            return 0;
        }
    }
    // return 0;

    return 0;
} 