#include "cocos2d.h"
#include "GameScene.h"

USING_NS_CC;
using namespace std;

class GameScene;

typedef enum tagState{
    kStateGrabbed,
    kStateUngrabbed
} touchState;

class Stone:public cocos2d::CCNode , public
CCTargetdTouchDelegate
{
public:
    virtual bool initWithGame(GameScene* game);
    virtual bool placeInGride(cocos2d::CCPoint place, int pt, int p1);
    virtual CCRect setStoneColor(int sType);

    CCSprite *mySprite;
    GameScene *theGame;
    int stoneType;
    int curBGroup;
    int curHGroup;
    touchState state;
    bool disappealring;
    coocs2d::CCPint initdir;
};