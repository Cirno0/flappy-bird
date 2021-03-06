#ifndef SCORE_H
#define SCORE_H
#include"myobject.h"
#include "scoreboard.h"
class Score:MyObject
{
public:
    Score();
    ~Score();
    void ScoreAdd();
    void ShowBoard();
    void ShowResult(QPainter &p);
    bool IsFinish();
private:
    void gameover();
    void frame();
    void restart();
    void show(QPainter &);
    void ShowNum(QPainter &,const double x,const double y,const unsigned int num,QPixmap * Numimg);
    void ShowMedals(QPainter &);
    bool new_record_flag=false;
    QPointer<ScoreBoard> board;
    QPixmap & new_record;
    unsigned int best=0,now=0;
};

#endif // SCORE_H
