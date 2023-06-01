class Hero
{
public:
	Hero();
	
	void move_forward();
	void move_backward();
	void move_right();
	void move_left();
	void locate(int _x, int _y);
	void draw();
	
	~Hero();
	
private:
	int posX;
	int posY;
};
