#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string str1="hello world";
cout<<str1<<endl;

string str2="xxDFrcAAkS";
cout<<"change it to upper/lower"<<endl;
cout<<'a'-'A'<<endl;

int size=str2.size();

//convert uppercase
for(int i=0;i<=size;i++){
if(str2[i]>'a' && str2[i]<'z'){
    str2[i] -= 32;
}
}
cout<<"uppercased- "<<str2<<endl;

//convert lowercase
for(int i=0;i<=size;i++){
if(str2[i]>'A' && str2[i]<'Z'){
    str2[i] += 32;
}
}
cout<<"lowercased- "<<str2<<endl;

string s="ywuwiehwiehwdjw";
transform(s.begin(), s.end(), s.begin(), ::toupper);
cout<<s<<endl;
string S="SWVHDHKJS";
transform(s.begin(), s.end(), s.begin(), ::towlower);
cout<<S<<endl;

    return 0;
}
