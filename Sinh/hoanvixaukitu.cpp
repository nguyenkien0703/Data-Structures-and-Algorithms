/*
Cho một xâu kí tự S chỉ bao gồm các kí tự , hãy in ra các hoán vị của các kí tự khác nhau trong S theo thứ tự từ điển tăng dần.

Input Format

1 dòng chứa xâu S

Constraints

1<=len(S)<=10;

Output Format

In ra các hoán vị của xâu S

Sample Input 0

lqk
Sample Output 0

klq
kql
lkq
lqk
qkl
qlk
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int> 
#define vii vector<pii> 
#define pb push_back 
#define fi first 
#define se second 
#define foru(i,a,b) for(int i=a;i<b;i++)
#define ford(i,b,a) for(int i=b;i>=a;i--)
const ll MOD = 1e9 + 7;

string s ;
int a[1000];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>> s;
    set<char> se;
    for(int i=0;i<s.size();i++){
        se.insert(s[i]);
    }
    vector<char > v;
    for(auto x : se){
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        a[i]=i;
    }
    do{
        for(int i=0;i<v.size();i++){
            cout<<v[a[i]];
        }
        cout<<endl;
    }while(next_permutation(a,a+v.size()));
    
}
/*

string s;

void solve(){
    cin >> s;
    sort(all(s));
    do{
        cout << s;
        el;
    } while (next_permutation(all(s)));
}




*/
