#include"TitleScene.h"

using namespace cocos2d;

bool TitleScene::init(){
	if( CCScene::init()){
		this->_layer = TitleSceneLayer::create();
		this->_layer->retain();
		this->addChild(_layer);
		return true;
	}else{
		return false;
	}
}
TitleScene::~TitleScene(){
	if(_layer){
		_layer->release();
		_layer = NULL;
	}
}

// ===========================================
// Layer
bool TitleSceneLayer::init(){
	if( CCLayerColor::initWithColor(ccc4(255,255,255,1))){
		CCSize winSize = CCDirector::sharedDirector()->getWinSize();
		_label = CCLabelTTF::create("Hello, cocos2d-x!","Artial",32);
		_label->retain();
		_label->setColor(ccc3(0,0,0));
		_label->setPosition(ccp(winSize.width/2,winSize.height/2));
		this->addChild(_label);
		return true;
	}else{
		return false;
	}
}
TitleSceneLayer::~TitleSceneLayer(){
	if(_label){
		_label->release();
		_label = NULL;
	}
}