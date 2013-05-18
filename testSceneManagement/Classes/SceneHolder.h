#ifndef __SCENE_HOLDER_H__
#define __SCENE_HOLDER_H__

#include "TitleScene.h"
#include "MenuScene.h"
class SceneHolder
{
	TitleScene *mTitleScene;
	MenuScene *mMenuScene;
public:
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
};


#endif // !__SCENE_HOLDER_H__
