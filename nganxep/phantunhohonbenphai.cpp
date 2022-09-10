#include <bits/stdc++.h>
using namespace std;

/*

Cho mảng A[] có n phần tử, nhiệm vụ của bạn là đối với mỗi phần tử A[i] trong mảng phải tìm ra phần tử nhỏ hơn đầu tiên nằm bên phải của phần tử lớn hớn hơn đầu tiên nằm bên phải của A[i]. Đối với những phần tử không có phần tử lớn hơn bên phải thì in ra -1 . Ví dụ A[] = {1, 5, 3, 3, 4, 1}, 1->5->3, 5->-1->-1, 3->4->-1, 3->4->-1, 4->-1->-1, 1->-1->-1.

Input Format

Dòng đầu tiên chứa N : Số lượng phần tử trong mảng. Dòng thứ 2 chứa N số nguyên, mỗi số cách nhau một khoảng trắng.

Constraints

1<=N<=10^6; 1<=A[i]<=10^6;

Output Format

In ra đáp án của bài toán trên 1 dòng.

Sample Input 0

5
11 18 12 18 10 
Sample Output 0

12 -1 10 -1 -1 
*/
int main()
{
    int n ; cin >> n;
    int a[n];
    stack<int>st;
    map<int,int>mp1 , mp2;
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i];
        if(st.empty())
        {
            st.push(i);
        }
        else
        {
            while(!st.empty() && a[i] > a[st.top()])
            {
                mp1[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
    }
    while(!st.empty())
    {
        mp1[st.top()] = -1;
        st.pop();
    }
    for(int i = 0 ; i < n ;i++)
    {
        if(st.empty())
        {
            st.push(i);
        }
        else
        {
            while(!st.empty() && a[i] < a[st.top()])
            {
                mp2[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
    }
    while(!st.empty())
    {
        mp2[st.top()] = -1;
        st.pop(); 
    }
    for(int i = 0 ; i < n ;i++)
    {
        if(mp1[i] == -1 || mp2[mp1[i]] == -1)
        {
            cout << -1 << " ";
        }
        else cout << a[mp2[mp1[i]]] << " ";
    }
    return 0;
}