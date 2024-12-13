#include <iostream>
using namespace std;

class Sum {
private:
    int x;
    int y;

public:
    // Parameterized constructor
    Sum(int a, int b) {
        x = a;
        y = b;
    }

    // Default constructor
    Sum() {
        x = 0;
        y = 0;
    }

    // Function to display the sum
    void displayinfo() {
        cout << "Sum: " << x + y << endl;
    }
};

int main() {
    Sum sum(2, 3);
    sum.displayinfo();  // Call the function directly
    return 0;
}
