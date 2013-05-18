#ifndef __SCENE_HOLDER_H__
#define __SCENE_HOLDER_H__
#include "cocos2d.h"
#include "TitleScene.h"
#include "MenuScene.h"
using namespace cocos2d;

class SceneHolder
{
	TitleScene *mTitleScene;
	MenuScene *mMenuScene;
public:
	// ===========================
	// names
	enum SceneName {
		Title,
		Menu
	};
	// ===========================
	SceneHolder(){
		mTitleScene = NULL;
		mMenuScene = NULL;
	}
	~SceneHolder(){
		if(mTitleScene){
			delete mTitleScene;
			mTitleScene = NULL;
		}
		if(mMenuScene){
			delete mMenuScene;
			mMenuScene = NULL;
		}
	}
	CCScene* initSceneByName(SceneName name);
	void replaceSceneByName(SceneName name);
};

static SceneHolder *mSceneHolder = new SceneHolder;

#endif // !__SCENE_HOLDER_H__
