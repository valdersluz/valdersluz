#include <iostream>

using namespace std;

int main(){
    int T, P;

    cin >> T;
    while (cin>>P && P !=0){
        if(P>T){
            cout<<"ALARME";
            return 0;
        }
    }
    cout<<"O Havai pode dormir tranquilo";
    return 0;
}
