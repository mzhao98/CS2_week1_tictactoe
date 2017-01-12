#ifndef _BOARD
#define _BOARD
class Board
{
private:
    int squares [3][3];
public:
    Board();
    int Query(int x, int y);
    void Place(int x, int y, int player);
    int CheckWin();
    bool CheckDraw();
    void Reset();

};
#endif
