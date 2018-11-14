#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
	long long int t;
	string s1, s2,ans;
	cin>>t;
	while(t--){
		cin>>s1;
		cin>>s2;
		ans = "no";
		if(s1.length()==3 && s2.length()==3){
		if(s1[0]=='o' ||s1[0]=='b' ||s2[0]=='o' ||s2[0]=='b'){
			if (s1[0]=='o' ||s2[0]=='o'){
				if(s1[1]=='b' ||s2[1]=='b'){
					if(s1[2]=='b' ||s1[2]=='b')
						ans = "yes";
				}
				if(s1[0]=='b' ||s2[0]=='b'){
					if(s1[1]=='o' ||s2[1]=='o'){
						if(s1[2]=='b' ||s2[2]=='b')
							ans = "yes";
					}
					 if(s1[1]=='b' ||s2[1]=='b'){
						if(s1[2]=='o' ||s2[2]=='o')
							ans = "yes";
					}
				}
			}

			
		    else if(s1[0]=='b' ||s2[0]=='b'){
				if(s1[1]=='o' ||s2[1]=='o'){
					if(s1[2]=='b' ||s2[2]=='b')
						ans = "yes";
				}
				else if(s1[1]=='b' ||s2[1]=='b'){
					if(s1[2]=='o' ||s2[2]=='o')
						ans = "yes";
				}
			}
		}
		else ans = "no";
	}
		cout<<ans<<endl;


	}
	return 0;
}