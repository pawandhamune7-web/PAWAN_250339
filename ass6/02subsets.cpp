#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

vector<vector<int>> subsets(vector<int> &num  ){
    int n = num.size() ;
    vector<vector<int>> ans ;
    int total = 1 << n ;

    for(int  i = 0  ; i < total ; i++  ){ //mask 
        vector <int> subset ;

        for(int  j = 0 ; j  < n ;  j++){
            
            if((i & (1 << j)) != 0){
                subset.push_back(num[j]) ;
            }
        }
        ans.push_back(subset) ;

    }
    return ans ;
}

int main(){
    int n ; 
    cin >> n ;
    vector<int> arr(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }
    vector<vector<int>> res = subsets(arr) ;

    for(int i = 0 ; i < res.size() ; i++){
        cout << "[" ;

        for(int j = 0 ; j < res[i].size() ; j++){ //res[i].size() 
            cout << res[i][j] << " " ;
        }
        cout << "]" ;

    }
    return 0 ;
}