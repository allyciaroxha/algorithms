#include <iostream>

using namespace std;
 int main(){
    int linhas, a, b, c;
    cin >> linhas;
    for(int i; i<linhas; i++){
        cin >> a >> b >> c;
        if(a<b && b<c){
            cout << "STAIR" << endl;
        } else if(a<b && b>c){
            cout << "PEAK" << endl;
        } else{
            cout << "NONE" << endl;
        }
    }
 }