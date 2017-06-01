// I don't know why but this gets 98/100
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
vector<ii> edge;
vector<vector<int> > grp;
int main(){
    
    int n,m;
    cin>>n>>m;
    vector<int> col(n,0);
    grp.resize(n);
    ff(m){
        int x,y;
        cin>>x>>y;
        --x;
        --y;
        grp[x].pb(y);
        grp[y].pb(x);
        edge.pb(make_pair(x,y));
        edge.pb(make_pair(y,x));
    }
    ff(n){
        if(!grp[i].size()){
            cout<<"NIE\n";
            return 0;
        }
    }
    ff(edge.size()){
        int u=edge[i].first;
        int v=edge[i].second;
        if(!col[u] and !col[v]){ col[u]=1; col[v]=2; }
        else if(!col[u]) { col[u]=3-col[v];}
        else if(!col[v]) { col[v]=3-col[u];}
    }
    cout<<"TAK\n";
    ff(n)
    {
        if(col[i]==0) cout<<"N\n";
        else if(col[i]==1) cout<<"K\n";
        else cout<<"S\n";
    }
    return 0;
}
