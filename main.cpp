#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

struct Iron {
public:
    char brand[20];
    char model[20];
    char color[10];
    double min_temp;
    double max_temp;
    bool steam_avail;
    double power;
};

int main() {
    Iron iron;
    strcpy_s(iron.brand, "Samsung");
    strcpy_s(iron.model, "MA-2557U");
    strcpy_s(iron.color, "Grey");
    iron.min_temp = 30;
    iron.max_temp = 140;
    iron.steam_avail = true;
    iron.power = 2000;

    cout << "Brand: " << iron.brand << endl;
    cout << "Model: " << iron.model << endl;
    cout << "Color: " << iron.color << endl;
    cout << "Minimum temperature: " << iron.min_temp << " C" << endl;
    cout << "Maximum temperature: " << iron.max_temp << " C" << endl;
    cout << "Steam available: " << (iron.steam_avail ? "Yes" : "No") << endl;
    cout << "Power: " << iron.power << " W" << endl;

    int choice;
    char temp[10];
    while (true) {
        cout << "\nChoose what to change:" << endl;
        cout << "1 - Brand" << endl;
        cout << "2 - Model" << endl;
        cout << "3 - Color" << endl;
        cout << "4 - Minimum temperature" << endl;
        cout << "5 - Maximum temperature" << endl;
        cout << "6 - Steam available" << endl;
        cout << "7 - Power" << endl;
        cout << "0 - Exit" << endl;

        cin >> choice;
        system("cls");

        switch (choice) {
        case 1:
            cout << "Enter new brand: ";
            cin.ignore();
            cin.getline(iron.brand, 20);
            break;
        case 2:
            cout << "Enter new model: ";
            cin.ignore();
            cin.getline(iron.model, 20);
            break;
        case 3:
            cout << "Enter new color: ";
            cin.ignore();
            cin.getline(iron.color, 10);
            break;
        case 4:
            cout << "Enter new minimum temperature (C): ";
            cin >> iron.min_temp;
            break;
        case 5:
            cout << "Enter new maximum temperature (C): ";
            cin >> iron.max_temp;
            break;
        case 6:
            cout << "Enter steam availability (Yes/No): ";
            cin.ignore();
            cin.getline(temp, 10);
            iron.steam_avail = (strcmp(temp, "Yes") == 0 || strcmp(temp, "yes") == 0);
            break;
        case 7:
            cout << "Enter new power (W): ";
            cin >> iron.power;
            break;
        case 0:
            return 0;
        default:
            cout << "Invalid choice, please try again." << endl;
            break;
        }

        cout << "\nUpdated Iron Details:" << endl;
        cout << "Brand: " << iron.brand << endl;
        cout << "Model: " << iron.model << endl;
        cout << "Color: " << iron.color << endl;
        cout << "Minimum temperature: " << iron.min_temp << " C" << endl;
        cout << "Maximum temperature: " << iron.max_temp << " C" << endl;
        cout << "Steam available: " << (iron.steam_avail ? "Yes" : "No") << endl;
        cout << "Power: " << iron.power << " W" << endl;
    }

    return 0;
}
