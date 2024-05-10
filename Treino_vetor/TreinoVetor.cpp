#include <iostream>

using namespace std;
//posso usar o sizeof(vetor)/4 pra vetor tipo int
int main(){
    int vetor[10];

    cout << "digite dez valores" << endl;

    for(int i=0; i<10; i++){
    cin >> vetor[i];

    }

    for(int i=0; i<10; i++){
        cout << vetor[i] << " ";
    }

    getchar();
    return 0;
}
