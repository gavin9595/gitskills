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
    cout<<"the area is "<< cir.area()<<endl;
}