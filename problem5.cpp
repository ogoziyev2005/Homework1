#include <iostream>

using namespace std;

int main() {
    // Input Sardor's height in centimeters
    float sardorHeightCm;
    cout << "Enter Sardor's height in cm: ";
    cin >> sardorHeightCm;

    // Input Mike's height in feet
    float mikeHeightFt;
    cout << "Enter Mike's height in feet: ";
    cin >> mikeHeightFt;

    // Convert Mike's height from feet to centimeters
    const float feetToCm = 30.48;
    float mikeHeightCm = mikeHeightFt * feetToCm;

    // Compare heights and print result
    if (mikeHeightCm > sardorHeightCm) {
        cout << "1" << endl; // Mike is taller
    } else {
        cout << "0" << endl; // Sardor is taller or they are the same height
    }

    return 0;
}