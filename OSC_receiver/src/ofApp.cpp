#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    receiver.setup(PORT);
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    while(receiver.hasWaitingMessages()){
        
        ofxOscMessage m;
        receiver.getNextMessage(&m);
        
        if(m.getAddress()=="/touchDown"){
            c_r=m.getArgAsInt32(0);
            c_g=m.getArgAsInt32(1);
            c_b=m.getArgAsInt32(2);
        }
        
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    
    //ofSetColor(0);
    //ofDrawCircle(remoteMouse.x,remoteMouse.y,30);
    
    ofSetColor(c_r,c_g,c_b);
    ofDrawCircle(ofGetWidth()/2,ofGetHeight()/2 , 30);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
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
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
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
