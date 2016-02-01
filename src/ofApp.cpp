#include "ofApp.h"

void ofApp::setup(){
    displayString = "press mouse to fire an event";
    ofAddListener(timeStampEvent, this, &ofApp::eventsIn);
}

void ofApp::update(){
    if( ofGetMousePressed(0) ){
        string str = ofGetTimestampString();
        ofNotifyEvent(timeStampEvent, str, this);
    }
}
void ofApp::draw(){    
    ofSetColor(30);
    ofDrawBitmapString(displayString, 10, 20);
}
void ofApp::eventsIn(string & eventStr){
    cout << "we got an event!" << endl;
    cout << "timestamp is:" <<endl;
    cout << eventStr << endl;
    
    displayString = "last timestamp received: \n" + eventStr;
}

void ofApp::keyPressed(int key){}
void ofApp::keyReleased(int key){}
void ofApp::mouseMoved(int x, int y ){}
void ofApp::mouseDragged(int x, int y, int button){}
void ofApp::mousePressed(int x, int y, int button){}
void ofApp::mouseReleased(int x, int y, int button){}
void ofApp::mouseEntered(int x, int y){}
void ofApp::mouseExited(int x, int y){}
void ofApp::windowResized(int w, int h){}
void ofApp::gotMessage(ofMessage msg){}
void ofApp::dragEvent(ofDragInfo dragInfo){}
