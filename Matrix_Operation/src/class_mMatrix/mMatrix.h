
class mMatrix {

	bool error;

public:
	int rSize, cSize;
	float **matrix;

	//Constructors
	mMatrix();
	mMatrix(int);
	mMatrix(int, int);

	~mMatrix();

	//Simple function
	void tellMeASicret();

	//Functions for crating and filling matries
	void mShow();
	void mFill(float);
	void setSize(int);
	void setSize(int, int);

	//Functions for operating with matrices
	mMatrix add(mMatrix);
	mMatrix operator+(mMatrix);
	mMatrix sub(mMatrix);
	mMatrix operator-(mMatrix);

	

private:
	void mEmpty();
};

