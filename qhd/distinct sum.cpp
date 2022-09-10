/*

Cho mảng A[] gồm N phần tử là số nguyên dương, xét tất cả các tập con của A[] và tính tổng các phần tử trong tập này (bao gồm cả tập rỗng), sau đó liệt kê các tổng khác nhau có thể tạo thành theo thứ tự tăng dần.

Input Format

Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử của mảng A[]

Constraints

1<=N<=100; 1<=A[i]<=100;

Output Format

In ra các tổng có thể tạo thành từ các tập con của A[]

Sample Input 0

3
4 1 2 
Sample Output 0

0 1 2 3 4 5 6 7 

*/

#include<iostream>
using namespace std;
int n;
int arr[105];
int f[100005];
int main(){
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    f[0]=1;
    for(int i=0;i<n;i++){
        for(int j=sum;j>=arr[i];j--){
            if(!f[j]&&f[j-arr[i]]){
                f[j]=1;
            }
        }
    }
    for(int i=0;i<=sum;i++){
        if(f[i]){
            cout<<i<<" ";
        }
    }
}