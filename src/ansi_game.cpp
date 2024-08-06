#include "include/ansi_game.h"
#include <iostream>

ANSIgame::ANSIgame() {}

ANSIgame::~ANSIgame() {}

void ANSIgame::initializeTerminal() {
    std::cout << "\033[0m";  
}

void ANSIgame::clearScreen() {
    std::cout << "\033[2J";  
}

void ANSIgame::setColor(int colorCode) {
    std::cout << "\033[38;5;" << colorCode << "m";  
}

void ANSIgame::printText(const std::string& text, int x, int y) {
    moveTo(x, y);  
    std::cout << text;
}

void ANSIgame::moveTo(int x, int y) {
    std::cout << "\033[" << y << ";" << x << "H";  
}
