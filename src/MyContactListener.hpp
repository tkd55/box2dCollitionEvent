//
//  MyContactListener.hpp
//  emptyExample
//
//  Created by 武田 智道 on 2016/02/28.
//
//

#ifndef MyContactListener_hpp
#define MyContactListener_hpp

#include <stdio.h>
#include "ofxBox2d.h"

class MyContactListener : public b2ContactListener {
    
public:
    // コンストラクタ関数
    MyContactListener();
    // 衝突した時に呼ばれる関数
    void PostSolve(b2Contact* contact, const b2ContactImpulse* impulse);
};


#endif /* MyContactListener_hpp */