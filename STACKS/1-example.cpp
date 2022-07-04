#include<iostream>
// #include"2-dynamicstack.cpp"
#include"0-array-imp.cpp"
using namespace std;
int main(){
    //creating object of stack class
    // stackClass s; //for dynamic stack
    stackClass s(10); //for arrayimp
    s.push(12);
    s.push(13);
    s.push(100);
      cout<<s.size()<<endl;

    cout<<s.top()<<endl;

    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty();




    return 0;

}
