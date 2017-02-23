
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

int main(){
	int n;
	cin>>n;
	vector<int> sto(n);
	IN(sto);
	int sum=0;
	ff(n) sum+=sto[i];
	// Choose all subsets of a given set
	int ans=9999999;
	
	for(int i=0;i<(1<<n);i++){
		int cur=0;
		for(int j=0;j<n;j++){
			if((1<<j)&i){ //if jth bit is set in i
				cur+=sto[j];
			} 
		}
		ans=min(ans,abs(cur-(sum-cur)));
	}
	cout<<ans;
    return 0;
}
