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

//better solution
