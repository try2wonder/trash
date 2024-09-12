#include<iostream>
using namespace std;

class myclass
{
private:
    int a;
public:
    void set_a(int num);
    int get_a();
};

void myclass::set_a(int num)
{
    a = num;
}

int myclass::get_a()
{
    return a;
}

int main()
{   
    int b;
    cout << "Type in your number: ";
    cin >> b;
    cout << "YOur number is " << b << "\n";
    
    myclass ob1, ob2;

    ob1.set_a(14);
    ob2.set_a(11);

    cout << ob1.get_a() << "\n";
    cout << ob2.get_a() << "\n";

     

    return 0;
}