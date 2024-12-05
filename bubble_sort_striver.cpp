#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<int> arr = {};
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int b;
        cin >> b;
        arr.push_back(b);
    }
    for(int p=n-1; p>=0; p--){
        for(int q=0; q<=p-1; q++){
            if(arr[q]>arr[q+1]){
                swap(arr[q],arr[q+1]);
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
