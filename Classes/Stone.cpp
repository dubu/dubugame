#include "Stone.h"
#include <iostream>

using namespace std;

bool Stone::initWithGame(GameScene* game) {

    theGame = game;
    game->addChild(this);
    this->state = kStateUngrabbed;
    return true;
}

void Stone::placeInGride(CCPoint place , int pt , int p1){

    int sType = rand() % 4;
    if (sType == pt || sType == p1) {
    this->placeInGride(place, pt, p1);
    return;
     } else{
        string *color  =  setStoneColor(sType);
        mySprite = CCSprite::create((char*) color);
        this->addChild(mySprite, 1);

        this ->stoneType = sType;
        this ->mySprite->setPosition(place);
     }

    string* Stone::setStoneColor(int sType){
    this->stoneType =  sType;
    switch (this->stoneType){
    case 0:
        color = (string*) "icon01.png";
        break;
    case 1:
        color = (string*) "icon02.png";
        break;
    case 2:
        color = (string*) "icon03.png";
        break;
    case 3:
        color = (string*) "icon04.png";
        break;
     }
        return color;

    }
}