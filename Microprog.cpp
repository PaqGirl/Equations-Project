//============================================================================
// Name        : Microprog.cpp
// Author      : Nina Paquette
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <cmath>
#include <iostream>
using namespace std;

void TotalRevenueComparison()
{
	double priceI;
	double quantityI;
	double priceN;
	double quantityN;

	cout << "Insert Initial Price " << endl;
	cin >> priceI;
	cout << "Insert Initial Quantity " << endl;
	cin >> quantityI;
	cout << "Insert New Price " << endl;
	cin >> priceN;
	cout << "Insert New Quantity " << endl;
	cin >> quantityN;

	double totalRevI = priceI * quantityI ;
	double totalRevN = priceN * quantityN ;

	cout >> "The Origanal Total Revenue is: " <<totalRevI<< " " << endl;
	cout >> "The New Total Revenue is: " <<totalRevN<< " " << endl;


	if ( totalRevN < totalRevI )
	cout << "This Good is Elastic." <<endl;

	if ( totalRevN > totalRevI )
	cout << "This Good is Inelastic." <<endl;

	if ( totalRevN == totalRevI )
	cout << "This Good is Unit Elastic." <<endl;
}

void TotalRevenue()
{
		double priceI;
		double quantityI;
		double totalRevI;

		cout << "Insert Price " << endl;
		cin >> priceI;
		cout << "Insert Quantity " << endl;
		cin >> quantityI;

		totalRevI = priceI * quantityI;

		cout >> "The Total Revenue is: " <<totalRevI<< " " << endl;
}

void ElasticityOfDemand()
{
	double quantityOne;
		double quantityTwo;
		double priceOne;
		double priceTwo;

		cout << "Incert Q1 " << endl;
		cin >> quantityOne;
		cout << "Incert Q2 " << endl;
		cin >> quantityTwo;
		cout << "Incert P1 " << endl;
		cin >> priceTwo;
		cout << "Incert P2 " << endl;
		cin >> priceOne;

//		double elasticityNum = ((quantityTwo - quantityOne)/((quantityOne + quantityTwo)/2));
//		double elasticityDen = ((priceTwo - priceOne)/((priceOne + priceTwo)/2));
		double elasticityOde = ((quantityTwo - quantityOne)/((quantityOne + quantityTwo)/2)) / ((priceTwo - priceOne)/((priceOne + priceTwo)/2));
//		int NumFinal = (int) elasticityNum % (int)elasticityDen;
//		int elasticityMixedNumber = ((quantityTwo - quantityOne)/((quantityOne + quantityTwo)/2)) / ((priceTwo - priceOne)/((priceOne + priceTwo)/2));

//		cout << "The Elasticity of Demand is " <<elasticityMixedNumber<< " " <<NumFinal<< "/" <<elasticityDen<< " " <<endl;
		cout << "The Elasticity of Demand is " <<elasticityOde<< " " <<endl;


		if (elasticityOde > 1)
		cout << "The Demand For This Good is Elastic." <<endl;

		if (elasticityOde < 1)
		cout << "The Demand For This Good is Inelastic." <<endl;

		if (elasticityOde == 1)
		cout << "The Demand For This Good is Unit Elastic." <<endl;

}
void ElasticityOfSupply()
{
		double quantityOne;
		double quantityTwo;
		double priceOne;
		double priceTwo;

		cout << "Incert Q1 " << endl;
		cin >> quantityOne;
		cout << "Incert Q2 " << endl;
		cin >> quantityTwo;
		cout << "Incert P1 " << endl;
		cin >> priceTwo;
		cout << "Incert P2 " << endl;
		cin >> priceOne;

//		int elasticityNum = ((quantityTwo - quantityOne)/((quantityOne + quantityTwo)/2));
//		int elasticityDen = ((priceTwo - priceOne)/((priceOne + priceTwo)/2));
		double elasticitySup = ((quantityTwo - quantityOne)/((quantityOne + quantityTwo)/2)) / ((priceTwo - priceOne)/((priceOne + priceTwo)/2));
//		int NumFinal = elasticityNum % elasticityDen;
//		int elasticityMixedNumber = ((quantityTwo - quantityOne)/((quantityOne + quantityTwo)/2)) / ((priceTwo - priceOne)/((priceOne + priceTwo)/2));

//		cout << "The Elasticity of Supply is " <<elasticityMixedNumber<< " " <<NumFinal<< "/" <<elasticityDen<< " " <<endl;
		cout << "The Elasticity of Supply is " <<elasticitySup<< " " <<endl;


		if (elasticitySup > 1)
		cout << "The Supply For This Good is Elastic." <<endl;

		if (elasticitySup < 1)
		cout << "The Supply For This Good is Inelastic." <<endl;

		if (elasticitySup == 1)
		cout << "The Supply For This Good is Unit Elastic." <<endl;
}
int main()
	{
	   char equasion;

	    cout << "a) Elasticity of Demand" <<endl;
	    cout << "b) Elasticity of Supply"<<endl;
	    cout << "c) Total Revenue of Demand"<<endl;
	    cout << "d) Total Revenues and Elasticity"<<endl;

	    cout << "Select an Equation:";
	    cin >> equasion;
	    switch ( equasion )
	 {
	    case 'a':
	    	ElasticityOfDemand();
	        break;
	    case 'b':
	        ElasticityOfSupply();
	        break;
	    case 'c':
	    	TotalRevenue();
	        break;
	    case 'd':
	    	TotalRevenueComparison();
	        break;
	    default:
	          cout << "ERROR, bad in in in in i akajddffvf$&fydcivgei *self-destructing*"<<endl;
	          break;
	}
 }
