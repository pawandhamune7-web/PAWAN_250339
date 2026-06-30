#include <iostream> 
#include <vector>
using namespace std ;

int findfirst(vector<int> &arr , int x  ) {
    int n = arr.size() ;

    int left = 0 ; 
    int right = n - 1 ;

    int first  = -1 ;

    while(left <= right ){
        int mid = (right+left) / 2 ;

        if(x == arr[mid] ){
           first = mid ;
           right = mid - 1 ;
        }

        else if(x < arr[mid]){
            right = mid - 1 ;
        }

        else{
            left = mid + 1 ;
        }
        
    }
    return first ;

}

int findlast(vector<int> &arr , int x){
    int n = arr.size() ;

    int left = 0 , right = n - 1 ;

    int last = -1 ;

    while(left <= right){
        int mid = (right + left) / 2 ;
        if(x == arr[mid]){
            last = mid ;
            left = mid + 1 ;
        }
        else if(x < arr[mid]){
            right = mid - 1 ;
        }
        else{
            left = mid + 1 ;
        }
    }
    return last ;
}

vector<int> result (vector<int> &arr , int x){
    int first = findfirst(arr , x) ;
    int last = findlast(arr , x ) ;

    vector<int> ans = {first , last };

    return ans ;
}
int main(){
    vector<int> arr = {5,7,7,8,8,10} ;
    int x = 0 ;

    vector<int> ans = result(arr, x);

    for(int v : ans) {
        cout << v << " ";
    }
    return 0;
}
