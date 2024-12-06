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
    for (int x = 0; x <= n - 1; x++) {
        int y = x;
        while (y > 0 && arr[y - 1] > arr[y]) {
            swap(arr[y - 1], arr[y]);
            y--;
        }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
