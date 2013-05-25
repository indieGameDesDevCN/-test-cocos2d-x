#include"SceneHolder.h"

using namespace cocos2d;
#define MY_CREATE_AND_ADD_LAYER(varName,className) \
	varName = className::create(); \
	varName->retain(); \
	this->addChild(varName);
#define MY_RELEASE_LAYER(varName) \
	if(varName){ \
		varName->release(); \
		varName = NULL; \
	}
bool PlayScene::init(){
	if( CCScene::init()){
		MY_CREATE_AND_ADD_LAYER(backLayer,BackLayer)
		MY_CREATE_AND_ADD_LAYER(frontLayer,FrontLayer)
		MY_CREATE_AND_ADD_LAYER(playerLayer,PlayerLayer)
		return true;
	}else{
		return false;
	}
}
PlayScene::~PlayScene(){
	MY_RELEASE_LAYER(backLayer)
	MY_RELEASE_LAYER(frontLayer)
	MY_RELEASE_LAYER(playerLayer)
}

// ===========================================
// Back Layer
bool BackLayer::init(){
	if( CCLayerColor::initWithColor(ccc4(255,255,255,255))){
		CCSize winSize = CCDirector::sharedDirector()->getWinSize();
		_label = CCLabelTTF::create("Back Layer","Artial",32);
		_label->retain();
		_label->setColor(ccc3(0,0,0));
		_label->setPosition(ccp(winSize.width/2,winSize.height/2));
		this->addChild(_label);


		return true;
	}else{
		return false;
	}
}
BackLayer::~BackLayer(){
	if(_label){
		_label->release();
		_label = NULL;
	}
}
void BackLayer::end(){
	SceneHolder::end();
}
void BackLayer::end(CCObject* pSender){
	SceneHolder::end();
}

void BackLayer::ccTouchesBegan(CCSet *touches, CCEvent *event){
}
void BackLayer::ccTouchesMoved(CCSet *touches, CCEvent *event){
}
void BackLayer::ccTouchesEnded(CCSet *touches, CCEvent *event){
}
void BackLayer::ccTouchesCancelled(CCSet *touches, CCEvent *event){
}
// Front Layer
bool FrontLayer::init(){
	if( CCLayerColor::initWithColor(ccc4(255,255,255,0))){
		CCSize winSize = CCDirector::sharedDirector()->getWinSize();
		_label = CCLabelTTF::create("Front Layer","Artial",32);
		_label->retain();
		_label->setColor(ccc3(0,0,0));
		_label->setPosition(ccp(winSize.width/2,winSize.height/2+100));
		this->addChild(_label);

		
		CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
		CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();
		CCMenuItemImage *pCloseItem = CCMenuItemImage::create(
			"CloseNormal.png",
			"CloseSelected.png",
			this,
			menu_selector(FrontLayer::end));

		pCloseItem->setPosition(ccp(origin.x + visibleSize.width - pCloseItem->getContentSize().width/2 ,
			origin.y + pCloseItem->getContentSize().height/2));
		CCMenu* pMenu = CCMenu::create(pCloseItem, NULL);
		pMenu->setPosition(CCPointZero);
		this->addChild(pMenu, 1);


		return true;
	}else{
		return false;
	}
}
FrontLayer::~FrontLayer(){
	if(_label){
		_label->release();
		_label = NULL;
	}
}
void FrontLayer::end(){
	SceneHolder::end();
}
void FrontLayer::end(CCObject* pSender){
	SceneHolder::end();
}

void FrontLayer::ccTouchesBegan(CCSet *touches, CCEvent *event){
}
void FrontLayer::ccTouchesMoved(CCSet *touches, CCEvent *event){
}
void FrontLayer::ccTouchesEnded(CCSet *touches, CCEvent *event){
}
void FrontLayer::ccTouchesCancelled(CCSet *touches, CCEvent *event){
}
// Player Layer
// =======================================
bool PlayerLayer::init(){
	if( CCLayerColor::initWithColor(ccc4(255,255,255,0))){
		CCSize winSize = CCDirector::sharedDirector()->getWinSize();
		// sprite
		mShip = CCSprite::create("ship.png");
		mShip->setPosition(ccp(winSize.width/2,winSize.height/2));
		this->addChild(mShip,0);
		


		// CCSequence
		//mShip->runAction(CCSequence::create(CCRotateTo::create(5,90),CCBlink::create(6,16),CCJumpBy::create(8,ccp(200,0),100,5),NULL));
		// CCBlink
		//mShip->runAction(CCBlink::create(6,6));
		// CCTintTo
		//mShip->runAction(CCTintTo::create(6,255,0,0));
		// CCFadeOut
		//mShip->runAction(CCFadeOut::create(5));
		// CCFadeIn
		//mShip->runAction(CCFadeIn::create(5));
		// CCJumpBy
		//mShip->runAction(CCJumpBy::create(8,ccp(200,0),100,5));
		// CCJumpTo
		//mShip->runAction(CCJumpTo::create(16,ccp(100,100),30,3));
		// CCMoveBy
		//mShip->runAction(CCMoveBy::create(16,ccp(0,-90)));
		// CCMoveTo
		//mShip->runAction(CCMoveTo::create(16,ccp(winSize.width,winSize.height)));
		// CCRotateBy
		//mShip->runAction(CCRotateBy::create(5,180));
		// CCRotateTo
		//mShip->runAction(CCRotateTo::create(5,90));
		// =======================================
		// end the scene
		//this->runAction(CCSequence::create(CCDelayTime::create(3),CCCallFunc::create(this, callfunc_selector(PlayerLayer::end)), NULL));
		


		return true;
	}else{
		return false;
	}
}
PlayerLayer::~PlayerLayer(){
	if(_label){
		_label->release();
		_label = NULL;
	}
}
void PlayerLayer::end(){
	SceneHolder::end();
}
void PlayerLayer::end(CCObject* pSender){
	SceneHolder::end();
}

void PlayerLayer::ccTouchesBegan(CCSet *touches, CCEvent *event){
}
void PlayerLayer::ccTouchesMoved(CCSet *touches, CCEvent *event){
}
void PlayerLayer::ccTouchesEnded(CCSet *touches, CCEvent *event){
}
void PlayerLayer::ccTouchesCancelled(CCSet *touches, CCEvent *event){
}