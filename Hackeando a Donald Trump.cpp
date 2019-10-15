#include <bits/stdc++.h>
using namespace std;
char palabramedia(string word){
char aux;
int medio = word.size()/2;
aux = word[medio];
return aux;
}
int main(void){

    int n; cin>>n;
    string v[n];
    bool t = false;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    string nuevovector[n];
    for(int i=0;i<n;i++){
      reverse(v[i].begin(), v[i].end());
      nuevovector[i] = v[i];
    }
    for(int i=0;i<n;i++){
      reverse(v[i].begin(), v[i].end());
    }

 //   for(int i=0;i<n;i++){
   //     cout<<v[i]<<endl;
    // }
   // cout<<endl;
    //for(int i=0;i<n;i++){
      //cout<<nuevovector[i]<<endl;
    //}
int cont = 0;
int l;
char m;
for(int i=0;i<n;i++){
    for(int j=n;j>=0; j--){
        if(v[i]==nuevovector[j]){
            l = v[i].size();
            m = palabramedia(v[i]);
        }
    }
}

cout<<l<<" "<<m;


    return 0;
}
