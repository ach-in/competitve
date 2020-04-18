#include<bits/stdc++.h>
//hello
using namespace std;

int main(){
	string temp, s;
	cin>>s;
	int n = s.size(), count = 1;
	set< pair<string, int> > p;
	for(int i=0; i<n-4; i++){
		count = 1;
		temp = s.substr(i, i+4);
		if(p.find())
		p.insert(make_pair(temp, ++count));
	}
	return 0;
}