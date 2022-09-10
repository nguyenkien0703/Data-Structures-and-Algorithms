/*
Cho số tự nhiên n. Hãy in ra tất cả các số nhị phân từ 1 đến n. Chú ý không in thừa các bit 0 ở đầu.

Input Format

Một số tự nhiên n được ghi trên một dòng.

Constraints

1<=n<=100000;

Output Format

In ra các số nhị phân tử 1 tới n.

Sample Input 0

7
Sample Output 0

1 10 11 100 101 110 111 

*/

#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second



vector<string> res;
void init(){
    queue<string> q;
    q.push("1");
    res.push_back("1");
    while(res.size()<100000){
        string top=q.front();
        q.pop();
        res.push_back(top+"0");
        res.push_back(top+"1");
        q.push(top+"0");
        q.push(top+"1");
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    init();
 

    int n;cin>>n;
    for(int i=0;i<n;i++) {
        cout<<res[i]<<' ';

    }



    
}