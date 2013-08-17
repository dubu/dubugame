#include "GameScene.h"

#define GRID_WIDTH 8
#define GRID_HEIGHT 7
#define GRID_OFFSET ccp(158,35)
#define MAX_TIME 230
#define kGBACK 2

using namespace cocos2d;

CCScene* GameScene::scene()
{
    // 'scene' is an autorelease object
    CCScene *scene = CCScene::create();

    // 'layer' is an autorelease object
    GameScene *layer = GameScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

bool GameScene::init()
{
    if ( !CCLayer::init() )
    {
        return false;
    }

    // ask director the window size
   CCSize size = CCDirector::sharedDirector()->getWinSize();

   CCSprite * BackGround = CCSprite::create("background.png");
   BackGround->setPosition( ccp(size.width/2, size.height/2) );
   this->addChild(BackGround, 0);

   CCSprite * gridBackground = CCSprite::create("grid.png");
   this->addChild(gridBackground, 0, K_GBACK);
   gridBackground->setPositon(ccp(305,154));

/*
   for (int i =  0 ;  i < GRID_WIDTH; i++){
    for(int j = 0 ; j < GRID_HEIGHT ; j ++){
        Stone *s = new Stone();
        s->initWithGame(this);
        grid[i][j] = s;
        s ->release();
    }
   }
   this->placeStones();
   this->allowTouch = true;
*/

   return true;
}

void GameScene::placeStones(){
/*

    for(int i=0; i< GRID_WIDTH; i++){
        for(int j = 0; j < GRID_HEIGHT; j++){
        Stone *lefts = NULL;
        Stone *leftmostS = NULL;
        Stone *topS = NULL;
        Stone *topmostS = NULL;
        int prohibitedLeft = -1 , prohibitedTop = -1;
        if( i >= 2){
            lefts = (Stone *) grid[i -1][j];
            topmostS = (Stone *) grid[i-2][j];
        }

        if( j >=2){
         topS = (Stone *) grid[i][j-1];
         topmostS = (Stone *) grid[i][j-2];
        }

        if(lefts && leftmostS && lefts->stoneType == leftmostS->stoneType){
            prohibitedLeft = lefts->stoneType;
        }
        grid[i]j > palceInGride(ccp(42 * i + GRID_OFFSET.x , 42*j + GRID_OFFSET.y)
                               , prohibitedTop ,prohibitedLeft);
        }
    }
    */
}