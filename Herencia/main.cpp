#include <iostream>

class Renderer
{
public:
	int x, y;

	virtual void Render() = 0;
};

class Image : public Renderer
{
public:
	void Render() override
	{
		std::cout << "I am an image" << std::endl;
	}
};