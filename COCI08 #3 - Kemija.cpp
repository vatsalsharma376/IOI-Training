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
bool vow(char a){
	if(a=='a') return true;
	if(a=='e') return true;
	if(a=='i') return true;
	if(a=='o') return true;
	if(a=='u') return true;
	return false;
}
int main(){
 
    string s;
    getline(cin,s);
    string k="";
    for(int i=0;i<s.size();i++){
    	if(vow(s[i])){
    		k+=s[i];
    		i+=2;
    	} 
    	else k+=s[i];
 
    }
    cout<<k<<endl;
    return 0;
}
