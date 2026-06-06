#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int main(){
    int n , m ;
    cin >> n >> m ;

    vector<int> num1(n) ;
    vector<int> num2(m) ;

    for(int i = 0; i < n; ++i){
        cin >> num1[i];
    }
    for(int j = 0; j < m; ++j){
        cin >> num2[j];
    }
    sort(num1.begin() , num1.end() ) ;
    sort(num2.begin() , num2.end() ) ;
    
    vector <int> result (n+m) ;

    merge(num1.begin() , num1.end() ,
          num2.begin() , num2.end() ,
        result.begin()  ) ;
    
        for(int x : result) {
            cout << x <<" " ;
        }

    return 0 ;
}