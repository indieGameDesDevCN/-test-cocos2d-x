#ifndef __PLAY_SCENE_H__
#define __PLAY_SCENE_H__
#include "cocos2d.h"
using namespace cocos2d;
// =============================================
// Layer
class PlaySceneLayer:public CCLayerColor
{
public:
	PlaySceneLayer():_label(NULL){}
	~PlaySceneLayer();
	bool init();
	CREATE_FUNC(PlaySceneLayer)
	CC_SYNTHESIZE_READONLY(CCLabelTTF*,_label,Label)
private:
	void end();
};
// =============================================
// Scene
class PlayScene:public CCScene
{
public:
	PlayScene():_layer(NULL){}
	~PlayScene();
	bool init();
	CREATE_FUNC(PlayScene)
	CC_SYNTHESIZE_READONLY(PlaySceneLayer*, _layer, Layer)
};
#endif // !__PLAY_SCENE_H__
