#include <iostream>
#include <cmath>

using namespace std ;

bool IspowerofTwo(int n ){
    if(n <= 0 ) return false ;
    
    double x = log2(n) ;

    return floor(x) == x ;
}

int main(){
    int n ;
    cin >> n ;

    if(IspowerofTwo(n)){
        cout << "True" ;
    }
    else{
        cout << "False" ;
    }
    return 0 ;
}

