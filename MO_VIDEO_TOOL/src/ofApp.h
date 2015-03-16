#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxDelaunay.h"
#include "ofxGeometricStuff.h"

class ofApp : public ofBaseApp{

    public:
        void setup();
        void update();
        void draw();
        void exit();

        void keyPressed(int key);
        void keyReleased(int key);
        void mouseMoved(int x, int y );
        void mouseDragged(int x, int y, int button);
        void mousePressed(int x, int y, int button);
        void mouseReleased(int x, int y, int button);
        void windowResized(int w, int h);
        void dragEvent(ofDragInfo dragInfo);
        void gotMessage(ofMessage msg);
    
        void radiusChanged(float &r);
    
        ofVideoPlayer 		fingerMovie;
        bool                isPlaying;
    
        //GeometricStuff
        Attractor myAttractor;
        Attractor myRepeller;
        vector<Node> myNodes;
        ofxDelaunay triangulation;
    
        //forces
        float a_angle_deg_x;
        float a_angle_deg_y;
        float a_speed;
        float r_angle_deg_x;
        float r_angle_deg_y;
        float r_speed;
        float maxTriangleArea;
    
        //internal settings
        float camWidth;
        float camHeight;
        bool showHelp;
        ofRectangle outputWindow;
    
        ofxPanel gui;
        ofParameter<float> radius;
};