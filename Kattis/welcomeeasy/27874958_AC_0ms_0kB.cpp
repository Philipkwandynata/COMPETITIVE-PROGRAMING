#include<bits/stdc++.h>

using namespace std; 

int main(){
	
	int tot = 0 ;
	cin >> tot ; getchar();
	
	for( int i = 0 ; i < tot ; i++ )
	{
		string phrase = "welcome to code jam"; // 
		string text; getline(cin, text); // T
		vector<int> ob(text.size(), 1);
		int ans = 0;
		for (int p = 0; p < phrase.size(); ++p) {
		    ans = 0;
		    for (int i = 0; i < text.size(); ++i) {
		        if (text[i] == phrase[p]) ans = (ans + ob[i]) % 10000; 
		        ob[i] = ans;
		    }
		}
		cout << "Case #"<< i+1 << ": " << setfill('0') << setw(4) << ans << endl;
	}
	

	return 0 ; 
}