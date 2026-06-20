#include <iostream>
#include <algorithm>
#include <vector>

using namespace std ;

string GCD(string s1 , string s2 ){
    if(s1 + s2 != s2 + s1){
        return "" ;
    }

    int len = __gcd(s1.length() , s2.length() )  ;
    
    return s1.substr(0 , len ) ;

}
int main(){
    string s1 , s2 ;
    cin >> s1 >> s2 ;

    cout << GCD(s1 , s2) ;

    return 0 ;
}