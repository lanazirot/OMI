#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    
    int a,b,c=0,n;
    cin>>a;
    for(int i=0;i<a;i++){
    	cin>>n;
    	int v[n];
    	for(int j=0;j<n;j++)cin>>v[j];
    	c=0;
    	for(int x=0;x<n;x++){
    		for(int y=x+1;y<n;y++){
    			if(v[x]>v[y])c++;
				swap(v[x],v[y]);	
			}
    		
    		
		}cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;
	}
	
	
	return 0;
}
