#include <iostream>
using namespace std;
// Function prototype for non-tail recursive division
int divide(int x, int y);
// Non-tail recursive division function
int divide(int x, int y) {
// Base case: if x is less than y, return 0
if (x < y) {
return 0;
}
// Recursive case: subtract y from x and recursively call divide
return 1 + divide(x - y, y);
}

int main() {
int x = 50;
int y = 5;
// Call the divide function and output the result
cout << x << " / " << y << " = " << divide(x, y) <<endl;
return 0;

}