#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, count=0;
	cin>>n;
	int a[n];
	int max= 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if (max < a[i]){
			max = a[i];
		}
          
	}
	
	for(int i=0;i<n;i++){
		
		if( a[i] == max ){
			max=a[i];
			count++;
	}
		
	}
	cout<<count;
	return 0;
}
