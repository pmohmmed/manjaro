#include<iostream>
using namespace std;

// int [] sort(int arr[]);
int main(){


    int arr[] = {5,1, 7, 3, 6, 2};
    // int result[] = sort(arr);


    int n = sizeof(arr)/sizeof(int);
    for (int i=1; i < n;i++){

        for (int j= i; j>0;j--){
            if (arr[j] < arr[j-1]){
                arr[j] += arr[j-1];
                arr[j-1] = arr[j] - arr[j-1];
                arr[j] = arr[j] - arr[j-1];
            }
            else
                break;
        }
    }

    // int s = sizeof(arr) / sizeof(int);
    for(int i = 0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    

    return 0;
}


// int[] sort(int arr[]){

//     int s = sizeof(arr)/sizeof(int);
//     for (int i=1; i < n;i++){

//         for (int j= i; j>0;j++){
//             if (arr[i] < arr[i-1]){
//                 arr[i] += arr[i-1];
//                 arr[i-1] = arr[i] - arr[i-1];
//                 arr[i] = arr[i] - arr[i-1];
//             }
//             else
//                 break;
//         }
//     }
//     return arr;


// }
