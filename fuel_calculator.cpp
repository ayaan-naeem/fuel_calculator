#include <iostream>
using namespace std;

void palestine(){

    float Fuel, Distance;

    cout << "Enter the Distance : ";
    cin >> Distance;

    Fuel = Distance * 10;

    cout << "Fuel Needed : " << Fuel <<endl;
}

int main(){

    palestine ();

    return 0;
}