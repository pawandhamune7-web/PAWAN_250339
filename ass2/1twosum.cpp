#include <iostream>
#include <vector>
using namespace std ;

vector<int> twosum(const vector<int>& num, int target){
    int left = 0;
    int right = num.size() - 1 ;

    while(left < right){
        int total = num[left] + num[right];

        if(total == target) return {left + 1, right + 1};

        else if(total < target) left++;

        else right--;
    }
    return {}; // not found
}

int main(){
    int n ; 
    int target;
    
    cin >> n  >> target ;


    vector<int> num(n) ;
    
    for(int i = 0 ; i < n ; i++ ){
        cin >> num[i] ;
    }

    vector<int> result = twosum(num, target);
    // optional: output result
    if(result.size() == 2){
         cout << result[0] << " " << result[1] << '\n';
    }
    return 0 ;
    
}