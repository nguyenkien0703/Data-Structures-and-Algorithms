/*

Cho một cây nhị phân, nhiệm vụ của bạn là kiểm tra xem mọi node lá của cây có cùng mức hay không.

Input Format

Dòng đâu tiên là N : số lượng cạnh của cây. Các dòng tiếp theo mô tả cây nhị phân bằng 3 số (x, y, z) : x là node cha, y là node con, z có thể nhận 1 trong 2 giá trị là L và R, tương ứng với y là node con bên trái hoặc node con bên phải của x.

Constraints

1<=N<=1000; 1<=x,y<=10^5;

Output Format

In YES nếu mọi node lá trên cây có cùng mức, ngược lại in NO.

Sample Input 0

6
1 2 L 1 3 R 2 4 L 2 5 R 3 6 L 3 7 R 
Sample Output 0

YES
Sample Input 1

7
1 2 L 1 3 R 2 4 L 2 5 R 3 6 L 3 7 R 6 8 L 
Sample Output 1

NO
*/


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<ll, ll> 
#define vii vector<pii> 
#define pb push_back 
#define fi first 
#define el cout<<endl
#define se second 
#define in(a) cin>>  a;
#define sz(a) a.size();
#define out(a) cout<<  a;
#define all(x) (x).begin(), (x).end()
#define rep(a) for(int i = 0; i < (a); i++)
#define vll vector<ll> 
#define vi vector<int >
#define ms(a,n) memset(a,n,sizeof(a))
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,b,a) for(int i=b;i>=a;i--)
#define faster ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
const ll MOD = 1e9 + 7;

struct Node{
    int val;
    Node *left, *right;
    Node(int x){
        val = x;
        left = NULL;
        right=NULL;
    }
};
void makeRoot(Node *root,int u,int v,char c ){
    if(c=='L')
        root->left = new Node(v);
    else{
        root->right = new Node(v);

    }
}
void insertNode(Node *root,int u,int v,char c){
    if(root==NULL) return;
    if(root->val==u){
        makeRoot(root,u,v,c);
    }else {
        insertNode(root->left,u,v,c);
        insertNode(root->right,u,v,c);
    }
}
bool check(Node *root,int h , int &maxh){
    //chạy đến nốt NULL 
    if(root ==NULL) return true;
    // nếu đây là nút lá thì 
    if(root->right==NULL && root->left==NULL)
    {
        if(maxh==0){
            maxh=h;
            return true;
        }else {
            return h == maxh;
        }
    }
    //còn nếu đây ko phỉa là nút lá thiò gọi đệ quy tới con bên trái và con bên phải 
    else {
        return check(root->left, h + 1, maxh) && check(root->right, h + 1, maxh);
    }


}
int main()
{
    
    faster;
    Node *root = NULL;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int u, v;
        char c;
        cin >> u >> v >> c;
        if(root==NULL){
            root = new Node(u);
            makeRoot(root, u, v, c);
        }else {
            insertNode(root, u, v, c);
        }

    }
    int maxh = 0;
    cout << (check(root,0,maxh) == true ? "YES" : "NO");
}
