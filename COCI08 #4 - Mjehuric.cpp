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
void print(vector<int> lis){
	for (auto i:lis){
		cout<<i<<" ";
		
	}
	cout<<endl;
}

void qs(vector<int> &lis,int n){

   int i, j;
   for (i = 0; i < n-1; i++)      {
 
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (lis[j] > lis[j+1]){
              swap(lis[j], lis[j+1]);
              print(lis);
           }
   }

}

int main(){
    
    int n=5;
    vector<int> lis(n);
    ff(n) cin>>lis[i];
    qs(lis,n);
    return 0;
}
