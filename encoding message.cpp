#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
	int t,n;
	string s;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>s;
		int l=s.length;
		int m = l;
		if(l%2!=0){m=l-1;}
		for(int i=0; i<m; i=+2){
			int y = s[i];
			s[i] = s[i+1];
			s[i+1] = y;

		}
		cout<<s;

	}
	return 0;
}