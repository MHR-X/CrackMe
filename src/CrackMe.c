#include <windows.h>

void HideConsole() {
    FreeConsole();
    HWND h = FindWindowA("ConsoleWindowClass", NULL);
    if (h) ShowWindow(h, SW_HIDE);
}

int IsPremium() {
    return 0;
}

void ShowPaymentScreen() {
    int r = MessageBoxA(NULL, "Unlock full version for $9.99?\n\n[Click YES to pay | NO to exit]", "Premium Required", MB_ICONQUESTION | MB_YESNO | MB_SYSTEMMODAL);
    if (r == IDYES) {
        MessageBoxA(NULL, "Payment processing... (This is a demo)", "CrackMe", MB_ICONINFORMATION);
    }
    ExitProcess(0);
}

void StartFullGame() {
    MessageBoxA(NULL, "🎉 CONGRATS! You cracked the CrackMe!\n\nYou have full access.", "CrackMe Premium", MB_ICONINFORMATION | MB_SYSTEMMODAL);
}

int main() {
    HideConsole();
    if (IsPremium()) {
        StartFullGame();
    } else {
        ShowPaymentScreen();
    }
    return 0;
}