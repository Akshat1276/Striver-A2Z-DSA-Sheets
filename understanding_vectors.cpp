#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> dig = {};
    dig.push_back(2);
    dig.push_back(3);
    dig.push_back(4);
    for(int digits : dig){
        cout << digits << endl;
    }
    return 0;
}
