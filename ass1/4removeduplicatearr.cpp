#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;


int removeDuplicate(vector<int>& nums) {
    if (nums.size() == 0)
        return 0;

    int j = 1;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i - 1]) {
            nums[j] = nums[i];
            j++;
        }
    }

    return j;
}

int main(){
    int n ; 
    cin >> n ;

    vector <int> nums(n) ;

    for(int i = 0 ; i < n ; i++){
        cin >> nums[i] ;
    }

    sort(nums.begin() , nums.end() ) ;

    int k = removeDuplicate(nums) ;

    cout << k << endl ;

    for(int i = 0 ; i < k ; i++){
        cout << nums[i] << " " ; 

    }
    return 0 ;
}