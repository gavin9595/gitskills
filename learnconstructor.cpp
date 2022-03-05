#include <iostream>

using namespace std;

class Line{

    public:
    void setValue(double var);
    double returnvalue(void);
    Line(double x);

    private:
    double length;
};

Line::Line(double x)
{
  cout <<"a new object is created, and value is " << x << endl;

}

void Line::setValue(double var)
{
    length = var;
}

double Line::returnvalue(void)
{
    return length;
}

int main(){

   Line newcase(8);
   newcase.setValue(11);
   cout<<"a new value is set "<<newcase.returnvalue()<<endl;
    return 0;
}