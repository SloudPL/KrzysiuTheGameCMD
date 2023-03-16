#include <iostream>
#include <cstdlib>
#include <string>
#include <Windows.h>

using namespace std;

void start();
void odp34567();
void coswiecej1();
void odp213();
void easteregg1();
void easteregg2();
void easteregg3();
void game();

int main()
{
    int odpstart;

    start();
    cin >> odpstart;

    if (odpstart == 1) {

        game();

    }
    else if (odpstart == 2) {

        cout << "Gra sie wylacza" << endl;

    }
    else {

        easteregg2();

    }

    system("PAUSE");
    return 0;
}

void start() {

    cout << "Witaj w grze KrzysiuTheGame" << endl;
    cout << "Twoim zadaniem jest znalezc 3 eastereggi lub napic krzysia" << endl;
    cout << "1. Start" << endl;
    cout << "2. Wyjdz" << endl;

}

void odp34567() {

    cout << "Krzysiu zeruje twoj napoj, jest ci wdzieczny" << endl;

}

void coswiecej1() {

    cout << "Krzysiu chce cos innego! " << endl;
    cout << "3 - Vodkie " << endl;
    cout << "4 - Whisky " << endl;
    cout << "5 - Lecha " << endl;
    cout << "6 - Domestos " << endl;
    cout << "7 - Mega Demon" << endl;
    cout << "8 - Wspolpraca Redbulla i Minecraft" << endl;

}

void odp213() {

    cout << "Krzysiu chce cos jeszcze! " << endl;
    cout << "4 - Whisky " << endl;
    cout << "5 - Lecha " << endl;
    cout << "6 - Domestos " << endl;
    cout << "7 - Mega Demon" << endl;
    cout << "8 - Wspolpraca Redbulla i Minecraft" << endl;

}

void easteregg1() {
    //Pierwszy easteregg
    system("start https://tenor.com/y9Qu.gif");

}

void easteregg2() {
    // Drugi easteregg
    MessageBox(NULL, L"IDIOTO MASZ NAPISANE CYFRY JAKIE MOZESZ WPISAC", L"DLACZEGO IDIOTO JESTES TAK GLUPI", MB_ICONQUESTION);

}

void easteregg3() {

    system("start https://sloud.pl/");

    MessageBox(NULL, L"Polecamy sponsora sloud.pl", L"Polecamy sponsora sloud.pl", MB_OK);

}

void game() {

    int odp;

    cout << "Krzysiu chce sie czegos napic, wybierz co mu podasz " << endl;
    cout << "1 - Wode " << endl;
    cout << "2 - Cole " << endl;
    cout << "3 - Vodkie " << endl;
    cout << "4 - Whisky " << endl;
    cout << "5 - Lecha " << endl;
    cout << "6 - Domestos " << endl;
    cout << "7 - Mega Demon" << endl;
    cout << "8 - Wspolpraca Redbulla i Minecraft" << endl;

    cin >> odp;

    if (odp == 1)
    {

        cout << "Krzysiu mowi, zebys przyniosl cos co sie da wypic " << endl;
        cout << "2 - Cole " << endl;
        cout << "3 - Vodkie " << endl;
        cout << "4 - Whisky " << endl;
        cout << "5 - Lecha " << endl;
        cout << "6 - Domestos " << endl;
        cout << "7 - Mega Demon " << endl;
        cout << "8 - Wspolpraca Redbulla i Minecraft" << endl;

        cin >> odp;

        if (odp == 2) {

            cout << "Krzysiu mowi, ze nie jest to wystarczajace dla niego" << endl;
            cout << "3 - Vodkie " << endl;
            cout << "4 - Whisky " << endl;
            cout << "5 - Lecha " << endl;
            cout << "6 - Domestos " << endl;
            cout << "7 - Mega Demon" << endl;
            cout << "8 - Wspolpraca Redbulla i Minecraft" << endl;

            cin >> odp;

            if (odp == 3, 4, 5, 6, 7) {

                odp34567();

            }
        }
        else if (odp == 8) {

            easteregg3();

        }
        else if (odp == 3, 4, 5, 6, 7) {

            odp34567();

        }

    }
    else if (odp == 2) {

        cout << "Krzysiu mowi, ze nie jest to wystarczajace dla niego" << endl;
        cout << "1 - Woda" << endl;
        cout << "3 - Vodkie " << endl;
        cout << "4 - Whisky " << endl;
        cout << "5 - Lecha " << endl;
        cout << "6 - Domestos " << endl;
        cout << "7 - Mega Demon" << endl;
        cout << "8 - Wspolpraca Redbulla i Minecraft" << endl;

        cin >> odp;

        if (odp == 3, 4, 5, 6, 7) {

            odp34567();

        }
        if (odp == 1) {

            coswiecej1();

            cin >> odp;

            if (odp == 3) {

                odp213();

                cin >> odp;

                if (odp == 7) {

                    easteregg1();

                }
                else if (odp == 8) {

                    easteregg3();

                }
                else if (odp == 4, 5, 6) {

                    odp34567();

                }
            }
            else if (odp == 8) {

                easteregg3();

            }
            else if (odp == 4, 5, 6, 7) {

                odp34567();

            }

        }
        else if (odp == 8) {

            easteregg3();

        }
        else if (odp == 3, 4, 5, 6, 7) {

            odp34567();

        }

    }
    else if (odp == 7)
    {

        cout << "Krzysiu: ALE MOCNE, DAWAJ MI WIECEJ" << endl;

        cout << "Daj krzysiow wiecej mega demona" << endl;
        cout << "Wybierz co chcesz dac: 7 Mega DEMON" << endl;
        cin >> odp;

        if (odp == 7) {

            cout << "AAAAAAAA KRZYSIA OPENTALO DAJ MU WODY" << endl;
            cout << "Co chcesz dac krzysiowi? 1 WODA, 7 MEGA DEMON" << endl;
            cin >> odp;

            if (odp == 1) {

                cout << "Krzysiu sie uspokoil, dziekuje. " << endl;

            }
            else if (odp == 7) {

                cout << "Krzysiu to wyzerowal i odlecial do cieplych kraji, dziekuje za zabranie kolegi :c " << endl;

            }
            else {

                easteregg2();

            }

        }
        else {

            easteregg2();

        }

    }
    else if (odp == 8) {
        ;

        easteregg3();

    }
    else if (odp == 3, 4, 5, 6) {

        odp34567();

    }
    else {

        easteregg2();

    }

}