#ifndef ORBOX_BOARD_H
#define ORBOX_BOARD_H

#include <vector>
#include "block.h"
#include "direction.h"
using std::vector;

class GameBoard {
    vector<vector<Block*>> board_;
    int stars_;
    int moves_;
    Direction lastMove_;

public:


};
#endif //ORBOX_BOARD_H
