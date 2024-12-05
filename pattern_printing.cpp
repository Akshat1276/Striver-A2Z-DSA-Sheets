#include <iostream>
#include <string>
using namespace std;

void strAdd(int a, string b){
    for(int p=0; p<a; p++){
        cout << b;
    }
}

void nStarTriangle(int n) {
    for(int i=0; i < n; i++){
        strAdd(n-i-1, " ");
        int j=((2*i)+1);
        strAdd(j, "*");
        cout << endl;
    }
}

int main(){
    nStarTriangle(5);
    return 0;
}
