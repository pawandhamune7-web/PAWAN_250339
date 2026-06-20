#include <iostream>
#include <vector>

using namespace std ;

int missingnumber(vector<int> &num ){
    int ans = 0 ;
    int n = num.size() ;

    for(int i = 0 ; i <= n ; i++ ){
        ans ^= i ;
    }
    for(int nums : num){
        ans ^= nums ;
    }
    return ans ;
}

int main(){
    int n ;
    cin >> n ;

    vector<int> num(n) ;

    for(int  i= 0 ; i < n ; i++){
        cin >> num[i] ;
    }

    cout << missingnumber(num) ;

    return  0 ;

}