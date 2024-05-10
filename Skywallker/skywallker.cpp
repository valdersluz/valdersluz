#include <iostream>

using namespace std;

int main(){
    int A, B, C, D, E, inimigas;
    cin >> A >> B >> C >> D >> E;

    if((B+C+D+E)<=A){
    inimigas = A - (B+C+D+E);
    cout << inimigas;
    }
    return 0;
}
