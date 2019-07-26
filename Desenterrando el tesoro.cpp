#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n,k,q;
	cin>>n>>k;
	for(int i = 0; i<n*n;i++){
		cin>>q;
		if(q==0){
			k++;
		}
	}	
	cout<<k-1<<endl;
	return 0;
}
