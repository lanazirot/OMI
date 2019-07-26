#include <iostream>
using namespace std;
int mcd(int x, int y){
	if(y==0)return x;
	return mcd(y,x%y);
}
int main(){
	
	
	
	int x,y;
	cin>>x>>y;
	cout<<mcd(x,y);
	
	return 0;
}
