/*


Mọi số nguyên dương N đều có thể phân tích thành tổng các bình phương của các số nhỏ hơn N. Ví dụ số 100 = 10^2 hoặc 100 = 5^2 + 5^2 + 5^2 + 5^2. Cho số nguyên dương N. Nhiệm vụ của bạn là tìm số lượng ít nhất các số nhỏ hơn N mà có tổng bình phương bằng N.

Input Format

Một số tự nhiên N được viết trên 1 dòng.

Constraints

1≤N≤10000;

Output Format

Đưa ra kết quả của bài toán

Sample Input 0

100
Sample Output 0

1
*/


#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int f[10005];
int main(){
    int n;
    cin>>n;
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;i++){
        f[i]=INT_MAX;
        for(int j=1;j<=sqrt(i);j++){
            f[i]=min(f[i],f[i-j*j]+1);
        }
    }
    cout<<f[n];
}