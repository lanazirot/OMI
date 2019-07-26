#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,k; cin>>n;
    int v[n];
    for(int i=0;i<n;++i){
        cin>>v[i];

    }
    cin>>k;
    int prim = k+3;
    int seg = k-3;
    for(int i=0;i<n;i++){
      for(int j=k;j<=prim;j++){
            if(v[i]==j){
                cout<<v[i]<<" ";
            }
      }

      for(int l=k-1;l>=seg; l--){
        if(v[i]==l){
            cout<<v[i]<<" ";
        }
      }
    }
    return 0;
}
