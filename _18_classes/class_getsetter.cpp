#include<iostream>
using namespace std;

class rectangle{
    private:
        int length, breath;
    
    public:
        void dimensions(int len, int bred)
        {
            if(len > 0 && bred > 0)
            {
                length = len;
                breath = bred;
            }
            else{
                cout << "Input wrong, try again after compiling" << endl;
            }
        }

        void area()
        {
            cout << "area is " << length * breath;

        }
};

int main()
{
    // creating new object
    rectangle first;
    first.dimensions(10, 20);
    first.area();
}