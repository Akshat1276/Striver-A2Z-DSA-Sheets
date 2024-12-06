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
    for(int p=0; p<n-1; p++){
        int min=p;
        for(int q=p+1; q<=n-1; q++){
            if(arr[q]<arr[min]){
                min=q;
            }
        }
        swap(arr[p],arr[min]);
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
