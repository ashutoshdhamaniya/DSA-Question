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

void pattern3() {
    /*
     * 1
     * 12
     * 123
     * 1234
     * 12345
     * */
    int row;
    cout<<"Enter Rows :";
    cin>>row;

    for(int i=0; i<row; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout<<j+1;
        }
        cout<<"\n";
    }
}

void pattern4() {
    /*
     * 1
     * 22
     * 333
     * 4444
     * 55555
     * */
    int row;
    cout<<"Enter Rows :";
    cin>>row;

    for(int i=0; i<row; i++) {
        for(int j=0; j<i+1; j++) {
            cout<<i+1;
        }
        cout<<"\n";
    }
}

void pattern5() {
    /*
     * *****
     * ****
     * ***
     * **
     * *
     * */

    int row;
    cout<<"Enter Rows :";
    cin>>row;

    for(int i=row; i>=0; i--) {
        for(int j=0; j<i; j++) {
            cout<<"*";
        }
        cout<<"\n";
    }
}

void pattern6() {
    /*
     * 12345
     * 1234
     * 123
     * 12
     * 1
     * */

    int row;
    cout<<"Enter Rows :";
    cin>>row;

    for (int i=row; i>=0; i--) {
        for(int j=0; j<i; j++) {
            cout<<j+1;
        }
        cout<<"\n";
    }
}

int main() {
    pattern1();
    pattern2();
    pattern3();
    pattern4();
    pattern5();
    pattern6();
}
