#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	double p=0.0,z=0.0,m=0.0;
	cin>>n;
	double a[n];
	
	double plus=0.0, minus=0.0, zero=0.0;
	
	for(int i=0; i<n;i++){
		cin>>a[i];
	}
	for(int i=0; i<n;i++){
		if(a[i]>0){
			p++;
		}
		else if(a[i]<0){
			m++;
		}else{
			z++;
		}
	}
	
	plus= p/n;
	minus = m/n;
	zero=z/n;
	
	cout<<setprecision(6)<<plus<<endl;
	cout<<setprecision(6)<<minus<<endl;
	cout<<setprecision(6)<<zero<<endl;
}
