#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std ;

vector<int> Relativesorted( vector<int> &arr1 , vector<int> arr2 ) {
    unordered_map<int , int > freq ;

    for(int num : arr1 ){
        freq[num]++ ;
    }

    vector <int> result ;

    for(int num : arr2 ){
        while(freq[num] > 0 ){
            result.push_back(num) ;
            freq[num]-- ;
        }
    }

    vector<int> remaining ;

    for(auto it : freq ){
        while(it.second > 0 ) {
            remaining.push_back(it.first) ;
            it.second -- ;
        }

    }

    sort(remaining.begin() , remaining.end() ) ;

    result.insert(result.end() , remaining.begin() , remaining.end() ) ;

    return result ;

}
int main(){
    vector<int> arr1 = {2,3,1,3,2,4,6,7,9,2,19 };
    vector<int> arr2 = {2,1,4,3,9,6 } ;

    vector<int>result ;

    result = Relativesorted(arr1 , arr2) ;

    for(int ans : result ){
        cout << ans << " "  ;
    }
    cout << endl ; 

    return 0 ;

}