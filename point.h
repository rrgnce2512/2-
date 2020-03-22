

class Point {
private:
	double x;
	double y;
public:
	// Get Set
	double getX();
	void setX(double X);
	double getY();
	void setY(double Y);
	//

	// Constructirs
	Point();
	Point(double X, double Y);
	Point(const Point& a);
	//

	// Destructor
	~Point();
	//

	// print point
	void Print();
	//

	bool operator==(const Point& b);

	const Point operator+ (const Point& b) const;
	const Point operator- (const Point& b) const;

	Point& operator+= (const Point& b);
	Point& operator-= (const Point& b);

	Point& operator*= (double c);
	Point& operator/= (double c);

	friend std::istream& operator>>(std::istream& in, Point& c);
	friend std::ostream& operator<< (std::ostream& out, Point& c);

};