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
    int i=5,j=4;
    int mx=-99;
    int as=0,sum=0,ans;
	for(int l=0;l<i;l++){
		sum=0;
		for(int po=0;po<j;po++){
			cin>>as;
			sum+=as;
		}
		if(mx<sum){
			mx=sum;
			ans=l;
		}
	}    
	cout<<ans+1<<" "<<mx<<endl;
    return 0;
}
