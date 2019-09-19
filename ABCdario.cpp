#include <iostream>
//LanaZirot
using namespace std;
typedef short int byte;
static string abecedario="abcdefghijklmnopqrstuvwxyz";	
string nuevaCadena(string cad){
    for(int x=0;x<cad.length();x++){
        for(int y=x+1;y<cad.length();y++){
            if(cad[x]==cad[y])
                cad[y]='#';
        }
    }
    string re;
    for(int x=0;x<cad.length();x++){
        if(cad[x]!='#')
            re+=cad[x];
    }

    return re;
}
string ordenarPalabra(string s){
	for(byte i=1;i<s.length();i++){
		for(byte j=0;j<s.length()-1;j++){
			if(s[j]>s[j+1]){
				char aux = s[j];
				s[j] = s[j+1];
				s[j+1] = aux;
			}
		}
	}
	return s;
}

//   a abca

bool esAbecedario(string s){	
	if(s.length()<abecedario.length())
		return false;
	
	for(byte i=0;i<abecedario.length();i++){
		if(s[i]!=abecedario[i])
			return false;
	}
	
	return true;
}
int main(void){	

	ios_base::sync_with_stdio(0);cin.tie(0);
	string *arr;
	byte n;
	cin>>n;
	arr = new string[n];
	for(byte i=0;i<n;i++)
		cin>>arr[i];	
	for(byte i=0;i<n;i++){
		if(esAbecedario(nuevaCadena(ordenarPalabra(arr[i]))))
			cout<<"PERFECT"<<endl;
		else
			cout<<"NO WAY"<<endl;
	}
	delete [] arr;	
	

	return 0;
}
