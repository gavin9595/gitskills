#include<iostream>
using namespace std;
inline double area(double r);
class application
{
public:
    static void f();
    static void g();
private:
    static double a;
};

double application::a = 5.0;
void application::f()
{
    a = 6;
}
void application::g()
{
    cout<<a<<endl;
}
int main(){
application app;
app.g();
cout<<"area is "<<area(4)<<endl;
return 0;
}

inline double area(double r)
{
    return 3.14*r*r;
}