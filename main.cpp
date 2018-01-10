#include <iostream>

using namespace std;

int main()
{
    ///Extra variables
    int choice;
    bool testing = true;

    ///Base stat variables
    int str;
    int dex;
    int magic;
    int luck;
    int vital;

    ///Stat adding variables
    int WD;
    int AC;

    ///Attribute variables
    int attack;
    int defense;
    int mAttack;
    int mDefense;
    int evasion;
    int speed;
    int HP;
    int MP;
    int crit;

    while(testing)
    {
        cout << "What equation do you want to test?" << endl;
        cout << "   1 - Attack Stat" << endl;
        cout << "   2 - Defense Stat" << endl;
        cin >> choice;

        switch(choice)
        {
        case 1:
            cout << "Attack stat testing." << endl;
            cout << "Testing STR: ";
            cin >> str;
            cout << "Testing Damage: ";
            cin >> WD;
            attack = ((str+WD)/32)*(str+WD);
            cout << attack;
            break;
        case 2:
            cout << "Defense stat testing." << endl;
            cout << "Testing STR: ";
            cin >> str;
            cout << "Testing DEX: ";
            cin >> dex;
            cout << "Testing Armor Class: ";
            cin >> AC;
            defense = ((str*dex)/AC)+(AC+dex);
            cout << defense;
            break;
        }

        cout << endl << "Test again? 1 - Yes 2 - No" << endl;
        cin >> choice;

        if(choice == 1)
            testing = true;
        else
            testing = false;
    }

    cout << "Thanks for testing!!" << endl;

    return 0;
}
