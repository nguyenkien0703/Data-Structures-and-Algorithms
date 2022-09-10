/*

Cho mảng số nguyên A[] có N phần tử, lần lượt thêm các phần tử trong mảng vào cây nhị phân sao cho cây nhị phân thu được là cây nhị phân tìm kiếm với gốc cây là A[0]. Nhiệm vụ của bạn là tìm kiếm sự xuất hiện của phần tử có giá trị X trên cây nhị phân tìm kiếm.

Input Format

Dòng đầu tiên là N và X : số lượng phần tử trong mảng A[] và phần tử cần tìm kiếm; Dòng thứ 2 gồm N phần tử trong mảng A[];

Constraints

1<=N<=1000; 1<=A[i], X<=10^6;

Output Format

In YES nếu X xuất hiện trên cây ngược lại in ra NO

Sample Input 0

8
8 7 5 6 2 4 1 3 
13
Sample Output 0

NO
Sample Input 1

8
8 7 5 6 2 4 1 3 
5
Sample Output 1

YES

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
int  n ;
struct node{
    int  val;
    node *left, *right;
    node(int  x ){
        val = x;
        left = NULL;
        right = NULL;
    }
};


node* insert(node *root,int x){
	
	if(root==NULL) 
		return new node(x);	
	if(x < root->val){
		root->left=insert(root->left,x);
	}else {
		root->right=insert(root->right,x);
	}
	return root;
}
int ok = 0;
void timkiem(node *root, int ans){
    if(root==NULL){
        return ;
    }
    if(root->val==ans){
        ok = 1;
    }
    if(ans < root->val){
        timkiem(root->left,ans);
    }else {
        timkiem(root->right,ans);

    }


}
/*

casch 2 
bool timkiem(node *root, int ans){
    if(root==NULL){
        return false;
    }
    if(root->val==ans){
        return true;
    }
    if(ans < root->val){
         return timkiem(root->left,ans);
    }else {
         return timkiem(root->right,ans);

    }


}
*/
ll ans;
int main()
{
    
    faster;
    node *root =NULL;
    cin >> n;
    for(int i=0;i<n;i++){
       int x ;
       cin>>x;
       root=insert(root,x);
    }
    cin >> ans;
    timkiem(root,ans);
    cout << (ok == 1 ? "YES" : "NO");
}




