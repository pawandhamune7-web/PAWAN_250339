#include <iostream>
#include <vector>

using namespace std ;

int binarysearch(vector<int> &arr , int x ){
    int l = 0 ;
    int h = arr.size()-1 ;

    while(l <= h){
        int m = l + (h - l)/2 ;

        if(arr[m] == x){
            return m ;
        }

        else if(arr[m] < x){
            l = m + 1 ;
        }
        else{
            h = m - 1 ;
        }
    } return -1 ;
}

int main(){
    int n  ;
    cin >> n ;

    vector<int> num(n) ;

    for(int i= 0 ; i < num.size() ; i++ ){
        cin >> num[i] ;
    }

    int x ;
    cin >> x ;

    int i = binarysearch(num , x) ;

    cout << i ;

    return 0 ;

    
}