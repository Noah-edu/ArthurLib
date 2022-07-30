#include <array>


struct vector
{
  double direction,magnitude;
  
  vector(double d, double m);
  vector();  
  
  vector operator+(const vector& b);
  vector operator*(int b);
};

template<unsigned int n, unsigned int m>
struct matrix
{ 
  std::array<std::array<int,n>,m> matr;

//These definitions must be inline due to the template parameters :/

void print()
{
  for(int i = 0; i < m;i++)
  {
    for(int j = 0; j < n; j++)
    {
      std::cout << matr[j][i] << ',';
    }
    std::cout << '\n';
  }

}

matrix operator+(const matrix& b)
{
  matrix mat;

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