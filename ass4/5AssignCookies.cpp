#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int Assigncookie(vector<int> &s , vector<int> &t) {
    sort(s.begin() , s.end() ) ;
    sort(t.begin() , t.end() ) ;

    int i =0 ;
    int  j = 0 ;
    int count = 0;

    while(i < s.size() && j < t.size()  ){
        if(t[j] >= s[i] ){
            count++ ;
            i++ ;
            j++ ;
        }
        else{
            j++ ;
        }
    }
    return count ;
}
int main(){
    vector<int> s = {1,2,3,4};
    vector<int> t = {1,2,3};
    
    cout << Assigncookie(s , t) ;

    return 0 ;
}