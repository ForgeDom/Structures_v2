#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

struct Boiler {
public:
    char brand[20];
    char color[10];
    double power;
    double volume;
    double temperature;
};

int main() {
    Boiler boiler;
    strcpy_s(boiler.brand, "Samsung");
    strcpy_s(boiler.color, "Grey");
    boiler.power = 2000;
    boiler.volume = 65;
    boiler.temperature = 30;

    cout << "Brand: " << boiler.brand << endl;
    cout << "Color: " << boiler.color << endl;
    cout << "Power: " << boiler.power << " W" << endl;
    cout << "Volume: " << boiler.volume << " l" << endl;
    cout << "Temperature: " << boiler.temperature << " C" << endl;

    int choice;
    while (true) {
        cout << "\nChoose what to change:" << endl;
        cout << "1 - Brand" << endl;
        cout << "2 - Color" << endl;
        cout << "3 - Power" << endl;
        cout << "4 - Volume" << endl;
        cout << "5 - Temperature" << endl;
        cout << "0 - Exit" << endl;

        cin >> choice;
        system("cls");

        switch (choice) {
        case 1:
            cout << "Enter new brand: ";
            cin.ignore();
            cin.getline(boiler.brand, 20);
            break;
        case 2:
            cout << "Enter new color: ";
            cin.ignore();
            cin.getline(boiler.color, 10);
            break;
        case 3:
            cout << "Enter new power (W): ";
            cin >> boiler.power;
            break;
        case 4:
            cout << "Enter new volume (l): ";
            cin >> boiler.volume;
            break;
        case 5:
            cout << "Enter new temperature (C): ";
            cin >> boiler.temperature;
            break;
        case 0:
            return 0;
        default:
            cout << "Invalid choice, please try again." << endl;
            break;
        }

        cout << "\nUpdated Boiler Details:" << endl;
        cout << "Brand: " << boiler.brand << endl;
        cout << "Color: " << boiler.color << endl;
        cout << "Power: " << boiler.power << " W" << endl;
        cout << "Volume: " << boiler.volume << " l" << endl;
        cout << "Temperature: " << boiler.temperature << " C" << endl;
    }

    return 0;
}
