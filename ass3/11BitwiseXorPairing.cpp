#include <iostream>
#include <vector>
using namespace std;

int BitwiseXor(vector<int>& num1 , vector<int> &num2 ){
    int ans = 0 ;

    if(num2.size() % 2 == 1 ){
        for(int x : num1 ){
            ans ^= x ;
        }
    }
    if(num1.size() % 2 == 1 ){
        for(int x : num2 ){
            ans ^= x ;
        }
    }
    return ans ;
}

int main(){
    vector<int> num1 ={2 , 1 , 3 } ;
    vector<int> num2 ={10 , 2 , 5 , 0 } ;

    cout << BitwiseXor(num1 , num2) ;

    return 0 ;
}