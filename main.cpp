#include <Windows.h>
#include <iostream>

int main() {
SetConsoleTitleA("Anti-Recoil Script - made by lukeismadhot on discord :)");

    int strength;
    int choice = 1;
    std::cout << "Press delete at anytime to disable anti-recoil\n";
    std::cout << "Enter Anti-Recoil strength: ";
    std::cin >> strength;
    Sleep(300);
    system("cls");


    std::cout << "Press Insert to change anti-recoil strength.\n";
	while (true) {

        if (GetAsyncKeyState(VK_INSERT) & 1) {
            system("cls");
            std::cout << "Enter Anti-Recoil strength: ";
            std::cin >> strength;
        }

        if (GetAsyncKeyState(VK_DELETE) & 1) {
            system("pause");
            system("cls");
            std::cout << "Press Insert to change anti-recoil strength.\n";
        }

        Sleep(1); 

        if (GetAsyncKeyState(VK_LBUTTON) & 0x8000) {
            INPUT input = { 0 };
            input.type = INPUT_MOUSE;
            input.mi.dy = strength;
            input.mi.dwFlags = MOUSEEVENTF_MOVE;
            SendInput(1, &input, sizeof(INPUT));
        }
		}
}
