#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
	int min = 1, max = 1001, a, b, n, c=0, g=0, h=0;
	cin>>n;
	cin>>a>>b;
	for(int i=1; i<=n; i++){
		max = b-1;
			if(min==max && g==0){
				c++;
			}else if(min==max && g!=0){
				if(h<c) h=c;
				c=1;
				g=0;
			}
			if(min!=max && c>0){
				g++;
			}
		min = a+1;
		a = b;
		if(i == n-1) b = 1001;
		else if(i<n-1) cin>>b;

	}

if(h>c)cout<<h;
else
  cout<<c;

  }