#include <iostream>
#include <vector>
using namespace std ;

int removeduplicate(vector<int> &num ){
    if(num.empty()){
        return 0 ;
    } 
    int k = 1 ;

    for(size_t i = 1 ; i < num.size() ; i++ ){
        if(num[i] != num[k-1] ){
            num[k] = num[i] ;
            k++ ;
        }
    }
    return k ;
}

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int k = removeduplicate(nums) ;
    cout << k << endl ;

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0 ;

}