#include<iostream>
#include<climits>

using namespace std;

class stackClass{
    int *data;
    int nextIndex;
    int capacity;
    public:

    stackClass(){
        data=new int[capacity];
        nextIndex=0;
        capacity=5;
    }

    //function for returning size
    int size(){
        return nextIndex;
    }
    //isempty function
    bool isEmpty(){
        if(nextIndex==0){
            return true;
        }
        else {
            return false;
        }
    }
    //push function
    void push(int element){
        if(nextIndex== capacity){
            // cout<<"stack is full.."<<endl;
            // return;
            int *newData= new int[2* capacity];
            for(int i=0;i<capacity;i++){
                newData[i]=data[i];
            }
            capacity *= 2;
            delete [] data;
            data=newData;

        }
        data[nextIndex]=element;
        nextIndex++;
    }

    //delete function
    int pop(){
        if(isEmpty()){
            cout<<"stack is empty.."<<endl;
            return INT8_MIN;
        }
        nextIndex--;
        return data[nextIndex];

    }

    //create top function
    int top(){
         if(isEmpty()){
            cout<<"stack is empty.."<<endl;
            return INT8_MIN;
        }
        return data[nextIndex-1];
    }




};


