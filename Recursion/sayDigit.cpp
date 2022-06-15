#include<iostream>
using namespace std;

    void func(int n, string arr[]){

        if(n==0) return;

        int digit= n%10;
        n=n/10;
        // cout<<arr[digit]<<" ";

        func(n, arr);

        cout<<arr[digit]<<" ";
    }


int main(){
    string arr[10]={"zero","one", "two", "three","four","five","six","seven","eight","nine"};


int input;
cin>>input;
cout<<"you entered: "<<input<<endl;
        cout<<"in digits:: ";

func(input, arr);


    return 0;

}
