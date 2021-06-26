#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k, sum=0, p=0,s=0;
	cin>>n>>m;
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(i!=m){
			sum+=a[i];
		}
	}
	cin>>k;
	p = sum/2;
	s= abs(k-p);
	if(s==0){
		cout<<"Bon Appetit"<<endl;
	}else{
		cout<<s<<endl;
	}
	return 0;
}
