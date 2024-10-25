#include <iostream>
using namespace std;

int somap (int n,int p){
    if(n % 2 == 0){
        p+=n;
    }
    if(n == 1){
        return p;
    }
    return somap(n-1,p);
}

int main(){
    int n, p = 0;
    cin >> n;
    cout << "Soma: " << somap(n,p) << endl;
}