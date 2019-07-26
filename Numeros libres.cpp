#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
   
   int n;
   cin>>n;
   while(n--){
   	 ll x,y;
   	 cin>>x>>y;
   	 if(__gcd(x,y)==1)
   	  cout<<"SI\n";
   	  else 
   	  cout<<"NO\n";
   }
   
   
    return 0;
}
