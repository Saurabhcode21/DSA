#include<iostream>

using namespace std;

/* void sumarray(int arr[], int n){
    int start =0;
    int end = n-1;
    int target= 9;

    while((start + end)== target){
        cout<<arr[start], arr[end];
    }
    end--;
}

void printarray(int arr[] , int n){
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[4] = {2,7,11,15};
    sumarray(arr , 4);
    printarray(arr,4);
    return 0;
} */


void SumArray(int arr [], int n){
    int start = 0;
    int end = n-1;
    int target = 9;

    while( start < end){

        int sum = arr[start] + arr[end];

        if(sum == target){
            cout<< "pair found: " <<start <<" " <<end<<endl;
            return;
        }
        else if(sum < target){
            start++;
        }
        else{
            end --;
        }
    }
    cout<< "no pair found" <<endl;
}

void PrintArray(int arr[], int n){
    for(int i= 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[4] = {2,7,11,15};
    SumArray(arr , 4);

    PrintArray(arr , 4);

    return 0;
}