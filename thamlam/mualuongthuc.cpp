/*

Giả sử bạn là một người nghèo trong địa phương của bạn. Địa phương của bạn có duy nhất một cửa hàng bán lương thực. Cửa hàng của bạn mở cửa tất cả các ngày trong tuần ngoại trừ chủ nhật. Cho bộ ba số N, S, M thỏa mãn ràng buộc sau: N : số đơn vị lương thực nhiều nhất bạn có thể mua trong ngày. S : số lượng ngày bạn cần được sử dụng lương thực để tồn tại. M : số đơn vị lương thực cần có mỗi ngày để bạn tồn tại. Giả sử bạn đang ở ngày thứ 2 trong tuần và cần tồn tại trong S ngày tới. Hãy cho biết số lượng ngày ít nhất bạn cần phải mua lương thực từ của hàng để tồn tại hoặc bạn sẽ bị chết đói trong S ngày tới.

Input Format

1 dòng chứa 3 số N, S, M

Constraints

1<=S,N,M<=100

Output Format

In ra số ngày ít nhất cần mua lương thực, nếu không thể mua đủ lương thực để tồn tại thì in ra -1

Sample Input 0

7 5 7
Sample Output 0

5
*/



#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
#define fi first
#define se second
void solve(){
    int n , s,m;
    cin>>n>>s>>m;
    int sum =s*m;
    int need_days=sum/n;
    if(sum%n!=0){
        need_days++;
    }
    int sunday=s/7;
    int real_days=s-sunday;
    if(real_days< need_days){
        cout<<-1<<endl;
    }else{
        cout<<need_days<<endl;
    }

  

}


int main() {
    solve();    
}