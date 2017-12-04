#include<StringStack.h>
#include<iostream>
#include<string>
using namespace std;

string::pop(){
    if(!stack.empty()){
        for(i = 1; i < stack.size()-1; i ++){
            stack[i] = stack[i - 1];
        }
    }
    if(stack.empty()){
        cout<< "Stack is Empty" << endl;
    }
    return stack;
}
void::push(string){
    if(stack.empty){
        stack[0] = string;
    }
    else{
    string = stack[stack.size()+1];}
}
bool::isEmpty(){
    if(stack.empty){
      return true;  
    } 
    return false;
}