#include <bits/stdc++.h>
using namespace std;
 long  int ans=0;
// A Trie node
struct Trie
{
    bool isLeaf;    
    
    unordered_map<char, Trie*> map;
};
 
Trie* getNewTrieNode()
{
    Trie* node = new Trie;
    node->isLeaf = false;
 
    return node;
}
 
void insert(Trie*& head, char* str)
{
    Trie* curr = head;
    while (*str)
    {
        if (curr->map.find(*str) == curr->map.end()){
            curr->map[*str] = getNewTrieNode();
        	++ans;
        }
        curr = curr->map[*str];
 
        str++;
    }
 
    curr->isLeaf = true;
}
 

int main()
{    Trie* head = getNewTrieNode();
 
 	char s[100];
 	while(cin>>s){
 		insert(head,s);
 	}
    //insert(head, "hello");
    cout<<ans+1;
    
    return 0;
}
