//
//  AccelerationLayer.cpp
//  ACCeleration_Test
//
//  Created by Vampire on 13-10-10.
//
//

#include "AccelerationLayer.h"



AccelerationLayer::AccelerationLayer()
{
    CCLog("AccelerationLayer::AccelerationLayer");
}

AccelerationLayer::~AccelerationLayer()
{
        CCLog("AccelerationLayer::~AccelerationLayer");
}

 void AccelerationLayer::onEnter()
{
    CCLog("AccelerationLayer::onEnter");
    CCNode::onEnter();
}

 void AccelerationLayer::onExit()
{
    CCLog("AccelerationLayer::onExit");
    CCNode::onExit();
}
bool AccelerationLayer::init()
{
    bool bRet = false;
    do {
        CC_BREAK_IF(!CCLayer::init());
        this->setAccelerometerEnabled(true);
        this->setCus_AccelerationDelegate(NULL);
        shakeCnt = swingCnt = 0;
        bRet = true;
    } while (0);
    return bRet;
}

void AccelerationLayer::didAccelerate(cocos2d::CCAcceleration *pAccelerationValue)
{
    CCLog("----%f,%f,%f----",pAccelerationValue->x,pAccelerationValue->y,pAccelerationValue->z);
    if (this->getCus_AccelerationDelegate()) {
        this->getCus_AccelerationDelegate()->shakes();
    }
    
}