#include <iostream>
#include <vector>
using namespace std ;

bool Jump(vector<int> &num ) {
    int maxreach = 0;

    for(int i= 0 ; i < num.size() ; i++ ){
        if(i > maxreach ){
            return false ;
        }

        maxreach = max(maxreach , i+num[i] ) ;

    }
    return true ;

}
int main (){
    vector <int> num = {2,3,1,1,4} ;

    cout << (Jump(num)  ? "true" : "false" ) ;

    return 0 ;
}