#include <bits/stdc++.h>
using namespace std;
struct amigo{
	string nombre;
	int edad;
	string accion;
};
bool compare(amigo x, amigo y){
	if(x.edad==y.edad){
		return x.nombre>y.nombre;
	}else{
		return x.edad>y.edad;
	}
}
int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;cin>>n;
	amigo a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].nombre>>a[i].edad>>a[i].accion;
	}
	
	sort(a,a+n,compare);
	
	for(int i=0;i<n;i++){
		cout<<a[i].nombre<<" "<<a[i].edad<<" "<<a[i].accion<<"\n";
	}
	
	return 0;
}
