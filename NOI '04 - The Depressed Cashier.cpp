#include "bits/stdc++.h"
using namespace std;
const int N = 3e5;
const int MAX = 1e5;
const int inf = 1e9 + 9;
const int SN = 1 << 20;
int n , val;
int cur = 0;
int segtree[SN];
char type;
int k;
int ans = 0;
void update(int l , int r , int node , int idx , int add){
    segtree[node] += add;
    if(l < r){
        int mid = l + r >> 1;
        if(idx <= mid){
            update(l , mid , node + node , idx , add);
        }
        else{
            update(mid + 1 , r , node + node + 1 , idx , add);
        }
    }
}
int getmin(int l , int r , int node){
    if(!segtree[node]){
        return inf;
    }
    if(l == r){
        return l;
    }
    int mid = l + r >> 1;
    int ret = getmin(l , mid , node + node);
    if(ret == inf){
        ret = getmin(mid + 1 , r , node + node + 1);
    }
    return ret;
}
void relax(){
    for(int x = getmin(1 , N , 1) ; x + cur - MAX < val ; x = getmin(1 , N , 1)){
        update(1 , N , 1 , x , -1);
        ++ans;
    }
}
int query(){
    if(segtree[1] < k){
        return -1;
    }
    int l = 1;
    int r = N;
    int node = 1;
    while(l < r){
        int mid = l + r >> 1;
        node += node;
        int cnt = segtree[node + 1];
        if(cnt >= k){
            l = mid + 1;
            ++node;
        }
        else{
            k -= cnt;
            r = mid;
        }
    }
    return l + cur - MAX;
}
int main(){
    scanf("%d %d" , &n , &val);
    while(n--){
        type = '$';
        while(!isalpha(type)){
            type = getchar();
        }
        scanf("%d" , &k);
        if(type == 'I'){
            if(k >= val){
                update(1 , N , 1 , k - cur + MAX , 1);
            }
        }
        else if(type == 'A'){
            cur += k;
        }
        else if(type == 'S'){
            cur -= k;
            relax();
        }
        else{
            printf("%d\n" , query());
        }
    }
    relax();
    printf("%d\n" , ans);
}
