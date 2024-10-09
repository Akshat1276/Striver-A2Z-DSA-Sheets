
// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

string strAdd(int a, string b){
    string c = "";
    for(int p=1; p<=a; p++){
        c += b;
    }
    return c;
}

void nStarTriangle(int n) {
    for(int i=1; i<n; i++){
        cout << strAdd(i, "*") << endl;
    }
    cout << strAdd(n, "*") << endl;
    for(int j=1; j<n; j++){
        cout << strAdd(n-j, "*") << endl;
    }
}

int main() {
    nStarTriangle(3);
    return 0;
}
