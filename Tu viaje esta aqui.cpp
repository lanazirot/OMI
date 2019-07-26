#include <iostream>
using namespace std;
int main(void){
	
	
	
	string a,b;
	cin>>a>>b;
	int num=1,numj=1;
	for(int i=0;i<a.size();i++){
		num*= (int) (a[i]-65)+1;
	}
	for(int i=0;i<b.size();i++){
		numj*= (int) (b[i]-65)+1;
	}
	
	long md = num%47,md2=numj%47;
	if(md==md2){
		cout<<"GO";
	}else{
		cout<<"STAY";
	}

	
	
	
	
	return 0;
}
