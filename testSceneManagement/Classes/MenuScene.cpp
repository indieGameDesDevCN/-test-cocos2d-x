#include "SceneHolder.h"

using namespace cocos2d;

bool MenuScene::init(){
	if( CCScene::init()){
		this->_layer = MenuSceneLayer::create();
		this->_layer->retain();
		this->addChild(_layer);
		return true;
	}else{
		return false;
	}
}
MenuScene::~MenuScene(){
	if(_layer){
		_layer->release();
		_layer = NULL;
	}
}

// ===========================================
// Layer
bool MenuSceneLayer::init(){
	if( CCLayerColor::initWithColor(ccc4(255,255,255,255))){
		CCSize winSize = CCDirector::sharedDirector()->getWinSize();
		_label = CCLabelTTF::create("This is Menu Scene","Artial",32);
		_label->retain();
		_label->setColor(ccc3(0,0,0));
		_label->setPosition(ccp(winSize.width/2,winSize.height/2));
		this->addChild(_label);
		return true;
	}else{
		return false;
	}
}
MenuSceneLayer::~MenuSceneLayer(){
	if(_label){
		_label->release();
		_label = NULL;
	}
}