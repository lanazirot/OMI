#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll def(ll c,ll g){
	if(g>c)return 0;
	
	return 1+def(c,pow(g,2));
}
int main(void){
	
	ios_base::sync_with_stdio(0);cin.tie(0);
	
	ll x,y;
	cin>>x>>y;
	cout<<def(x,y);
	
	
	return 0;
}
