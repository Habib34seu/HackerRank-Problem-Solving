#include<bits/stdc++.h>
using namespace std;


int main(){
	
	char s[1000];
	cin>>s;
	int b = strlen(s);
	for(int i=0; i<b;i++){
		if(s[i]==s[i+1]){
			for(int j=i;j<b;j++){
				s[j]=s[j+2];
			}
			i=i-2;
			if(i<0)
			i=-1;
			b=strlen(s);
		}	
	}
	if(strlen(s)==0){
		cout<<"Empty String";
	}
	else{
	cout<<s;	
	}	
	
	return 0;
}
