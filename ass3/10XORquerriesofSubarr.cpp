#include <iostream>
#include <vector> 

using namespace std ;
vector<int> XORqueries(vector<int> &arr , vector <vector <int>> &queries){
    vector <int> ans ;

    for(auto q : queries ){
        int left = q[0] ;
        int right = q[1] ;

        int xoor = 0 ;

        for(int i = left ; i <= right ; i++) {
            xoor ^= arr[i] ;
        }
        ans.push_back(xoor) ;
    }
    return ans ;
}

int main(){
    vector<int> arr ={1,3,4,8} ;

    vector<vector<int>> queries ={
        {0,1} , {1,2} , {0,3} , {3,3} 
    } ;

    vector <int> result = XORqueries(arr , queries) ;

    for(int ans : result ){
        cout << ans << " " ;
    }
    return 0 ;

}