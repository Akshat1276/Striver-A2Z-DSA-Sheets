#include <iostream>
#include <vector>

using namespace std;

//USING RECURSION
//T(N)=O(N)
int maxArr1(vector<int>& arr){
    int max_num = arr[0];
    int n = arr.size(); 
    for(int i = 1; i < n; i++){
        if(arr[i] > max_num){
            max_num = arr[i];
        }
    }
    return max_num;
}

//USING BRUTE FORCE
//T(N)=O(Nlog(N))
int maxArr2(vector<int>& arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size()-1];
}

int main(){
    vector<int> arr = {};
    int n;
    cin >> n;
    while(n--){
        int b;
        cin >> b;
        arr.push_back(b);
    }
    int max = maxArr1(arr);
    cout << max;
}