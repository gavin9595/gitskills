#include <iostream>
using namespace std;

class circle{

    public:
    circle(double rad);
    ~circle();
    double area();
    private:
    double radius;
};
class box{

    public:
    box();
    ~box();
    double w;
    double l;
    double h;
};
box::box(){
    cout<<"box created"<<endl;
}
box::~box(){
    cout<<"box gone"<<endl;
}

circle::circle(double rad)
{
   cout<<"object created" <<endl;
   radius = rad;
}
circle::~circle()
{
   cout<<"object deleted" <<endl;
   radius = 0;
}
double circle::area()
{
    return 3.14*radius*radius;
}

int main(){

    circle cir(2);
    box box1;
    box1.h =2;
    box1.l =3;
    box1.w =4;
    double vol =0.0;
    vol = box1.h * box1.l * box1.w;
    cout<< "the vol is" << vol<<endl;
    cout<<"the area is "<< cir.area()<<endl;
}