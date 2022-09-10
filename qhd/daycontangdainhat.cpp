/*
Cho mảng số nguyên A[] gồm N phần tử, hãy tìm dãy con (không nhất thiết các phần tử phải liên tiếp) tăng chặt dài nhất của mảng A.

Input Format

Dòng đầu tiên là N; Dòng thứ 2 gồm N phần tử của mảng A;

Constraints

1<=N<=1000; 1<=A[i]<=1000;

Output Format

In ra độ dài của dãy con tăng dài nhất

Sample Input 0

14
128 104 53 876 660 961 754 775 290 231 224 915 392 994 
Sample Output 0

6
*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n ;
    cin>> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) {
        cin>>v[i];
    }
    vector<ll> l(n,1);
    for(ll i=0; i<n; i++) {
        for(ll j=0; j<i; j++) {
            if(v[i]>v[j]){
                l[i]=max(l[i],l[j]+1);
            }
        }
    }
    cout<<*max_element(l.begin(),l.end())<<endl;



}