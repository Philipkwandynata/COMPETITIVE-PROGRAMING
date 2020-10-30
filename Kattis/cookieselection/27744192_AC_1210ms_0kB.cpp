#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template<class TIn>
using indexed_set = tree<
        TIn, null_type, less<TIn>,
        rb_tree_tag, tree_order_statistics_node_update>;

int main() {
	
    string word;
    map<int,int> mymap;
    indexed_set<pair<int,int>> maps;
    
    while(cin >> word) 
	{
		int pos = 0 , num = 0 ;
		
        if(word == "#")
		{    
            pos = maps.size() / 2;
            
            pair<int,int> cookie = *maps.find_by_order(pos);
            
            cout << cookie.first << endl << " \n";
            
            maps.erase(cookie);
        }
        
        else
		{
            num = stoi(word);
            
            maps.insert({num,mymap[num]});
            
            mymap[num]++;
        }
    }
    return 0;
}