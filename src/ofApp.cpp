#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    // 物理空間の初期化
    box2d.init();
    // 重力の設定
    box2d.setGravity(0, 0.98);
    // 地面の設定
    box2d.createBounds();
    
    // Box2Dの空間のフレームレートの設定
    box2d.setFPS(30);
    
    for(int i=0; i<NUM; i++){
        // 円に対して物理法則を追加
        // 第一引数 : 質量
        // 第二引数 : 跳ね返り係数
        // 第三引数 : 摩擦係数
        circle[i].setPhysics(10.0, 1.0, 0.01);
        
        // 円の中心座標
        float x = ofRandom(0, ofGetWidth());
        float y = ofGetHeight()/3;
        // 円の半径
        float radius = ofRandom(10, 50);
        
        // 円をBox2dの空間に追加
        circle[i].setup(box2d.getWorld(), x, y, radius);
        
        // 各Box2dオブジェクトにユーザデータを設定する
        int circleNo = i+ 1;
        circle[i].body->SetUserData((void*)circleNo);
    }
    
    // 衝突感知のリスナーの設定関数にmyContactsを引数で渡す
    box2d.getWorld()->SetContactListener(&myContacts);
}

//--------------------------------------------------------------
void ofApp::update(){
    // Box2Dの更新
    box2d.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 円の色
    ofSetColor(255, 255, 255);
    for(int i=0; i<NUM; i++){
        // Box2d空間の円を描画
        circle[i].draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}