#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std ; 

vector <int> TopKfrequent(vector<int> &nums , int k ){
    unordered_map <int , int> freq ;

    for(int num : nums){
        freq[num]++ ;
    }

    vector<pair<int , int>> v ;

    for(auto p : freq){
        v.push_back({p.second, p.first});
    }

    sort(v.begin() , v.end() , greater<pair<int , int >>() ) ;

    vector<int> ans ;

    for(int i = 0 ; i < k ; i++ ){
        ans.push_back(v[i].second) ;
    }
    return ans ;
}

int main(){
    vector<int> nums = {1,2,1,2,1,2,3,1,3,2} ;
    int k = 2 ;

    vector<int> result = TopKfrequent(nums , k ) ;

    for(int x : result){
        cout << x << " " ;
    }
    return 0 ;
}