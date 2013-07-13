#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    grabber.initGrabber(1920, 1080);
    firstRun=false;
    ofSetVerticalSync(true);
    ofSetFrameRate(25);
}

//--------------------------------------------------------------
void testApp::update(){
    grabber.update();
    if (grabber.isFrameNew()) {
        if (arrayCounter==99) {
            if (firstRun==true) {
                firstRun==false;
            }
            arrayCounter=0;
            
        }
        imageArray[arrayCounter].setFromPixels(grabber.getPixels(), 1920, 1080, OF_IMAGE_COLOR);
        arrayCounter++;
        
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    if (firstRun==false) {
        imageArray[int(ofRandom(0, 99))].draw(0, 0);
    }
    

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}