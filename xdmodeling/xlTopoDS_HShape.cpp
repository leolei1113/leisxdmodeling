#include "xlTopoDS_HShape.h"

xlTopoDS_HShape::xlTopoDS_HShape() :m_bcoedge(false)
{
	mypid = "";
}

xlTopoDS_HShape::xlTopoDS_HShape(const TopoDS_Shape& aShape) 
	: myShape(aShape), m_bcoedge(false)
{
	mypid = "";
}

void xlTopoDS_HShape::Shape(const TopoDS_Shape& aShape)
{
	myShape = aShape;
}

const TopoDS_Shape& xlTopoDS_HShape::Shape() const
{
	return myShape;
}

TopoDS_Shape& xlTopoDS_HShape::ChangeShape()
{
	return myShape;
}