/*#include<iostream>
using namespace std;
    const int constant =10;
    class myclass{
    private:
        int a;
    public:
        myclass();
        myclass(int x);
        void setA(int x);
        int getA();
        ~myclass();
    };
    myclass::myclass(){
        cout<<"inside default constructor";
     a = constant;
    }
    myclass::myclass(int x){
        cout<<"inside peramitarized constructor";
        a = x;
    }
    void myclass::setA(int x){
        a = x;
    }
    int myclass::getA(){

        return a;

    }


    int main ()
    {
        int value;
        cout<<"enter a value : ";
        cin>>value;
        myclass obj1,obj2;
        obj1.setA(value);
        cout<<obj1.getA()<< endl;
        cout<<obj2.getA()<<endl;
        return 0;

    }
*/
#include<iostream>
using namespace std;
class car{
private:
    int year;
    float price ;
public :
    car();
    car(int y,float p);
    void setyear();
    void setprice();
    int getyear();
    float getprice();
    void displaydetails();
    ~car();


};
car::car(){
    year=0;
    price=0;
}
 car::car(int y,float p){
    year =y;
    price =p;
}
void car::setyear(int y){
    year =y;
}
void car::setprice(float p){
    price =p;
}
int car::getyear(){
    return year;
}
float car::getprice(){
    return price;

}
void car::displaydetails(){
    cout<<year;
    cout<<price;
}
car::~car({
          cout<<"inside destructor"<<endl;
          }

int main (){
          car car1(2012,10000),car2(2020,200000));

          car1.displaydetails();
          car2.displaydetails();
          //find the latest car
          if(car1.getyear()>car2.getyear()){
            cout<<"car 1 is latest car";
          }
          else {
            cout<<"car 2 is latest car";
          }
          //find highest price
          if(car.getprice()>car2.getprice())
            cout<<"car 1 is expensive ";
          }
          else{
            cout<<"car 2 is expensive"<<endl;
          }
          return 0;
