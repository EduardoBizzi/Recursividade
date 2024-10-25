#include <iostream>
using namespace std;

int digitos (int n, int d){
    if(n == 0){
        return d;
    }
    d++;
    return digitos(n/10,d);
}

int main(){
    int n, d = 0;
    cin >> n;
    cout << "Quantidade de digitos: " << digitos(n,d) << endl;
}