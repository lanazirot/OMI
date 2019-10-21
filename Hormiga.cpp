#include <iostream>
using namespace std;
int n,p,d,m;
int main(void){
	
	
	cin>>n>>p>>d>>m;
	
	while(m!=0){
		if(d==1){
			p++;
			if(p==n){
				d=-1;
			}
		}else{
			p--;
			if(p==0){
				d=1;
			}
		}
		m--;
	}
	
	
	cout<<p;
	return 0;
}
