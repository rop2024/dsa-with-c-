#include<iostream>

using namespace std;

class person{
    public:
        string name;
        int age;

        void setname(string name);

        void display()
        {
            cout << "hello, my name is "<< name << " and my age is " << age << endl;
        }
};

// extra
void person::setname(string name)
{
    name = name;
}

int main()
{
    //  creating an object, as data elements are not private they can be excess from any where in program

    person person1;

    // prining before assigning values
    person1.display();

    // assigning values
    cout << "Enter your name :";
    cin >> person1.name;
    person1.setname("Rohi");
    cout << "Enter your age: ";
    cin >> person1.age;

    person1.display();
    
}