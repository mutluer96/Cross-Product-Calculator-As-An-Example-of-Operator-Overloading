#include<iostream>

using namespace std;

class vector3d 
{
private:
	double i, j, k;
public:
	vector3d(double i = 0, double j = 0, double k = 0) :i{ i }, k{ k }, j{ j } {}
	double getI() { return i; }
	double getJ() { return j; }
	double getK() { return k; }
	void setI(double i) { this->i= i; }
	void setJ(double j) { this->j = j; }
	void setK(double k) { this->k = k; }
	vector3d operator* ( vector3d &vec)
	{
		vector3d crossProductVector;
		double resultantI, resultantJ, resultantK;
		resultantI = (this->j)*vec.getK()-(this->k)*vec.getJ();
		resultantJ = -1*((this->i)*vec.getK() - (this->k)*vec.getI());
		resultantK = (this->i)*vec.getJ() - (this->j)*vec.getI();

		crossProductVector.setI(resultantI);
		crossProductVector.setJ(resultantJ);
		crossProductVector.setK(resultantK);

		return crossProductVector;
	}
	void printVector()
	{
		cout << endl;
		cout << "i head: " << i << endl << "j head: " << j << endl << "k head: " << k << " " << endl;
	}

};

void main()
{
	cout << "Welcome to Cross Product Calculator\n You will be asked for values of vectors.Fractional values are also valid.";
	cout << "\n The order of cross product matters.";
	double ai, aj, ak, bi, bj, bk;
	cout << "\nWhat is the i value of the first vector? ";
	cin >> ai;
	cout << "\nWhat is the j value of the first vector? ";
	cin >> aj;
	cout << "\nWhat is the k value of the first vector? ";
	cin >> ak;
	cout << "\nWhat is the i value of the second vector? ";
	cin >> bi;
	cout << "\nWhat is the j value of the second vector? ";
	cin >> bj;
	cout << "\nWhat is the k value of the second vector? ";
	cin >> bk;
	vector3d A(ai, aj, ak);

	vector3d B(bi, bj, bk);
	(A*B).printVector();
	system("Pause");
}