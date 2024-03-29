#include <array>
#include <iostream>


double sum(int lB, int hB, double term);


class vector
{
public:
	
  double direction,magnitude;
  
  vector(double d, double m);
  vector();  
  
  vector operator+(const vector& b);
  vector operator*(const vector& b);
};


double theta(const vector& a, const vector& b);

template<unsigned int n, unsigned int m>
class matrix
{ 
public:
  std::array<std::array<int,n>,m> matr;

//These definitions must be inline due to the template parameters :/

matrix operator+(const matrix& b)
{
  matrix mat;
  if(sizeof(mat.matr) != sizeof(this->matr))
  return mat;
	


  for(auto i = 0; i < m; i++)
  {
  	for(auto j = 0; j < n; j++)
	{
	  mat.matr[n][m] = this->matr[n][m] + b.matr[n][m];
	}
  }

  return mat;
}

matrix operator*(const matrix& b)
{
  matrix mat;
 if(sizeof(mat.matr) != sizeof(this->matr))
  return mat;
	
 for(auto i = 0; i < m; i++)
 {
 	for(auto j = 0; j < m; j++)
	{
	  mat.matr[n][m] = this->matr[n][m] + b.matr[n][m]; 
	}
 }

 return mat;
}

};


