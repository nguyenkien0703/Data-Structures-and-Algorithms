/*


Bạn được cung cấp một số nguyên n. Trên mỗi bước, bạn có thể trừ một trong các chữ số khỏi số. Cần thực hiện bao nhiêu bước để số đó bằng 0?

Input Format

Dòng duy nhất chứa số nguyên n

Constraints

1<=n<=10^6;

Output Format

In ra số bước tối thiểu

Sample Input 0

4
Sample Output 0

1
Sample Input 1

27
Sample Output 1

5
Explanation 1

Các bước thực hiện : 27→20→18→10→9→0
*/

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int f[1000005];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=9;i++){
        f[i]=1;
    }
    for(int i=10;i<=n;i++){
        vector<int>tmp;
        tmp.clear();
        int z=i;
        f[i]=INT_MAX;
        while(z!=0){
            tmp.push_back(z%10);
            z/=10;
        }
        for(auto a:tmp){
            if(a!=0){
                f[i]=min(f[i],f[i-a]+1);
            }
        }
    }
    cout<<f[n];
}