#include <mlpack/core.hpp>

using namespace mlpack;

int main()
{
	arma::mat data;
	// load the data 
	data::Load("../data/german.csv", data, true);

	arma::mat cov = data  * trans(data) / data.n_cols;

	// save the outptu
	data::Save("cov.csv", cov, true);
}


