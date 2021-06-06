#include<iostream>
using namespace std;

int main(){
	int x1, v1, x2, v2;
	int jump=0;
	
	cin>>x1>>v1>>x2>>v2;

	if(v1>v2){
		jump = (x1-x2)%(v2-v1);
		
		if(jump==0){
		
			cout<<jump<<"YES";
		}else{
			cout<<"NO";
		}
	}else{
		cout<<"NO";
	}
	return 0;
}
