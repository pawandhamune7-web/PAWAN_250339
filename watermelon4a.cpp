#include <iostream>
#include <string.h>
#include <cctype>
#include <algorithm>
using namespace std ;

int main(){
    string s ;
    cin >> s ;

    sort(s.begin() , s.end()) ;

    for( int i = 0 ; i < s.length()  ; i++ ){
        if(s[i] != '+')
        cout << s[i] ;

        if(s[i] != '+' && i < s.length()-1 )
        cout << "+" ;
    }

    return 0 ;
}
    