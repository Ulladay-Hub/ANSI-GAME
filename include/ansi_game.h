#ifndef ANSI_GAME_H
#define ANSI_GAME_H

#include <string>

class ANSIgame {
public:
    ANSIgame();
    ~ANSIgame();

    void initializeTerminal();
    void clearScreen();
    void setColor(int colorCode);
    void printText(const std::string& text, int x, int y);

private:
    void moveTo(int x, int y);
};

#endif
