#include <iostream>
using namespace std;
int tailRecursiveDivision(int x, int y, int result = 0) {
if (x < y) {
return result;
}
return tailRecursiveDivision(x - y, y, result + 1);
}

int main() {
int x = 120;
int y = 4;
int result = tailRecursiveDivision(x, y);

cout << "Result of " << x << " / " << y << " is: " << result << endl;

return 0;

}