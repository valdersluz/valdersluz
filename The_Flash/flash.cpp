#include <iostream>

using namespace std;

int main(){
    int N, M;

    cin>>N>>M;
    int visto[N];
    int mem[M];
    int ct=1;

    for(int i=1;i<=N;i++){
        cin>>visto[i];
        if(visto[i]>=20 && visto[i]<=120 && visto[i]!=0){
            mem[ct] = visto[i];
            ct++;
        }
    }
        for(int j=1;j<=M;j++){
            cout<<mem[j]<<" ";
        }
    return 0;
}
