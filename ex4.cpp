#include <iostream>
using namespace std;

int tribonacci (int n){
    if(n == 0 || n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    return tribonacci (n-1) + tribonacci (n-2) + tribonacci (n-3);
}

int main(){
    int n;
    cin >> n;
    cout << "O numero  " << n << "da sequencia de Tribonacci e: " << tribonacci(n) << endl;
}