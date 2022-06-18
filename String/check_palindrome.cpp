#include<iostream>
#include<string>
using namespace std;

string revS(string S){
    int i=0;
    int j=S.length()-1;

    while(i<j){
        swap(S[i], S[j]);
        i++;
        j--;
        
    }
    return S;

}


int main(){
    string S;
    cin>>S;
    cout<<"string is: "<<S<<endl;
    cout<<endl;

    cout<<"rev string is: ";
    // cout<<revS(S)<<endl;

    string str2="";
    str2= revS(S);
    cout<<str2;

    cout<<endl;
    cout<<endl;

    if(S==str2){
        cout<<"palindrome";
    }
    else
    cout<<"not palindrome";


    return 0;
}
