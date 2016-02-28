#pragma once

#include "ofMain.h"
#include "ofxBox2d.h"
#include "MyContactListener.hpp"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        // Box2dのインスタンス
        ofxBox2d    box2d;
    
        // 作成する円の数
        static const int NUM = 20;
    
        // Box2d内の円
        ofxBox2dCircle circle[NUM];

        // 衝突クラスのインスタンス変数
        MyContactListener myContacts;
};
