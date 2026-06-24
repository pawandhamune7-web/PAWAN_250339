#include <iostream>
#include <vector>
#include <queue>
using namespace std ;

int findkthLargest(vector<int> &nums , int k ){
    priority_queue<int , vector<int> , greater<int>> minHeap ;

    for(int num : nums ){
        minHeap.push(num) ;
        
        if(minHeap.size() > k ){
            minHeap.pop() ;
        }
    }
    return minHeap.top() ;

}
int main(){
    vector<int> nums = {3,2,1,5,6,4,7,9} ;
    int k = 1 ;

    cout << findkthLargest(nums , k ) ;

    return 0 ;

}