#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n){
    for(int i = 1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        for(j; j>=0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main(){
    int arr[] = {1,4,5,0,25,14,2,3};
    int n = 8;
    InsertionSort(arr, n);
    for(int k = 0; k<n; k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}