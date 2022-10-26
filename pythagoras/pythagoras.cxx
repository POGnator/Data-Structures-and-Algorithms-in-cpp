#include <iostream>
#include <cmath>
using namespace std;

int main(){
    bool cExisting, aExisting;
    float a, b, c = 0;
    cout << "Do you know the length of c? (0 False/1 True) ";
    cin >> cExisting;
    if (cExisting){
        cout << "Do you know the length of a? (0 False/1 True) ";
        cin >> aExisting;
        if (aExisting){
            cout << "a: ";
            cin >> a;
            cout << "c: ";
            cin >> c;
            //We search b, b is square root of c²-a²
            b = sqrt(pow(c, 2)-pow(a, 2));
            cout << b;
        }
        else{
            cout << "b: ";
            cin >> b;
            cout << "c: ";
            cin >> c;
            //We search a, a is square root of c²-b²
            a = sqrt(pow(c, 2)-pow(b, 2));
            cout << a;
        }
    }
    else{
        cout << "a:" << endl;
        cin >> a;
        cout << "b: " << endl;
        cin >> b;
        //We search c, c is square root of a² + b²
        c = sqrt(pow(a, 2) + pow(b, 2));
        cout << c;
    }
    return 0;
}