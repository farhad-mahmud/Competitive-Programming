#include<iostream>
using namespace std;
class  A {
public:
    int a,b,c;
    A(int y,int z){
        a=3;
        b=y;
        c=z;
    }
};
class B : public A {
    int  mul_a,mul_b,mul_c;
public :
    B(int q,int r) : A(q,r){}

    void mul(void);
    void display(void);
};


void B :: mul(){
    mul_a= 10 * a;
    mul_b= 10 * b;
    mul_c= 10 * c;
}
void B :: display(){
    cout << mul_a  << "\n" <<  mul_b << "\n" << mul_c << endl;

}
int main (){
    B ob1(10,15);
    ob1.mul();
    ob1.display();
    return 0;

}
