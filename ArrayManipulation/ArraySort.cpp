
// Array Sort in Ascending Order
// Array Sort in Descending Order - Line 28, Change the condition from > to <

#include <iostream>

void sort(int arr[], int arrSize);

int main() {

    int arr[] = {10, 9, 8, 7, 6, 5, 123, 444, 420, -212};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arrSize);

    std::cout<< "---------Array--------- \n";
    for(auto i: arr) 
        std::cout<< i << '\n';

    return 0;
}

void sort(int arr[], int arrSize){
    int temp;

    for(int i=0; i < arrSize - 1; i++ ){
        for(int j=0; j < arrSize - i - 1; j++) {
            if (arr[j] > arr[j+1]) {             
                temp = arr[j];  
                arr[j] = arr[j+1]; 
                arr[j+1] = temp; 
            }
        }
    }

}