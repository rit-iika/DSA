#include<iostream>
using namespace std;


class stackClass{
    int *data;
    int nextIndex;
    int capacity;
    public:

    stackClass(int totalSize){
        data=new int[totalSize];
        nextIndex=0;
        capacity=totalSize;
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
            cout<<"stack is full.."<<endl;
            return;

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


