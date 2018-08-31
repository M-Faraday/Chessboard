//
// Created by Rudolph on 2018/08/30.
//

#include "Chessboard.h"

Chessboard::Chessboard() {
    board* Initailboard = new board;
    boards.Push(Initailboard);
}

std::string Chessboard::BlackMove(std::string input) {

}

std::string Chessboard::WhiteMove(std::string input) {

}

std::string Chessboard::Move(std::string input) {
    if (turn) {
        return WhiteMove(input);
    } else {
        return BlackMove(input);
    }
}

Chessboard::Reset() {
    boards.Empty();
    board* Initailboard = new board;
    boards.Push(Initailboard);
    turn = true;
    move = 0;
}

bool Chessboard::IsValidMoveW(std::string input) {

}

bool Chessboard::IsValidMoveB(std::string input) {

}

std::string Chessboard::BoardToString() {

}

char Chessboard::ToPiece(int in) {
    if (in == 0) {
        return 0;
    } else  if (in < 0) {

    } else if (in > 0) {

    }
}