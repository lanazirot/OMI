#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m,n; cin>>m>>n;
    char v[m][n];
    for(int i = 0 ; i<m; i++){
        for(int j = 0 ;j<n; j++){
            cin>>v[i][j];
        }
    }
     for(int i = 0 ; i<m; i++){
        for(int j = 0 ;j<n; j++){
            if(v[i][j]=='*'){
                cout<<i+1<<" "<<j+1<<endl;
            }
        }
    }
    return 0;
}
