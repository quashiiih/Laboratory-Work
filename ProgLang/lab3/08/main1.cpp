#include <iostream>
using namespace std;

int main() {
    int x = 3, y = 3, z = 2;
    bool result = (x == y) + (x == z) == true;
    cout << result << endl;
    return 0;
}