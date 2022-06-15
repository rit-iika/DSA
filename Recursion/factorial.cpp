#include<iostream>
using namespace std;

int factorial(int n){
    // cout<<n;

    if(n==0) {return 1;}

    int solution= n*factorial(n-1);
    
    return solution;
  

}
int power(int n){

    if (n==0) {return 1;}

    int sol= 2* power(n-1);
    return sol;
    



}

int count(int n){
    if(n==0) return 0;
    
    count(n-1);
cout<<n<<endl;



}

int fib(int n){
    if(n==0) return 0;
    if(n==1 ) return 1;
    
        int ans= fib(n-1)+fib(n-2);
        
    return ans;





}
int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
    
   int ans= factorial(num);
   cout<<"factorial is: "<<ans<<endl;

   cout<<endl;


   int abs2= power(num);
   cout<<"2 to the power "<<num<<" is: "<<power(num)<<endl;

   int ans3=count(num);
//    cout<<"counting till num is: "<<count(num)<<endl;

cout<<endl;

cout<<"fib num at n is: "<<endl;
cout<<fib(num);







    return 0;

}