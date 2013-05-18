#include "SceneHolder.h"

#include <stdexcept>
using namespace std;
using namespace cocos2d;
CCScene* SceneHolder::initSceneByName(SceneName name){
	if(name == SceneName::Title){
		this->mTitleScene = TitleScene::create();
		return mTitleScene;
	}else if(name == SceneName::Menu){
		this->mMenuScene = MenuScene::create();
		return mMenuScene;
	}else{
		cerr<<"error: no such name.";
		throw("unmatch scene name");
	}
}
void SceneHolder::replaceSceneByName(SceneName name){
	CCDirector::sharedDirector()->replaceScene(initSceneByName(name));
}