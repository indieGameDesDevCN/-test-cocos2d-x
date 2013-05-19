#include"SceneHolder.h"

using namespace cocos2d;

bool PlayScene::init(){
	if( CCScene::init()){
		this->_layer = PlaySceneLayer::create();
		this->_layer->retain();
		this->addChild(_layer);
		return true;
	}else{
		return false;
	}
}
PlayScene::~PlayScene(){
	if(_layer){
		_layer->release();
		_layer = NULL;
	}
}

// ===========================================
// Layer
bool PlaySceneLayer::init(){
	if( CCLayerColor::initWithColor(ccc4(255,255,255,255))){
		CCSize winSize = CCDirector::sharedDirector()->getWinSize();
		_label = CCLabelTTF::create("Playing the Game ..............","Artial",32);
		_label->retain();
		_label->setColor(ccc3(0,0,0));
		_label->setPosition(ccp(winSize.width/2,winSize.height/2));
		this->addChild(_label);

		//this->runAction(CCSequence::create(CCDelayTime::create(3),CCCallFunc::create(this, callfunc_selector(PlaySceneLayer::end)), NULL));
		CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
		CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();
		CCMenuItemImage *pCloseItem = CCMenuItemImage::create(
			"CloseNormal.png",
			"CloseSelected.png",
			this,
			menu_selector(PlaySceneLayer::end));

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
PlaySceneLayer::~PlaySceneLayer(){
	if(_label){
		_label->release();
		_label = NULL;
	}
}
void PlaySceneLayer::end(){
	SceneHolder::end();
}
void PlaySceneLayer::end(CCObject* pSender){
	SceneHolder::end();
}