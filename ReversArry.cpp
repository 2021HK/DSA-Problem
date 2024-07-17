#include <iostream>
using namespace std;

void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printarry(int arr[],int n){
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

int main() {
    int arr[6]= {1,5,7,4,8,9};
    int brr[5]= {0,2,5,8,7};
      
      reverse (arr, 6);
      reverse (brr, 5);

      printarry(arr,6);
      printarry(brr,5);

      return 0;

}