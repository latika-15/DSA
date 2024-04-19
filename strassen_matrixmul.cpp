#include <iostream>
using namespace std;
void addElements(int m[][2], int rows, int cols) {
    cout << "Enter elements of the matrix:" << endl;
    for (int i= 0;i=rows;i++) {
        for (int j=0; j<cols;j++) {
            cout << "Enter element ["<<i<<"]["<<j<<"]: ";
            cin >> m[i][j];
        }
    }
}
 void displayMatrix(int m[][2], int rows, int cols) {
     for (int i=0;i<rows;i++) {
        for (int j=0; j<cols; j++) {
            cout << m[i][j] << " ";
        }
        cout<<endl;
    }
}
void strassenMM(int m1[][2], int m2[][2], int m3[][2], int rows, int cols)
{
    int a1,a2,a3,a4,a5,a6,a7,i,j;
 a1= (m1[0][0] + m1[1][1])*(m2[0][0]+m2[1][1]);
  a2= (m1[1][0]+m1[1][1])*m2[0][0];
   a3= m1[0][0]*(m2[0][1]-m2[1][1]);
   a4= m1[1][1]*(m2[1][0]-m2[0][0]);
   a5= (m1[0][0]+m1[0][1])*m2[1][1];
 a6= (m1[1][0]-m1[0][0])*(m2[0][0]+m2[0][1]);
 a7= (m1[0][1]-m1[1][1])*(m2[1][0]+m2[1][1]);
 m3[0][0]=a1+a4-a5+a7;
 m3[0][1]=a3+a5;
 m3[1][0]=a2+a4;
 m3[1][1]=a1-a2+a3+a6;	
}
int main() {
    const int ROWS = 2;
    const int COLS = 2;
    int m1[ROWS][COLS];
    int m2[ROWS][COLS];
    int m3[ROWS][COLS];
addElements(m1, ROWS, COLS);
addElements(m2, ROWS, COLS);

    
    cout<<"\nMatrix 1 is \n";
    displayMatrix(m1, ROWS, COLS);
    	cout<<"\nMatrix 2 is \n";
    displayMatrix(m2, ROWS, COLS);
	
	strassenMM(m1,m2,m3,ROWS,COLS);
		cout<<"\nResultant Matrix  is \n";
    displayMatrix(m3, ROWS, COLS);
    return 0;
}
    