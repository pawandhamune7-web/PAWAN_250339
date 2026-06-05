#include <iostream>
#include <vector>
using namespace std ;

 vector<int> runningSum(vector<int>& nums) {
        
        for(int i = 1 ; i < nums.size() ; i++ ){
            nums[i] += nums[i-1] ;
        }
        return nums ;
        
    }

int main(){
    int n ;
    cin >> n ;

    vector <int> nums(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> nums[i] ;
    }

    vector <int> Output = runningSum(nums) ;

    for(int c : Output ) {
        cout << c  << " " ;
    }

    return 0 ;
}    