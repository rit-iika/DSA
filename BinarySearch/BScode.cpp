#include<iostream>
using namespace std;

int BinaryS(int arr[], int target){
    int s=0;
    int e=20;
    int mid=s+ (e-s)/2;

    while(s<=e){
        if(target==arr[mid]){ return mid;}
        else if(target>arr[mid]){s=mid+1;}
        else if(target<arr[mid]){e=mid-1;}
        mid=s+(e-s)/2;
    }
    return -1;

}
int main(){

    int arr[20]={1,2,4,5,8,9,11,34,55,67,77,89};
    // strictly monotonic function, inc or decr
    int target= 77;
    cout<<BinaryS(arr,target);

    return 0;
}
