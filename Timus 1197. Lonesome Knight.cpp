
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
#define IN(vec) ff(vec.size()) cin>>vec[i]
using namespace std;
int f(char b){
	int k=(int)b-96;
	return k;
}
bool chk(int x,int y){
	if(x>8 or y>8) return false;
	if(x<=0 or y<=0) return false;
	
	
	return true;
}
int main(){
	int n;
	cin>>n;
	ff(n){
		char a,b;
		cin>>a>>b;
		int po=b-'0';
		int so=f(a);
		int x,y;
		x=so;
		y=po;
		// we have(x,y) cordinate
		int ans=0;
		if(chk(x+2,y+1)) ++ans;
		if(chk(x-2,y+1)) ++ans;
		if(chk(x+2,y-1)) ++ans;
		if(chk(x-2,y-1)) ++ans;
		if(chk(x+1,y+2)) ++ans;
		if(chk(x-1,y+2)) ++ans;
		if(chk(x+1,y-2)) ++ans;
		if(chk(x-1,y-2)) ++ans;
		cout<<ans<<"\n";
	}
    return 0;
}
