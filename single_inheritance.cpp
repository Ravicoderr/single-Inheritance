#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base::setdata()
{
    data1 = 10;
    data2 = 20;
}
int base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}

//Single Inheritance

class derieved : public base
{
    int data3;

public:
    void process();
    void display();
};
void derieved::process()
{
    data3 = getdata1() * data2;
}
void derieved::display()
{
    cout << "the value of data1 is " << getdata1() << endl;
    cout << "the value of data2 is " << data2 << endl;
    cout << "the value of data3 is " << data3 << endl;
}
int main()
{
    derieved deri;
    deri.setdata();
    deri.process();
    deri.display();
    return 0;
}