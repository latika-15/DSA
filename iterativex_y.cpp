#include <iostream>
using namespace std;
int divide(int x, int y)

 {
int quotient = 0;
while (x >= y) {
    x -= y;
    quotient++;
}
return quotient;


}

int main() {
int x,y;
cout<<"Enter values of x and y:"; cin>>x>>y;
int result = divide(x, y);
cout << "Result of " << x << " / " << y << " = " << result <<endl;
return 0;
}