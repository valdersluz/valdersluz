#include <iostream>

using namespace std;

int main(){
    int tam, i, j;

    cin >>tam;

    for(i = 1;i<=tam;i++){
        for(j = tam-i;j>=1;j--)
        cout<<">";
        for(j=1;j<=i;j++)
        cout<<"#";
        cout<<"\n";
    }

    return 0;
}
