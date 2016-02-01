#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

public:
    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    
    //note the type of the argument has to be the same as the type of ofEvent - in this case a string
    //also note the & - without it the notification will not happen
    void eventsIn( string & eventStr );
    
    //this object 'timeStampEvent' allows anyone that adds a listener to it, to get notfication of that event.
    //sometimes it makes sense to have the event be a global variable so muliple classes can register for notification.
    ofEvent <string> timeStampEvent;
    string displayString;
		
};
