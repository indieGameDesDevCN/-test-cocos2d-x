#ifndef __SCENE_HOLDER_H__
#define __SCENE_HOLDER_H__
#include "cocos2d.h"
#include "TitleScene.h"
#include "MenuScene.h"
#include "PlayScene.h"
using namespace cocos2d;

class SceneHolder
{
public:
	// ===========================
	// names
	enum SceneName {
		Title,
		Menu,
		Play
	};
	// ===========================
	SceneHolder(){}
	~SceneHolder(){}
	static CCScene* initSceneByName(SceneName name);
	static void replaceSceneByName(SceneName name);
	static void end();
};

#endif // !__SCENE_HOLDER_H__
