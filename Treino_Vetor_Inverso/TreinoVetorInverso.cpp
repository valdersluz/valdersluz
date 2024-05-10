#include <iostream>

using namespace std;

int main(){
    int vetor[10];

    cout << "digite dez valores" << endl;

    for(int i=0; i<10; i++){
    cin >> vetor[i];
    }

    for(int i=9; i>=0; i--){
        cout << vetor[i] << " ";
    }

    cout<<"Novo vetor"<<endl;

    for(int i=0; i<10; i++){
        cout << vetor[i] << " ";
    }

    getchar();
    return 0;

}
