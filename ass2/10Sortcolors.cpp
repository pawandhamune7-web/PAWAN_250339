#include <iostream>
#include <vector>

using namespace std ;

void Sortcolor(vector <int> &num ){
    int low = 0 ; 
    int  mid = 0 ;
    int right = num.size() - 1 ;

    while(mid <= right ){
        if(num[mid] == 0 ){
            swap(num[low] , num[mid] ) ;
            mid++ ;
            low++ ;
        }
        else if(num[mid] == 1){
            mid++ ;
        }
        else{
            swap(num[mid] , num[right] ) ;
            right-- ;
        }
    }
}

int main(){
    vector<int> num = { 2,0,2,1,1,0 } ;

    Sortcolor(num) ;

    for(int ans : num ) {
        cout << ans << " " ;
    }
    cout << endl ;
    return 0 ;

}