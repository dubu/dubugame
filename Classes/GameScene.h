#include "cocos2d.h"
//#include "Stone.h"
//class Stone;

class GameScene : public cocos2d::CCLayer
{
public:
    virtual bool init();
    static cocos2d::CCScene* scene();

    virtual void placeStones();
    virtual void checkGroups(bool firstTime);
    virtual void moveStoneDown(float dt);

    //virtual void swapStones(Stone *stone, int dir);
    //Stone *grid[8][7];

    bool allowTouch;
    int score;

    // implement the "static node()" method manually
    //CREATE_FUNC(GameScene);
};