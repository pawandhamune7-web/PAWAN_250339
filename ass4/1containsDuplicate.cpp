#include <iostream>
#include <vector>
#include <unordered_set>
#include <set>
using namespace std ;
using namespace std;

bool ContainDuplicate(vector<int>& num){
    unordered_set<int> s ;
    for(int x : num){
        if(s.count(x) ) return true ;
        s.insert(x) ;
    }
    return false ;

}

int main(){
    int n ; 
    cin >> n ;

    vector<int> num(n) ;

    for(int i = 0 ; i < n ; i++){
        cin >> num[i] ;
    }
    
    cout << (ContainDuplicate(num)? "true" : "false") << endl ;

    return 0 ;
}