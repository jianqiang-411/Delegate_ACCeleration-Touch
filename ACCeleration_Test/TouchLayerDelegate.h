//
//  TouchLayerDelegate.h
//  ACCeleration_Test
//
//  Created by Vampire on 13-10-12.
//
//

#ifndef __ACCeleration_Test__TouchLayerDelegate__
#define __ACCeleration_Test__TouchLayerDelegate__
#include "cocos2d.h"
#include <iostream>
using namespace cocos2d;
class TouchLayerDelegate
{
public:
    virtual void singleTouchEndsIn(CCPoint point) = 0;
    virtual void singleTouchDirecting(CCPoint point) = 0;
};
#endif /* defined(__ACCeleration_Test__TouchLayerDelegate__) */
