//
//  TouchLayer.cpp
//  ACCeleration_Test
//
//  Created by Vampire on 13-10-12.
//
//

#include "TouchLayer.h"
TouchLayer:: TouchLayer()
{
    
}
TouchLayer:: ~TouchLayer()
{
    
}
void TouchLayer::onEnter()
{
    CCNode::onEnter();
}
void TouchLayer::onExit()
{
    CCDirector::sharedDirector()->getTouchDispatcher()->removeDelegate(this);
    CCNode::onExit();
}

bool TouchLayer::init()
{
    bool bRet = false;
    do {
        CC_BREAK_IF(!CCLayer::init());
        this->registerWithTouchDispatcher();
        this->setCus_TouchDelegate(NULL);
        bRet = true;
    } while (0);
    return bRet;
}

void TouchLayer::registerWithTouchDispatcher() {
    CCDirector::sharedDirector()->getTouchDispatcher()->addStandardDelegate(this, 0);
}

void TouchLayer::ccTouchesBegan(cocos2d::CCSet *pTouches, cocos2d::CCEvent *pEvent) {
    if (pTouches->count() == 1) { //单点触摸
        CCTouch *touch = dynamic_cast<CCTouch *>(pTouches->anyObject());
        CCPoint position = touch->getLocationInView();
        position = CCDirector::sharedDirector()->convertToGL(position);
        
        if (this->getCus_TouchDelegate()) {
            this->getCus_TouchDelegate()->singleTouchDirecting(position);
        }
    } else { //多点触摸
        
    }
}

void TouchLayer::ccTouchesMoved(cocos2d::CCSet *pTouches, cocos2d::CCEvent *pEvent) {
    if (pTouches->count() == 1) { //单点触摸
        CCTouch *touch = dynamic_cast<CCTouch *>(pTouches->anyObject());
        CCPoint position = touch->getLocationInView();
        position = CCDirector::sharedDirector()->convertToGL(position);
        
        if (this->getCus_TouchDelegate()) {
            this->getCus_TouchDelegate()->singleTouchDirecting(position);
        }
    } else { //多点触摸
        
    }
}

void TouchLayer::ccTouchesEnded(cocos2d::CCSet *pTouches, cocos2d::CCEvent *pEvent) {
    if (pTouches->count() == 1) { //单点触摸
        CCTouch *touch = dynamic_cast<CCTouch *>(pTouches->anyObject());
        CCPoint position = touch->getLocationInView();
        position = CCDirector::sharedDirector()->convertToGL(position);
        
        if (this->getCus_TouchDelegate()) {
            this->getCus_TouchDelegate()->singleTouchEndsIn(position);
        }
    } else { //多点触摸
        
    }
}

void TouchLayer::ccTouchesCancelled(cocos2d::CCSet *pTouches, cocos2d::CCEvent *pEvent) {
    
}