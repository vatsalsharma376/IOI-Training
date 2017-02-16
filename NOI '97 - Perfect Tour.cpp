#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin.tie(0);
    
    int m, n;
    cin>>m>>n;
    n--;
    vector< vector<int> > v(n, vector<int>(m));
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>v[j][i];
    vector<int> pre(n);
    pre[0] = *max_element(v[0].begin(),v[0].end());
    for(int i=1;i<n;i++)
        pre[i] = pre[i-1]+*max_element(v[i].begin(),v[i].end());
    int ans = 0;
    for(int i = 1;i<n;i++)
        for(int j = 0;j<i;j++)
            ans = max(ans,pre[i]-pre[j]);
    
    cout<<max(ans,*max_element(pre.begin(),pre.end()))<<endl;
    
    return 0;
}
