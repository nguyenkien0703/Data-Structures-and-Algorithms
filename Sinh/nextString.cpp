/*
Hãy viết chương trình nhận vào một chuỗi S(có thể khá dài) các ký tự số và đưa ra màn hình hoán vị kế tiếp của các ký tự số đó (với ý nghĩa là hoán vị có giá trị lớn hơn tiếp theo nếu ta coi chuỗi đó là một giá trị số nguyên). Chú ý: Các ký tự số trong dãy có thể trùng nhau. Ví dụ:123 -> 132 279134399742 -> 279134423799
Cũng có trường hợp sẽ không thể có hoán vị kế tiếp. Ví dụ như khi đầu vào là chuỗi 987.

Input Format

Dòng duy nhất chứa xâu S

Constraints

1<=len(S)<=10000;

Output Format

In ra xâu hoán vị kế tiếp của S, hoặc in ra "NOT EXIST" nếu S là xâu hoán vị cuối cùng.

Sample Input 0

99877541
Sample Output 0

NOT EXIST
Sample Input 1

76090400736422
Sample Output 1

76090400742236

*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (next_permutation(s.begin(), s.end()))
    {
        cout << s << endl;
    }
    else
    {
        cout << "NOT EXIST";
    }

    return 0;
}
