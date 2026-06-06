#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

vector <int> squareofarr(vector <int> &nums){
    vector <int> ans ;
    
    for(int x : nums){
        ans.push_back(x * x) ;
    }

    sort(ans.begin() , ans.end() ) ;


    return ans ;
}

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);

    for ( int i = 0 ; i < n ; i++ ) {
        cin >> nums[i] ;
    }
    
    vector<int> result = squareofarr(nums) ;
    for (int x : result) cout << x << " ";
    cout << '\n';
    
    return 0 ;
}