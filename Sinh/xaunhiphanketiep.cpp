/*
Cho xâu nhị phân S, hãy in ra xâu nhị phân kế tiếp của S. Trong trường hợp S là xâu nhị phân cuối cùng thì in ra xâu nhị phân đầu tiên.

Input Format

1 dòng duy nhất chưa xâu nhị phân S

Constraints

1<=len(S)<=1000;

Output Format

In ra xâu nhị phân kế tiếp.

Sample Input 0

1110010
Sample Output 0

1110011
Sample Input 1

11111
Sample Output 1

00000
Submissions: 121
Max Score: 100
Difficulty: Easy
Rate This Challenge:

    
More


*/



#include<bits/stdc++.h>
using namespace std ;
int main(){
    string s;
    cin>>s;
    int pos=s.length()-1;
    while(pos>=0&&s[pos]=='1'){
        s[pos]='0';
        pos--;
    }
    if(pos==-1){
        cout<<s<<endl;
    }else{

        s[pos]='1';
        cout<<s<<endl;
        
    }
    
    
    
    return 0;
}