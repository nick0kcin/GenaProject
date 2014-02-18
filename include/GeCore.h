#pragma once

typedef int UID;

class GeCore
{
	//GeUI _ui;

public:
	GeCore(void);
	~GeCore(void);
	UID addPoint(double x, double y);
	UID addLine(double x1, double y1,double x2, double y2);
	UID addCircle(double x, double y,double R);

	UID addConstraint();

	void remove(UID);
};

