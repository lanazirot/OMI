#include <bits/stdc++.h>
using namespace std;
int fun(int x,int y){
	if(x==y)return 0;
	if(x%2==0){
		return 1+fun(x/2,y);
	}else{
		return 1+fun(x+9,y);
	}
}
int main(void){
	
	ios_base::sync_with_stdio(0);cin.tie(0);
	
	int x,y;
	cin>>x>>y;
	
	cout<<fun(x,y);
	
	
	
	return 0;
}
