#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
vector<string> ans;

vector<string> keypad = {
        "",  //index = 0 
        "",  // index = 1 
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz"
     };

void solve(int index , string &digit , string &temp){
    if(index == digit.size()){
        ans.push_back(temp) ;
        return ;
    }

    string letter = keypad[digit[index] - '0' ] ;

    for(char ch : letter ){
        temp.push_back(ch) ;

        solve(index+1 , digit , temp) ;

        temp.pop_back() ;
    }
}

vector<string> lettercomb(string digit){
    if(digit.size()== 0 ){
        return {} ;
    }

    string temp = "" ;
    solve(0 , digit , temp ) ;

    return ans ;
}

int main(){
    string digit ;
    cin >> digit ; 
    
    vector<string> result = lettercomb(digit) ;
    for(string ch : result){
        cout << ch << " " ;
    }

    return 0 ;
}