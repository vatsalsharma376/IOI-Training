#include <bits/stdc++.h>

#define pb(x) push_back(x);
#define in(y) insert(y);
#define tt(t) while(t--)
#define itr ::iterator it;
#define ll long long
#define vi vector<int>
#define ii pair<int, int>
#define vii vector<ii>
#define si set<int>                      
#define msi map<string, int>
#define new cout<<endl
#define ff(n) for(int i=0;i<n;i++)
#define all(v) sort(v.begin(),v.end())
#define PI acos(-1)

using namespace std;

int main(){
    int n=3;
    vector<int> lis(n);
    ff(n) cin>>lis[i];
    all(lis);
    string s;
    cin>>s;
    ff(n){
    	if(s[i]=='A') cout<<lis[0]<<" ";
    	else if(s[i]=='B') cout<<lis[1]<<" ";
    	else cout<<lis[2]<<" ";
    }
    return 0;
}
