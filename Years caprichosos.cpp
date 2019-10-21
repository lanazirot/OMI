#include <bits/stdc++.h>
using namespace std;
vector<int> digitos(short y){
	vector<int> d;
	while(y){
		d.push_back(y%10);
		y= y / 10;
	}
	return d;
}
bool esCaprichoso(short y){
	short size1,size2;
	vector<int> p = digitos(y);
		size1=p.size();
		sort(p.begin(),p.end());
			p.erase(unique(p.begin(),p.end()),p.end());
			size2=p.size();
	return size1==size2;
}

int main(void){
	short y;
	cin>>y;
	if(esCaprichoso(y)){
		y++;
	}
	while(!esCaprichoso(y)){
		y++;
	}
	cout<<y;	
	return 0;
}
