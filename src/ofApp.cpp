#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowTitle("Hello openFrameworks!"); // Set the window title.
    ofSetWindowShape(510, 255); // Set the width and height of the window.
    ofSetCircleResolution(80); // Ensure that circles are smooth.
    //ofSetFrameRate(1);
    ofSetVerticalSync(false);
    x = ofRandom(radius, ofGetWidth() - radius);
    y = ofRandom(radius, ofGetHeight() - radius);
    xChange = ofRandom(100, 300);
    yChange = ofRandom(100, 300);
}

//--------------------------------------------------------------
void ofApp::update(){
    x += xChange * ofGetLastFrameTime();
    y += yChange * ofGetLastFrameTime();

    if (x < radius || x > ofGetWidth() - radius) {
        xChange *= -1;
    }

    if (y < radius || y > ofGetHeight() - radius) {
        yChange *= -1;
    }

    x = ofClamp(x, radius, ofGetWidth() - radius);
    y = ofClamp(y, radius, ofGetHeight() - radius);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawBitmapStringHighlight("Frame Rate: " + ofToString(ofGetFrameRate(), 0), 20, 20);

    ofDrawCircle(x, y, radius);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
    case 'f':
        ofToggleFullscreen();
        break;
    }
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
