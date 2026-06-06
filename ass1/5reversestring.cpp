#include <iostream>
#include <vector>
#include<algorithm>
using namespace std ;

int main(){
    string s ;
    cin >> s ;

    vector <char> nums(s.begin() , s.end()) ;

    reverse(nums.begin() , nums.end() ) ;

    for(char c : nums) {
        cout << c ;
    }
    return 0 ;
}