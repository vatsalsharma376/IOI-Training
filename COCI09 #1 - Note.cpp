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

int main(){
    int n=8;
    vector<int> lis(n);
    vi inc(n);
    vi dec(n);
    ff(n) {
    	cin>>lis[i];
    	inc[i]=lis[i];
    	dec[i]=lis[i];
    }
    sort(inc.begin(),inc.end());
    sort(dec.rbegin(),dec.rend());
    if(lis==inc){
    	cout<<"ascending";
    }
    else if(lis==dec){
    	cout<<"descending";
    }
    else{
    	cout<<"mixed";
    }
    return 0;
}
