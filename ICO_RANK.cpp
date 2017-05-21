// Using policy based data structure to hack the way around
/*input
6
78
24
68
40
39
89
*/
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <bits/stdc++.h>
 
using namespace __gnu_pbds;
using namespace std;
 
typedef
tree<
  int,
  null_type,
  greater<int>,
  rb_tree_tag,
  tree_order_statistics_node_update>
ordered_set;
 
using namespace std;
int main(){

	int n;
	cin>>n;
	ordered_set v;
	for(int i=0;i<n;i++){
		int x; cin>>x;
		v.insert(x);
		
		cout<<v.order_of_key(x)+1<<"\n";
	}
}
