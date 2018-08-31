//
// Created by Rudolph on 2018/08/30.
//

#ifndef CHESSBOARD_CHESSBOARD_H
#define CHESSBOARD_CHESSBOARD_H
#include <iostream>
#include <string>
#include "Stack.h"

struct board {
    int State[8][8] ={
            {-4,-2,-3,-5,-6,-3,-2,-4},
            {-1,-1,-1,-1,-1,-1,-1,-1},
            {0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0},
            {1,1,1,1,1,1,1,1},
            {4,2,3,5,6,3,2,4}
    };
    board& operator=(const board& rhs) {
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                this->State[i][j]= rhs.State[i][j];
            }
        }
        return *this;
    }
};

class Chessboard {
public:
    Chessboard();
    std::string BlackMove(std::string input);
    std::string WhiteMove(std::string input);
    std::string Move(std::string input);
    int Reset();
private:
    Stack<board> boards;
    std::string BoardToString();
    char ToPiece(int in);
    bool IsValidMoveW(std::string input);
    bool IsValidMoveB(std::string input);
    bool turn = false;
    int move = 0;

};

#endif //CHESSBOARD_CHESSBOARD_H
