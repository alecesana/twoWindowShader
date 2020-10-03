#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

#ifdef TARGET_OPENGLES
	shader.load("shadersES2/shader");
	cout << "we opengles" << endl;

#else
	cout << "we openGL 2 or 3" << endl;

	if (ofIsGLProgrammableRenderer()) {
		cout << "we openGL3" << endl;
		shader.load("shadersGL3/shader");
	}
	else {
		cout << "we openGL 2" << endl;

		shader.load("shadersGL2/shader");
	}

	cout << shader.getShaderSource(GL_FRAGMENT_SHADER) << endl;

#endif
}

//--------------------------------------------------------------
void ofApp::update() {
	//
}

//--------------------------------------------------------------
void ofApp::draw() {
	ofEnableDepthTest();
	cam.begin();
	ofSetColor(255, 255);

	shader.begin();
	//shader.setUniform1f("time", ofGetElapsedTimef());

	//ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
	ofDrawSphere(0, 0, gui->radius);

	shader.end();
	cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}