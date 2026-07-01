#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int rotatedsorted (vector<int> &num , int target){
    int n = num.size() ;
    int low = 0 , high = n - 1 ;

    while (low <= high) {
        int mid = low + (high - low) / 2 ;

        if (num[mid] == target) {
            return mid ;
        }

        if (num[low] <= num[mid]) {
            if (num[low] <= target && target < num[mid]) {
                high = mid - 1 ;
            } else {
                low = mid + 1 ;
            }
        } else {
            if (num[mid] < target && target <= num[high]) {
                low = mid + 1 ;
            } else {
                high = mid - 1 ;
            }
        }
    }

    return -1 ;
}

int main(){
    vector<int> arr = {5,6,7,8,9,10,1,2,3,4} ;
    int target = 1 ;

    cout << rotatedsorted(arr , target ) ;

    return 0 ;
}
