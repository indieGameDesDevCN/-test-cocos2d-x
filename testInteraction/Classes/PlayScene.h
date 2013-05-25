#ifndef __PLAY_SCENE_H__
#define __PLAY_SCENE_H__
#include "cocos2d.h"
using namespace cocos2d;
// =============================================
// Player
class PlayerLayer:public CCLayerColor
{
public:
	PlayerLayer():_label(NULL){}
	~PlayerLayer();
	bool init();
	CREATE_FUNC(PlayerLayer)
	CC_SYNTHESIZE_READONLY(CCLabelTTF*,_label,Label)

	void ccTouchesBegan(CCSet *touches, CCEvent *event);
	void ccTouchesMoved(CCSet *touches, CCEvent *event);
	void ccTouchesEnded(CCSet *touches, CCEvent *event);
	void ccTouchesCancelled(CCSet *touches, CCEvent *event);
private:
	void end();
	void end(CCObject* pSender);
private:
	CCSprite *mShip;
};
// Back
class BackLayer:public CCLayerColor
{
public:
	BackLayer():_label(NULL){}
	~BackLayer();
	bool init();
	CREATE_FUNC(BackLayer)
	CC_SYNTHESIZE_READONLY(CCLabelTTF*,_label,Label)

	void ccTouchesBegan(CCSet *touches, CCEvent *event);
	void ccTouchesMoved(CCSet *touches, CCEvent *event);
	void ccTouchesEnded(CCSet *touches, CCEvent *event);
	void ccTouchesCancelled(CCSet *touches, CCEvent *event);
private:
	void end();
	void end(CCObject* pSender);
};
// Front
class FrontLayer:public CCLayerColor
{
public:
	FrontLayer():_label(NULL){}
	~FrontLayer();
	bool init();
	CREATE_FUNC(FrontLayer)
	CC_SYNTHESIZE_READONLY(CCLabelTTF*,_label,Label)

	void ccTouchesBegan(CCSet *touches, CCEvent *event);
	void ccTouchesMoved(CCSet *touches, CCEvent *event);
	void ccTouchesEnded(CCSet *touches, CCEvent *event);
	void ccTouchesCancelled(CCSet *touches, CCEvent *event);
private:
	void end();
	void end(CCObject* pSender);
};
// =============================================
// Scene
class PlayScene:public CCScene
{
public:
	PlayScene():playerLayer(NULL),frontLayer(NULL),backLayer(NULL){}
	~PlayScene();
	bool init();
	CREATE_FUNC(PlayScene)
	CC_SYNTHESIZE_READONLY(PlayerLayer*, playerLayer, PlayerLayer)
	CC_SYNTHESIZE_READONLY(FrontLayer*, frontLayer, FrontLayer)
	CC_SYNTHESIZE_READONLY(BackLayer*, backLayer, BackLayer)
};
#endif // !__PLAY_SCENE_H__
