#include <bits/stdc++.h>
using namespace std;

int main(){
	 long int  sum=0,min=0,max=0;
	 long int arry[5];
	
	for(long int i=0;i<5;i++){
		cin>>arry[i];	
	}
	for(long int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(j!=i){
				sum+=arry[j];
			}	
		}
		if(max<sum){
			max=sum;
		}
		if(i==0){
			min=sum;
		}
		else{
			if(min>sum){
				min=sum;
			}
		}
		sum =0;	
				
	}
	
		cout <<min<<" "<<max;
}
