#include<iostream>
using namespace std;


void comp(int a1[3],int b1[3]){
	int sum1 =0, sum2=0;
	for(int i=0; i<3; i++){
		if(a1[i]>b1[i]){
			sum1+=1;
		}else if(a1[i]<b1[i]){
			sum2+=1;
		}else{
		sum1+=0;
		sum2+=0;	
		}
	}
	
	cout<<sum1<<" "<<sum2;
}

int main(){
	int a[3], b[3];
	
	for(int i=0;i<3;i++){
			cin>>a[i];
	}
	for(int j=0;j<3;j++){
			cin>>b[j];
	}
	comp(a,b);
	
}
