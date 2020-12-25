#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >> s;
	int start=0, end=(int)s.size()-1;
	string tmp="";
	//there are two conditions:
	//if the size of 's' is even, start adding characters from the end then start
	//if the size of 's' is odd, start adding characters from the start then end
	int a=1;
	if((int)s.size()%2==0)
		a=0;
	for(int i=0; i<(int)s.size(); ++i) {
		if(i%2==a)
			tmp+=s[end--];
		else
			tmp+=s[start++];
	}
	//be sure to reverse the 'tmp' variable to make it in correct order
	reverse(tmp.begin(), tmp.end());
	cout << tmp << "\n";
}
