#include <iostream>
using namespace std;

long collatz(int n){
	
	if(n==1)return 1;
	
	if(n%2==0){
		return 1+collatz(n/2);	
	}else{
		return 1+collatz(3*n+1);
	}
}

int main(void){


	int n;scanf("%i",&n);
	printf("%lld",collatz(n));
	
	return 0;
}
