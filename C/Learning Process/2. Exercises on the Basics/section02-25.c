#include <stdio.h>
#include <stdlib.h>
#include "section02-25.h"


int main() {
    int game[3][3] = { {-1, -1, -1}, /// 1 X, 0 O, -1 " "
                       {-1, -1, -1},
                       {-1, -1, -1} };
    play(game);
    return 0;
}



