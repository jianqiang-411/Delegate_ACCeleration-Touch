//
//  TouchLayer.h
//  ACCeleration_Test
//
//  Created by Vampire on 13-10-12.
//
//

#ifndef __ACCeleration_Test__TouchLayer__
#define __ACCeleration_Test__TouchLayer__
#include "cocos2d.h"
#include "TouchLayerDelegate.h"
#include <iostream>
using namespace cocos2d;
class TouchLayer : public CCLayer 
{
public:
    TouchLayer();
    ~TouchLayer();
    virtual void onEnter();
    virtual void onExit();
    
public:
    CC_SYNTHESIZE(TouchLayerDelegate *, m_pTouchDelegate, Cus_TouchDelegate);
public:
    bool init();
    CREATE_FUNC(TouchLayer);
    virtual void registerWithTouchDispatcher();
    virtual void ccTouchesBegan(cocos2d::CCSet *pTouches, cocos2d::CCEvent *pEvent);
    virtual void ccTouchesMoved(cocos2d::CCSet *pTouches, cocos2d::CCEvent *pEvent);
    virtual void ccTouchesEnded(cocos2d::CCSet *pTouches, cocos2d::CCEvent *pEvent);
    virtual void ccTouchesCancelled(cocos2d::CCSet *pTouches, cocos2d::CCEvent *pEvent);
    
};
#endif /* defined(__ACCeleration_Test__TouchLayer__) */
