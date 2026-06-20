#include <iostream>
#include <string>

using namespace std ;

char finddifference(string s , string t){
    char ans = 0 ;

    for(char ch : s ){
        ans ^= ch ;
    }

    for(char ch : t){
        ans ^=  ch ;
    }
    return ans ;
}

int main (){
    string s , t ;
    cin >> s >> t ;

    cout << finddifference(s , t ) ;

    return 0 ;
}