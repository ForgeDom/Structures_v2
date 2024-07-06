#include <iostream>
#include <cstring>

using namespace std;

struct Animal {
    char name[50];
    char classification[50];
    char nickname[50];
};

void fillAnimal(Animal& animal, const char* name, const char* classification, const char* nickname) {
    strcpy_s(animal.name, name);
    strcpy_s(animal.classification, classification);
    strcpy_s(animal.nickname, nickname);
}

void displayAnimal(const Animal& animal) {
    cout << "Animal Name: " << animal.name << endl;
    cout << "Classification: " << animal.classification << endl;
    cout << "Nickname: " << animal.nickname << endl;
}

void makeSound(const Animal& animal) {
    cout << animal.nickname << " is making a sound!" << endl;
}

int main() {
    Animal myAnimal;
    fillAnimal(myAnimal, "Reks", "Dog", "Buddy");

    displayAnimal(myAnimal);
    makeSound(myAnimal);

    return 0;
}
