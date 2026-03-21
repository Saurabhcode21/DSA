#include<iostream>
using namespace std;

void printarray(int arr[] , int n){

    // printing the array

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"printing done";
}





int main(){

    int arr[15] = {2,7};

    int n =15;
    // cout<<"printing the array"<<endl; 
    // for(int i=0; i<n; i++){

    //     cout<<arr[i]<<" ";
    // }

    printarray(arr , 15);






    return 0;
}