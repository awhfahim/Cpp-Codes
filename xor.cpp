#include <bits/stdc++.h>
using namespace std;

int arr[7] = {1002,2,2,3,3,4,4};

int singleNumber(){
    int missing_number = 0;
    for(auto num : arr){
        missing_number ^= num;
        //printf("%d \n", missing_number);
    }
    return missing_number;
}
int main() {

    printf("%d", singleNumber());
    return 0;
}
