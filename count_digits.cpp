#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int b = 0;
    while(a > 0){
        a = a / 10;
        b++;
    }
    cout << "NUMBER OF DIGITS IS " << b;
    return 0;
}
