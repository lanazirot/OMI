#include <iostream>
using namespace std;
int digits(int n){
	if(n==0)return 0;
		return 1+digits(n/10);
}
int main(void){
	

	int n,unos=0,ceros=0;cin>>n;
	int d=digits(n);
	int v[d];
	bool b=false;
	for(int i=0;i<=d;i++){
		v[i]=n%10;
		n/=10;
	}
	
	for(int i=d-1;i>=0;i--){
		if(v[i]==1 || v[i]==0){
			if(v[i]==1)unos++;
			if(v[i]==0)ceros++;
			b=true;
		}else{
			b=false;break;
		}
	}
	

	if((b&&ceros!=d )&&(b&&unos!=d)){
		cout<<"parece binario";
	}else cout<<"no parece binario";
	
	return 0;
}
