//
//  MyContactListener.cpp
//  emptyExample
//
//  Created by 武田 智道 on 2016/01/31.
//
//

#include "MyContactListener.hpp"

// コンストラクタ関数
MyContactListener::MyContactListener(){
    
}

// 衝突した時に呼ばれる関数
void MyContactListener::PostSolve(b2Contact* contact, const b2ContactImpulse* impulse){
    
    // 衝突した時の力
    float force = impulse->normalImpulses[0];
    
    // 衝突したものの番号を取得する
    void* bodyA = contact->GetFixtureA()->GetBody()->GetUserData();
    void* bodyB = contact->GetFixtureB()->GetBody()->GetUserData();
    
    // 番号が設定されているかチェック！
    if(bodyA && bodyB){
        // 設定されているならば、番号を取得する
        int noA = (int)bodyA;
        int noB = (int)bodyB;
        
        // 衝突したBox2dオブジェクトのユーザデータを表示する
        printf("Box2d Object A : %d\n", noA);
        printf("Box2d Object B : %d\n", noB);
    }
}
