#include <iostream>
using namespace std;

int dc(int x, int y) {
if (x < y) {
return 0;
} else {
int quotient = 1;
int y_copy = y;

    while (y_copy + y_copy <= x) {
        y_copy += y_copy;
        quotient += quotient;
    }

    return quotient + dc(x - y_copy, y);
}

}

int main() {
int x = 220;
int y = 2;

cout << "Division result: " << dc(x, y) << endl;

return 0;


}