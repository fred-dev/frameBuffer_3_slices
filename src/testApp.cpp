#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    //grabber.setDeviceID(1);
    grabber.initGrabber(1920, 1080);
    firstRun=false;
    ofSetVerticalSync(true);
    ofSetFrameRate(20);
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
         
         imageArrayTop[arrayCounter].setFromPixels(grabber.getPixels(), 1920, 1080, OF_IMAGE_COLOR);
         imageArrayTop[arrayCounter].crop(0, 0, 640, 1080);
        
         imageArrayMiddle[arrayCounter].setFromPixels(grabber.getPixels(), 1920, 1080, OF_IMAGE_COLOR);
         imageArrayMiddle[arrayCounter].crop(640, 0, 640, 1080);
         
         imageArrayBottom[arrayCounter].setFromPixels(grabber.getPixels(), 1920, 1080, OF_IMAGE_COLOR);
         imageArrayBottom[arrayCounter].crop(1280, 0, 640, 1080);
         
         arrayCounter++;
        
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    if (firstRun==false) {
         
        imageArrayTop[int(ofRandom(0, 99))].draw(0, 0);
         imageArrayMiddle[int(ofRandom(0, 99))].draw(640,0);
         imageArrayBottom[int(ofRandom(0, 99))].draw(1280, 0);
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