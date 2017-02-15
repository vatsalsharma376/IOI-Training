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
    string brun="BABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABC";
    string adri="ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC";
    string gora="CCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABB";
    int n;
    cin>>n;
    string s;
    cin>>s;
    int bs=0,as=0,gs=0;
    for(int i=0;i<n;i++){
    	if(s[i]==brun[i]) ++bs;
     if(s[i]==adri[i]) ++as;
     if(s[i]==gora[i]) ++gs;
    }
    int fi=max(bs,max(as,gs));
    cout<<fi<<endl;
    if(as==fi){
    	cout<<"Adrian\n";
    }
    if(bs==fi){
    	cout<<"Bruno\n";
    }
    if(gs==fi){
    	cout<<"Goran\n";
    }
    return 0;
}
