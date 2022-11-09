#include<iostream>
using namespace std;
inline double area(double r);
class application
{
public:
    static void f();
    static void g();
    friend void printtest(application app);
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
void printtest(application app)
{
    cout<<app.a+5<<endl;
}
int main(){
application app;
app.f();
app.g();
printtest(app);
cout<<"area is "<<area(4)<<endl;
return 0;
}

inline double area(double r)
{
    return 3.14*r*r;
}