#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

struct WASHING_MACHINE {
public:
    char brand[20];
    char color[10];
    double width;
    double length;
    double height;
    double power;
    double speed;
    double temperature;
};

int main() {
    WASHING_MACHINE Washer;
    strcpy_s(Washer.brand, "Samsung");
    strcpy_s(Washer.color, "Grey");
    Washer.width = 65;
    Washer.length = 60;
    Washer.height = 90;
    Washer.power = 2000;
    Washer.speed = 800;
    Washer.temperature = 30;

    cout << "Brand: " << Washer.brand << endl;
    cout << "Color: " << Washer.color << endl;
    cout << "Width: " << Washer.width << " cm" << endl;
    cout << "Length: " << Washer.length << " cm" << endl;
    cout << "Height: " << Washer.height << " cm" << endl;
    cout << "Power: " << Washer.power << " W" << endl;
    cout << "Speed: " << Washer.speed << " rpm" << endl;
    cout << "Temperature: " << Washer.temperature << " C" << endl;

    int choice;
    while (true) {
        cout << "\nChoose what to change:" << endl;
        cout << "1 - Brand" << endl;
        cout << "2 - Color" << endl;
        cout << "3 - Width" << endl;
        cout << "4 - Length" << endl;
        cout << "5 - Height" << endl;
        cout << "6 - Power" << endl;
        cout << "7 - Speed" << endl;
        cout << "8 - Temperature" << endl;
        cout << "0 - Exit" << endl;

        cin >> choice;
        system("cls");

        switch (choice) {
        case 1:
            cout << "Enter new brand: ";
            cin >> Washer.brand;
            break;
        case 2:
            cout << "Enter new color: ";
            cin >> Washer.color;
            break;
        case 3:
            cout << "Enter new width (cm): ";
            cin >> Washer.width;
            break;
        case 4:
            cout << "Enter new length (cm): ";
            cin >> Washer.length;
            break;
        case 5:
            cout << "Enter new height (cm): ";
            cin >> Washer.height;
            break;
        case 6:
            cout << "Enter new power (W): ";
            cin >> Washer.power;
            break;
        case 7:
            cout << "Enter new speed (rpm): ";
            cin >> Washer.speed;
            break;
        case 8:
            cout << "Enter new temperature (C): ";
            cin >> Washer.temperature;
            break;
        case 0:
            return 0;
        default:
            cout << "Invalid choice, please try again." << endl;
            break;
        }

        cout << "\nUpdated Washing Machine Details:" << endl;
        cout << "Brand: " << Washer.brand << endl;
        cout << "Color: " << Washer.color << endl;
        cout << "Width: " << Washer.width << " cm" << endl;
        cout << "Length: " << Washer.length << " cm" << endl;
        cout << "Height: " << Washer.height << " cm" << endl;
        cout << "Power: " << Washer.power << " W" << endl;
        cout << "Speed: " << Washer.speed << " rpm" << endl;
        cout << "Temperature: " << Washer.temperature << " C" << endl;
    }

    return 0;
}