#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofRectangle bounds = ofRectangle(0, 0, ofGetWidth(), ofGetHeight());
    // load image
    image.load("girl.jpg");
    // print image
    //image.draw(0, 0);
    //
    int pointDensity1 = 9000;
    int threshold1 = 25;
    for(int i=0; i<pointDensity1; i++){ // loop through potential points
        // if random potential point
        int x = ofRandomWidth();
        int y = ofRandomHeight();
        ofColor c = image.getColor(x, y);
        if(c.getLightness() < threshold1){
            ofVec2f point;
            point.set(x,y);
            loopPoints1.push_back(point);
        }
    }

    pointDensity1 = 750;
    threshold1 = 100;
    for(int i=0; i<pointDensity1; i++){ // loop through potential points
        // if random potential point
        int x = ofRandomWidth();
        int y = ofRandomHeight();
        ofColor c = image.getColor(x, y);
        if(c.getLightness() < threshold1){
            ofVec2f point;
            point.set(x,y);
            loopPoints1.push_back(point);
        }
    }

    pointDensity1 = 250;
    threshold1 = 150;
    for(int i=0; i<pointDensity1; i++){ // loop through potential points
        // if random potential point
        int x = ofRandomWidth();
        int y = ofRandomHeight();
        ofColor c = image.getColor(x, y);
        if(c.getLightness() < threshold1){
            ofVec2f point;
            point.set(x,y);
            loopPoints1.push_back(point);
        }
    }

    pointDensity1 = 100;
    threshold1 = 200;
    for(int i=0; i<pointDensity1; i++){ // loop through potential points
        // if random potential point
        int x = ofRandomWidth();
        int y = ofRandomHeight();
        ofColor c = image.getColor(x, y);
        if(c.getLightness() < threshold1){
            ofVec2f point;
            point.set(x,y);
            loopPoints1.push_back(point);
        }
    }

    pointDensity1 = 50;
    threshold1 = 225;
    for(int i=0; i<pointDensity1; i++){ // loop through potential points
        // if random potential point
        int x = ofRandomWidth();
        int y = ofRandomHeight();
        ofColor c = image.getColor(x, y);
        if(c.getLightness() < threshold1){
            ofVec2f point;
            point.set(x,y);
            loopPoints1.push_back(point);
        }
    }

    voronoi.setBounds(bounds);
    voronoi.setPoints(loopPoints1);
    voronoi.generate();
}

//--------------------------------------------------------------


//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    voronoi.draw();

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
