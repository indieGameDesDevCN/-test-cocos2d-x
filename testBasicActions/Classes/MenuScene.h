#ifndef __MENU_SCENE_H__
#define __MENU_SCENE_H__
#include "cocos2d.h"
using namespace cocos2d;
// =============================================
// Layer
class MenuSceneLayer:public CCLayerColor
{
public:
	MenuSceneLayer():_label(NULL){}
	~MenuSceneLayer();
	bool init();
	CREATE_FUNC(MenuSceneLayer)
	CC_SYNTHESIZE_READONLY(CCLabelTTF*,_label,Label)
private:
	void end();
};
// =============================================
// Scene
class MenuScene:public CCScene
{
public:
	MenuScene():_layer(NULL){}
	~MenuScene();
	bool init();
	CREATE_FUNC(MenuScene)
	CC_SYNTHESIZE_READONLY(MenuSceneLayer*, _layer, Layer)
};
#endif // !__MENU_SCENE_H__
