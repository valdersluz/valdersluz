#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, P, aux; //N capacidade e P ocupados

    cin>>N>>P;
    int X[N+1];
    for(int pos=0;pos<=N;++pos){
        X[pos]=-1;
    }

    for(int posi=0;posi<P;++posi){
        cin>>aux;
        X[aux] = aux;
    }

    for(int i=1;i<=N;i++){
        if(X[i]==-1){
            cout<<i<<" ";
        }
    }

    return 0;
}

//N capacidade da sala
//P assentos ocupados
//X quais são os assentos ocupados (tem que ser menor que N)

//saída é assentos vazios
