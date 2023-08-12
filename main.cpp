#include <iostream>
using namespace std;

void pattern1() {
    /*
 * * * * * *
 * * * * * *
 * * * * * *
 * * * * * *
 * * * * * *
 * */
    int row, col;
    cout<<"Enter Rows :";
    cin>>row;
    cout<<"Enter Cols :";
    cin>>col;

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout<<"* ";
        }
        cout<<"\n";
    }
}

void pattern2() {
    /*
     *
     * *
     * * *
     * * * *
     * * * * *
     * * * * * *
     * */
    int row;
    cout<<"Enter Rows :";
    cin>>row;

    for(int i = 0; i<row; i++) {
        for(int j = 0; j<i+1; j++) {
            cout<<"* ";
        }
        cout<<"\n";
    }
}

int main() {
    pattern1();
    pattern2();
}
