#include <iostream>
#include <vector>

using namespace std ;

char smallerletter(vector<char> &arr , char x ){
    /// l = left , h == right , m == mid 
    int l = 0 ;
    int h = arr.size()-1 ;

    while(l <= h){
        int m = l + (h - l)/2 ;


        if(arr[m] <= x){
            l = m + 1 ;
        }
        else{
            h = m - 1 ;
        }
    } 
    if(l == arr.size() ){
        return arr[0] ;
    }
    else{
        return arr[l] ;
    }

}
int main(){
    vector<char> arr = {'c' , 'f' , 'j'} ;
    char x = 'c' ;

    char ans = smallerletter(arr , x ) ;

    cout << ans ;

    return 0 ;

}