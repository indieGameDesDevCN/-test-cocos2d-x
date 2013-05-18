#ifndef __TITLE_SCENE_H__
#define __TITLE_SCENE_H__
#include "cocos2d.h"
using namespace cocos2d;
class TitleSceneLayer;
// =============================================
// Scene
class TitleScene:public CCScene
{
public:
	TitleScene():_layer(NULL){}
	~TitleScene();
	bool init();
	CREATE_FUNC(TitleScene)
	CC_SYNTHESIZE_READONLY(TitleSceneLayer*, _layer, Layer)
};
// =============================================
// Layer
class TitleSceneLayer:public CCLayerColor
{
public:
	TitleSceneLayer():_label(NULL){}
	~TitleSceneLayer();
	bool init();
	CREATE_FUNC(TitleSceneLayer)
	CC_SYNTHESIZE_READONLY(CCLabelTTF*,_label,Label)
};
#endif // !__TITLE_SCENE_H__
