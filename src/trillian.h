#ifndef TRILLIAN_H
#define TRILLIAN_H

#include "board.h"
#include "pieces.h"
#include "moves.h"

typedef struct {
	move mov;
	double score;
}branch;

double value(char pc); 

double color_evaluate(piece *side, int n, int moves); 

double position_evaluate(chesset *set, int moves); 

/* minmax with alpha-beta pruning */
branch trillian(chessboard board, chesset set, branch alphawhite, branch betablack, unsigned depth);
branch maximise(chessboard board, chesset set, branch alphawhite, branch betablack, unsigned depth);
branch minimise(chessboard board, chesset set, branch alphawhite, branch betablack,  unsigned depth);

#endif
