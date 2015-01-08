#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    vidGrabber.initGrabber(320, 240);
}

//--------------------------------------------------------------
void ofApp::update(){
    vidGrabber.update();
    if (vidGrabber.isFrameNew()) {
        detector.findFaces(vidGrabber.getPixelsRef());
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    vidGrabber.draw(0, 0);
    int size = detector.size();
    ofNoFill();
    ofSetColor(ofColor::yellow);
    for (int i=0; i<size; ++i) {
        ofRect(detector.getFace(i));
    }
    ofSetColor(ofColor::white);
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
