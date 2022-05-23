
1.
If the constructors were private, then we would not be able to create any Point objects.
2.
When a Polygon is destroyed, the counter for number of Polygons created is decremented, and the PointArray’s destructor is implicitly called.
3.
We had to make the fields of Polygon protected so that they could be accessed from Rectangle and Triangle, but not by arbitrary outside code.
4.
The getNumSides from Polygon would be called, because the function is not virtual.
