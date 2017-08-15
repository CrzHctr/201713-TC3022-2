#pragma once

#include <string>

class Circle
{
public:
	Circle();
	Circle(double r);
	Circle(double r, std::string c);

	double GetArea();
	double GetRadius();
	std::string GetColor();

	void SetRadius(double r);
	void SetColor(std::string c);
private:
	double _radius;
	std::string _color;
};