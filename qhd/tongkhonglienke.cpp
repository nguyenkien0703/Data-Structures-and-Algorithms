/*

Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn là tính tổng lớn nhất của dãy con trong mảng với một điều kiện đó là trong dãy con này không được có 2 phần tử nằm liền kề nhau.

Input Format

Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 là A[i];

Constraints

1<=N<=10^6; 1<=A[i]<=1000;

Output Format

In ra kết quả của bài toán

Sample Input 0

7
314 514 148 451 896 589 296 
Sample Output 0

1706
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1;
const int K = 101;
const int M = 1e9 + 7;
#define ll long long 
int f[N][K];
int main() {
    
    int n;cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];

    }
    int sum[n];
    sum[0]=a[0];
    sum[1]=max(a[0],a[1]);
    for(int i=2;i<n;i++){
        sum[i]=max(sum[i-2]+a[i],sum[i-1]);
    }
    cout<<sum[n-1];
    return 0;
} 