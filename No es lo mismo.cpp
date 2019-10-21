#include <bits/stdc++.h>
using namespace std;
int main (){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int pos;
	int posf;
	string frase; getline(cin,frase);
	for(int i=1;i<=frase.size();i++){
		if(frase[i]=='l' && frase[i+1]=='o' && frase[i+2]==' ' && frase[i+3]=='q'){
			pos = i;
			posf = pos+7;
			
		}
	}
	for(int i=posf;i<frase.size();i++){
		cout<<frase[i];
	}
	cout<<" lo que ";
	for(int i=0;i<pos;i++){
		cout<<frase[i];
	}
	return 0;
}
