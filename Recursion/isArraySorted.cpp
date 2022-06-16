#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    if(size==0 || size==1){return true;}

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remPart= isSorted(arr+1,size-1);
        return remPart;
    }
    

}

int main(){
    int size;
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    cout<<" array input is: ";

      for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl<<endl;
    cout<<isSorted(arr,size);



    return 0;
}
