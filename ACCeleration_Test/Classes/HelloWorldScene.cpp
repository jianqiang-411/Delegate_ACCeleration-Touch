#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"

using namespace cocos2d;
using namespace CocosDenshion;

CCScene* HelloWorld::scene()
{
    // 'scene' is an autorelease object
    CCScene *scene = CCScene::create();
    
    // 'layer' is an autorelease object
    HelloWorld *layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !CCLayer::init() )
    {
        return false;
    }

    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.
    CCSize size = CCDirector::sharedDirector()->getWinSize();
    
    
    CCMenuItemImage *pCloseItem = CCMenuItemImage::create(
                                        "CloseNormal.png",
                                        "CloseSelected.png",
                                        this,
                                        menu_selector(HelloWorld::menuCloseCallback) );
    pCloseItem->setPosition( ccp(CCDirector::sharedDirector()->getWinSize().width - 20, 20) );
    CCMenu* pMenu = CCMenu::create(pCloseItem, NULL);
    pMenu->setPosition( CCPointZero );
    this->addChild(pMenu, 1);


    CCSprite* pSprite = CCSprite::create("Icon.png");
    pSprite->setPosition( ccp(size.width/2, size.height/2) );
    this->addChild(pSprite, 0);
    
    
    accelerationLayer  = AccelerationLayer::create();
    accelerationLayer->setPosition(CCPointZero);
    accelerationLayer->setCus_AccelerationDelegate(this);
    //this->addChild(accelerationLayer,10);
    
    touchLayer = TouchLayer::create();
    touchLayer->setPosition(CCPointZero);
    touchLayer->setCus_TouchDelegate(this);
    this->addChild(touchLayer,11);
    
    return true;
}

void HelloWorld::swing(int direction) {
    CCLog("HelloWorld::swing");
}

void HelloWorld::shakes() {
    CCLog("HelloWorld::shakes");
}


void HelloWorld::singleTouchEndsIn(CCPoint point)
{
    CCLog("HelloWorld::singleTouchEndsIn");
}

void HelloWorld::singleTouchDirecting(CCPoint point)
{
    CCLog("HelloWorld::singleTouchDirecting");
}
void HelloWorld::menuCloseCallback(CCObject* pSender)
{
    CCDirector::sharedDirector()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
