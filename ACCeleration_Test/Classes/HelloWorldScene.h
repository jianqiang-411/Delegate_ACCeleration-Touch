#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "AccelerationLayer.h"
#include "TouchLayer.h"

using namespace cocos2d;
class HelloWorld : public cocos2d::CCLayer ,public AccelerationLayerDelegate ,public TouchLayerDelegate
{
public:
    
    virtual bool init();
    static cocos2d::CCScene* scene();
    void menuCloseCallback(CCObject* pSender);
    CREATE_FUNC(HelloWorld);
    
    AccelerationLayer *accelerationLayer;
    virtual void swing(int direction);
    virtual void shakes();
    
    TouchLayer *touchLayer;
    virtual void singleTouchEndsIn(CCPoint point);
    virtual void singleTouchDirecting(CCPoint point);
    

};

#endif // __HELLOWORLD_SCENE_H__
