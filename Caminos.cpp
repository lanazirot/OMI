#include <iostream>
#define opt ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;
ll let(string s , int i){
	if(i<0)return 0;
		
		if(((int)s[i]>=65&&(int)s[i]<=90)||((int)s[i]>=97&&(int)s[i]<=122))
			return 1+let(s,i-1);
		
		return let(s,i-1);
}

ll num(string s,int i){
	if(i<0)return 0;
	
		if((int)s[i]>=48&&(int)s[i]<=57)return 1+num(s,i-1);
		
	return num(s,i-1);
}

int main(void){
opt
	
	string s;getline(cin,s);
	cout<<let(s,s.size()-1)<<" "<<num(s,s.size()-1);
	


	return 0;
}
