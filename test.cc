#include <iostream>
using namespace std;

class box
{
    public:
    double length;
    double width;
    double height;

    double get(void);
    void set(double len, double wid, double hei);
    box();
    ~box();
};

class line
{
  public: 
    double getLength();
    line(double len);
    line(const line &obj);
    ~line();
  private:
    double *ptr;

};

line::line(double len)
{
   cout<<"line constructed"<<std::endl;
   ptr = new double;
   *ptr = len;

}
line::line(const line &obj)
{
cout<<"object copied";
ptr = new double;
*ptr = *obj.ptr;

}

line::~line()
{
cout<<"line destructed"<<endl;

}
double line::getLength()
{
  return *ptr;
}
void display(line obj)
{

    cout<<"length is"<<obj.getLength()<<endl;
}

box::box()
{
   length = 5;
   width = 4;
   height = 3;
   cout<<"box created"<<std::endl;
}
box::~box()
{
    cout<<"box broken"<<std::endl;
}

double box::get()
{
    return length * width * height;
}

void box::set(double len, double wid, double hei)
{
    length = len;
    width  = wid;
    height = hei;
}

int main(){

    cout <<"1"<<endl;
    box b;
    cout<<"2"<<endl;
    double v = b.get();
    cout << v <<std::endl;
    
    line li(8.8);
    display(li);
    return 0;
}