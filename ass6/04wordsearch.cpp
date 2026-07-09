#include <iostream>
#include <vector>
#include <string>
using namespace std ;

bool ws(vector<vector<char>> &board , string &word , int i , int j , int index ){
    if(index == word.size()){
        return true ;
    }

    if(i < 0 || j < 0 || i >= board.size() ||  j >= board[0].size()){
        return false ;
    }

    if(board[i][j] != word[index]){
        return false ;
    }

    char temp = board[i][j] ;
    board[i][j] = '#' ;

    bool found =
         ws(board , word , i+1 , j , index+1 ) ||
         ws(board , word , i-1 , j , index+1 ) ||
         ws(board , word , i , j+1 ,index+1 ) ||
         ws(board , word , i , j-1 , index+1) ;
    
    board[i][j] = temp ;

    return found ;

}

bool exist(vector<vector<char>>& board,string word)
{
    int m=board.size();
    int n=board[0].size();

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ws(board,word,i,j,0))
                return true;
        }
    }

    return false;
}

int main(){
    int rows , cols ; 
    cin >> rows >> cols ;

    vector<vector<char>> board (rows , vector<char>(cols)) ;

    for(int  i = 0 ; i < rows ; i++){
        for(int  j = 0 ; j < cols ; j++){
            cin >> board[i][j] ;
        }
    }
    string word ;
    cin >> word ;

    if (exist(board, word))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0 ;

}