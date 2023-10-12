#include<iostream>
using namespace std;
#define SIZE 10
// DECLARE A STACK CLASS FOR CHARACTERS
class stack
{
    char stck[SIZE];// holds the stack
    int tos;// top of the stack
public:
    void init();//initializes the stack
    void push(char ch);//push characters in stack
    void pop();
};
void stack::init(){//initialize the stack
    tos=0;
}
void stack::push(char ch){
    if (tos==SIZE){
        cout<<"the stack is full";
        return;

    }
    stck[tos]= ch;
    tos++;
}
void stack::pop(){
    if (tos==0){
        cout<<"the stack is empty";

        return 0;//return null
    }
    tos--;
    return stck[tos];
}
int main (){
    stack s1,s2;//create two stacks
    int i;
    //initialize the stacks
    s1 init();
    s2 init();
    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');
    for(i=0;i<3;i++)
      cout<<"pop :s1 "<<s1.pop()<<"\n";
        for(i=0;i<3;i++)
        cout<<"pop :s2 "<<s2.pop()<<"\n";
        return 0;

}

