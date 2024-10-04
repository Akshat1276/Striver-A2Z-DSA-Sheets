#include <iostream>
using namespace std;

void strAdd(int a, string b){
    for(int p=0; p<a; p++){
        cout << b;
    }
}

void nStarDiamond(int n) {
    for(int i=0; i < n; i++){
        strAdd(n-i-1, " ");
        int j=((2*i)+1);
        strAdd(j, "*");
        cout << endl;
    }
    for(int i=0; i<n; i++){
        strAdd(i, " ");
        int j = 2*(n-i-1)+1;
        strAdd(j, "*");
        cout << endl;
    }
}

int main(){
  nStarDiamond(3);
  return 0;  
}


