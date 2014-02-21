#pragma once

class GeUI
{
	//GeCore *_core;
public:
	GeUI(void);
	~GeUI(void);
	//void setCore(GeCore* );

	void drawPoint(double x,double y);
	void drawLine(double x1, double y1,double x2, double y2);
	void drawCircle(double x, double y,double R);
};

