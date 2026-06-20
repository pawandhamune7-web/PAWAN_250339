#include <iostream>
#include <vector>
using namespace std ;

int SingleNo(vector<int> &num ){
    int ans = 0 ;
    for(int nums : num ){
        ans ^= nums ;
    }
    return ans ;

}

int main(){
    int n ;
    cin >> n ;
    vector <int> num(n) ;

    for(int i = 0 ; i < n ; i++ ){
        cin >> num[i] ;
    }

    cout << SingleNo(num) ;
    
    return 0 ;
}