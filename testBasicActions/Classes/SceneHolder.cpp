#include "SceneHolder.h"

#include <stdexcept>
using namespace std;
using namespace cocos2d;
CCScene* SceneHolder::initSceneByName(SceneName name){
	if(name == SceneName::Title){
		CCScene *pScene = TitleScene::create();
		return pScene;
	}else if(name == SceneName::Menu){
		CCScene *pScene = MenuScene::create();
		return pScene;
	}else if(name == SceneName::Play){
		CCScene *pScene = PlayScene::create();
		return pScene;
	}else{
		cerr<<"error: no such name.";
		throw("unmatch scene name");
	}
}
void SceneHolder::replaceSceneByName(SceneName name){
	CCDirector::sharedDirector()->replaceScene(initSceneByName(name));
}
void SceneHolder::end(){
	CCDirector::sharedDirector()->end();
}