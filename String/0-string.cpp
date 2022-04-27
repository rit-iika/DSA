#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str1;
    string str2;
    string str3(5,'n');

//printing strings.....
    // cin>>str;
    getline(cin,str1);
    getline(cin, str2);
    cout<<str1<<endl;
 cout<<str2<<endl;


cout<<"size of str1-"<<str1.size()<<endl;
cout<<"length of str1-"<<str1.length()<<endl;


 //cin prints only first word, while getline prints whole string.

   cout<<str3<<endl;
cout<<endl;
//functions in strings.
    string sum;
    sum= str1+str2;
    cout<<"added string-->"<<sum<<endl;

    string appendstring;
    appendstring=str1.append(str2);
    cout<<"appended string-"<<appendstring<<endl;

//accesing characters in string..


int size=str2.length();
// int size=sizeof(str);
for(int i=0;i<=size;i++){
    cout<<str2[i]<<endl;
}

// str3.clear();
// cout<<str3;
cout<<str1.compare(str3);

//lexicographical gyan
int compare=str1.compare(str2);
if(compare==0)
{cout<<"strings are equal";}
else
cout<<"not equal yaar";

//empty function
cout<<str1.empty(); //true, false


cout<<endl;
cout<<endl;

//erase function
//syntax- string.erase(index from where to start deleting, how many entities to delete);
string str4="heyyou";
cout<<str4<<endl;
// str4.erase(0,3);
// cout<<str4<<endl;
// str4.erase(2,2);
// cout<<str4<<endl;



//insert function, 
cout<<str4.insert(2,"me");
cout<<endl;
//substring ..
//find() function to find substring
 cout<<str4.find("you")<<endl; //it returns index of substring found
 string substring1=str1.substr();
 //string.substr(from which index, how many );
 cout<<"substring 1 is-"<<substring1<<endl;

cout<<endl;
cout<<endl;

//numeric strings.
string news="81";
// cout<<news+2<<endl;
int x=stoi(news);
//stoi from numeric string to number
//string to int
cout<<x+2<<endl;

//int to string"
int x2=786;
cout<<to_string(x2)+"2"<<endl;

//sorting 
string str5="jhdjehfjfhwehfn";
sort(str5.begin(),str5.end());
cout<<str5<<endl;
    return 0;
}
