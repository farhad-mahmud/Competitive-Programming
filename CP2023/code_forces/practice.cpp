
#include <iostream>
#include <string>

using namespace std;

class theater
{
public:
    int hallnumber;
    string  time;
    theater (int h,string t)
    {
       hallnumber=h;
       time=t;
    }
};
class movie1: public theater
{
public:
    string movieName;
    string movieType;

    movie1 (int h,string t, string mn, string mt): theater(h,t)
    {
        movieName= mn;
        movieType=mt;

    }

void jawandetails()
{
     cout <<"hallnumber: "<< hallnumber <<endl;
      cout<<"time: "<<time<<endl;
      cout<<"movieName: "<<movieName<<endl;
      cout<<"movieType: "<<movieType<<endl;

}
};
class movie2: public theater
{
public:
    string Moviename;
    string Movietype;

    movie2 (int h,string t, string nm, string tm):theater(h,t)
    {
         Moviename= nm;
        Movietype=tm;

    }


  void thenumdetails()
  {
      cout <<"hallnumber: "<<hallnumber<<endl;
      cout<<"time: "<<time << endl;
      cout<<"Moviename: "<<Moviename<<endl;
      cout<<"Movietype: " <<Movietype<<endl;
  }
};

  int main()
  {
      movie1 ob1(1,"4:30","Jawan","Action");
      movie2 ob2(3,"11:30","Thenun","Horror");
      ob1.jawandetails();
      ob2.thenumdetails();
      return 0;
  }
