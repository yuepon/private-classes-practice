// reeeeeeeee.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
using namespace std;


class FateServant {
private:
    int rarity;

public:
    string sort;
    string name;
    void introduce();
    void displayRarity();
    void setRarity(int stars); 


};

void FateServant::introduce() {
    cout << "This servants name is " << name << " and their class is " << sort << endl;
}
void FateServant::displayRarity() {
    cout << "The rarity for this servant is " << rarity << " stars" << endl;
}
void FateServant::setRarity(int stars) {
    rarity = stars;
}


int main()
{
    FateServant Gilgamesh;
    Gilgamesh.sort = "Archer";
    Gilgamesh.name = "Gilgamesh ";
    Gilgamesh.introduce();
    Gilgamesh.setRarity(5);
    Gilgamesh.displayRarity();


    FateServant SherlockHolmes;
    SherlockHolmes.sort = "Ruler ";
    SherlockHolmes.name = "Sherlock Holmes ";
    SherlockHolmes.introduce();
    SherlockHolmes.setRarity(5);
    SherlockHolmes.displayRarity();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
