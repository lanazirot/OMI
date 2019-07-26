#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    char v[n];
    int mx = 0;
    string valida[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]=='N'){
            if(mx<4){
                valida[i] = "espera";
            }else{
               valida[i]="no espera";
            }
        }else if(v[i]=='E'){
            mx++;
        }else{
            mx--;
        }

    }
    for(int i=0;i<n;i++){
        cout<<valida[i]<<"\n";
    }


    return 0;
}
