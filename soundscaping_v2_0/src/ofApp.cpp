#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetFrameRate(60);
    
    kin.setupKinect();
    gst.linkSkeleton(kin.skeleton, kin.activeSkeleton);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    kin.requestAllJoints(2);
    kin.updateAllJoints();
    kin.updateState();
    
    gst.processSkeleton(kin.skeleton, kin.activeSkeleton);
    gst.playAudio(kin.skeleton, kin.activeSkeleton);
    
    // magnitude of the avg velocity of the right hand
//    cout << kin.joints["righthand"].avgVelocity.length() << endl;
    
//    cout << kin.skeleton["righthand"].position.x << "  " << kin.skeleton["righthand"].position.y << "  " << kin.skeleton["righthand"].position.z << endl;

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofDrawBitmapStringHighlight(ofToString(ofGetFrameRate()), 10, 20);

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
