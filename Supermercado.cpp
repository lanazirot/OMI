#include <bits/stdc++.h>
#include <algorithm>
#define op(x) ios_base::sync_with_stdio(x); cin.tie(x);
using namespace std;
struct Producto{
	string nombre;
	double precio;
};

bool compare(Producto x, Producto y){
	
	if(x.precio==y.precio){
		return x.nombre<y.nombre;
	}
	
	else{
		return x.precio>y.precio;	
	}
	
}

int main(void){
	op(0);
	
	int n;cin>>n;
	double s=0;
	Producto p[n];
	
	for(int i=0;i<n;i++){
		cin>>p[i].nombre>>p[i].precio;
		s+=p[i].precio;
	}
	
	sort(p,p+n,compare);
	
	for(int i=0;i<n;i++){
		cout<<i+1<<" | "<<p[i].nombre<<" | "<<p[i].precio<<endl;
	}
	cout<<"\n"<<s;
	
	return 0;
}
