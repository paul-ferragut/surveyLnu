#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){


	/*
	This is a series of exercises to get familiar with coding data visualizations. Sometimes there a hint if you are blocked with an exercise. Try first to do the exercise without reading the hint. Each small exercise is increasingly more difficult.

	-change the background and bar chart color.

	-change the spacing of the bar chart and the width of the bars. hint: There are already two variables created in draw function to change those parameters, so you only need to tweak the value.

	-the bar chart is aligned from the top. Make it aligned from the bottom. hint: you will need to subtract the value of the rectangle height to the y position of the rectangle.

	-create the other bar charts for the other brands (bayer, monsanto, modern meadow), place those 4 new bar chart under each other. hint: before you can do the bar you will need to assign the value from the .csv file to the variable. see how it's done in setup with boltThread[i]= ofToInt(csv.getRow(i + 1).getString(2));

	-use the function ofDrawBitmapString(string s, int x, int y); to write the name of the brand next to its respective chart.

	-for each bar chart draw a line representing the average value of the result. hint: to calculate an average, add up all the value and divide the sum by the number of values.

	-instead of a bar chart try to create an area graph https://datavizcatalogue.com/methods/images/anatomy/area_graph.png using a for loop and the functions ofBeginShape();    ofVertex();        ofEndShape(); http://openframeworks.cc/documentation/graphics/ofGraphics/#show_ofBeginShape

	-try to have different bar colors within a chart, for instance, a small value is a darker bar and high value is a brighter bar.
	*/



	//load the csv file
	csv.load("survey.csv");


	//loop collecting the value from the csv file
	for (int i = 0; i < 18; i++) {
		studentName[i] = csv.getRow(i + 1).getString(1);
		cout << studentName[i] << endl;
		boltThread[i]= ofToInt(csv.getRow(i + 1).getString(2));
		cout << boltThread[i] << endl;
	}

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	//set the background color
	ofBackground(0, 0, 0);

	//Set bar color
	ofSetColor(179, 195, 221);

	//
	int barSpacing = 6;
	int barWidth = 40;

	//Draw 18 rectangles for the 'bolt thread' answers
	for (int i = 0; i < 18; i++) {
		ofDrawRectangle(100 + (i * (barWidth+ barSpacing)), 100, barWidth, boltThread[i]*10);
	}

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
