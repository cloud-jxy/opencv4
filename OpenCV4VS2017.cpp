// OpenCV4VS2017.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "opencvtest.h"

int main()
{
	opencvtest testClass;
	//testClass.deepLearningCaffeModel();
	testClass.deepLearningTensorFlowModel();
    return 0;
}

