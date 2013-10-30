//
//  AccelerationLayer.h
//  ACCeleration_Test
//
//  Created by Vampire on 13-10-10.
//
//

#ifndef ACCeleration_Test_AccelerationLayer_h
#define ACCeleration_Test_AccelerationLayer_h

#include "cocos2d.h"
#include "AccelerationLayerDelegate.h"
using namespace cocos2d;

class AccelerationLayer : public CCLayer , public CCAccelerometerDelegate
{
private:
    int swingCnt;
    int shakeCnt;
public:
    AccelerationLayer();
    ~AccelerationLayer();
    virtual void onEnter();
    virtual void onExit();
    
public:
    CC_SYNTHESIZE(AccelerationLayerDelegate *, m_pAccelerationDelegate, Cus_AccelerationDelegate);
public:
    
    CREATE_FUNC(AccelerationLayer);
    bool init();
    virtual void didAccelerate(CCAcceleration* pAccelerationValue);
};


#endif
