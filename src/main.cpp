#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")

using namespace std;

void playSound(const char* file) {
    PlaySoundA(file, NULL, SND_FILENAME | SND_SYNC);
}

int main() {

    char letter;
    cout << "Enter an alphabet (A-G or a-g): ";
    cin >> letter;

    switch (letter) {

    case 'A':
    case 'a':
        cout << "  *  " << endl;
        Sleep(2000);
        cout << " * * " << endl;
        Sleep(2000);
        cout << "*   *" << endl;
        Sleep(2000);
        cout << "*****" << endl;
        Sleep(2000);
        cout << "*   *" << endl;
        Sleep(2000);

        playSound("sounds\\A.wav");
        break;

    case 'B':
    case 'b':
        cout << "**** " << endl;
        Sleep(2000);
        cout << "*   *" << endl;
        Sleep(2000);
        cout << "**** " << endl;
        Sleep(2000);
        cout << "*   *" << endl;
        Sleep(2000);
        cout << "**** " << endl;
        Sleep(2000);

        playSound("sounds\\B.wav");
        break;

    case 'C':
    case 'c':
        cout << " ****" << endl;
        Sleep(2000);
        cout << "*    " << endl;
        Sleep(2000);
        cout << "*    " << endl;
        Sleep(2000);
        cout << "*    " << endl;
        Sleep(2000);
        cout << " ****" << endl;
        Sleep(2000);

        playSound("sounds\\C.wav");
        break;

    case 'D':
    case 'd':
        cout << "***  " << endl;
        Sleep(2000);
        cout << "*  * " << endl;
        Sleep(2000);
        cout << "*   *" << endl;
        Sleep(2000);
        cout << "*  * " << endl;
        Sleep(2000);
        cout << "***  " << endl;
        Sleep(2000);

        playSound("sounds\\D.wav");
        break;

    case 'E':
    case 'e':
        cout << "*****" << endl;
        Sleep(2000);
        cout << "*    " << endl;
        Sleep(2000);
        cout << "**** " << endl;
        Sleep(2000);
        cout << "*    " << endl;
        Sleep(2000);
        cout << "*****" << endl;
        Sleep(2000);

        playSound("sounds\\E.wav");
        break;

    case 'F':
    case 'f':
        cout << "*****" << endl;
        Sleep(2000);
        cout << "*    " << endl;
        Sleep(2000);
        cout << "**** " << endl;
        Sleep(2000);
        cout << "*    " << endl;
        Sleep(2000);
        cout << "*    " << endl;
        Sleep(2000);

        playSound("sounds\\F.wav");
        break;

    case 'G':
    case 'g':
        cout << " ****" << endl;
        Sleep(2000);
        cout << "*    " << endl;
        Sleep(2000);
        cout << "* ***" << endl;
        Sleep(2000);
        cout << "*   *" << endl;
        Sleep(2000);
        cout << " ****" << endl;
        Sleep(2000);

        playSound("sounds\\G.wav");
        break;

    default:
        cout << "Input not valid, please enter A-G or a-g." << endl;
    }

    return 0;
}
