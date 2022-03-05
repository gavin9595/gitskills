#include <iostream>
using namespace std;

class circle{

    public:
    circle(double rad);
    double area();
    private:
    double radius;
};

circle::circle(double rad)
{
   radius = rad;
}

double circle::area()
{
    return 3.14*radius*radius;
}

int main(){

    circle cir(2);
    cout<<"the area is "<< cir.area()<<endl;
}