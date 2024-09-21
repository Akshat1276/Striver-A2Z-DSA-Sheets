#include <iostream>
using namespace std;

void strAdd(int a, string b){
    for(int p=0; p<a; p++){
        cout << b;
    }
}

void nStarTriangle(int n) {
    for(int i=0; i<n; i++){
        strAdd(i, " ");
        int j = 2*(n-i-1)+1;
        strAdd(j, "*");
        cout << endl;
    }
}

int main(){
  nStarTriangle(3);
  return 0;
}
