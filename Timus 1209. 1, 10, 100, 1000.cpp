
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

using namespace std;
bool perfect(ll int n){
	long double x=(long double)sqrt((long double)n);
	ll int y=(ll int)sqrt(n);
	return x==y;
}
ll int per(ll int y){
	ll int sq=sqrt(1-(4*y*-1));
	if((sq-1)%2==0) return true;
	return false;
}
bool valid (ll int x){
	// 1+ n(n+1)/2 = x
	// n(n+1) = 2(x-1)
	ll int y=x-1+x-1;
	if(perfect(1-(4*y*-1)) and per(y)) return true;
	return false;
}
int main(){
    ll int n;
    cin>>n;
    while(n--){
    	ll int x;
    	cin>>x;
    	if(!valid(x)) cout<<"0 ";
    	else cout<<"1 ";
    }
    return 0;
}
