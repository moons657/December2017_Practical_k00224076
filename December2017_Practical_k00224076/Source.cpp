#include <iostream>
#include "CCustomer.h"
#include "CVehicle.h"
#include "CCustomer.h"
#include "CCar.h"
#include "CVan.h"


//Keith Mooney-k00224076-05-Dec-2017
//December Practical Exam

using namespace std;



int main()
{
	
	CCustomer aCustomer("Brian", "085112345", "154 Kylemore", "123456789876");
	CCar aCar("Brian", "123 Kylemore", "087654345", "124356431243", "Mazda", "323", "06-MH-5643", true, 5, false, false);
	CCar bCar("John", "231 Oakleighwood", "0876543421", "123245765433", "Audi", "A4", "17-D-3421", false, 5, false, false);
	CVan aVan("Tony", "122 Cois Luchra", "0874432132", "921256743212", "Ford", "Transit", "12-C-2343", false, 3, true);

	//Test code//
	//cout << "Test of car class" << endl;
	//cout << "Name: " << aCar.getCusname()<<endl;
	//cout << "Address: " << aCar.getCusaddress()<<endl;
	//cout << "Phone No: " << aCar.getCusnumber()<<endl;
	//cout << "Credit card No: " << aCar.getCuscreditcard()<<endl;
	//cout << "Make of car: " << aCar.getVecmake()<<endl;
	//cout << "Model of car: " << aCar.getVecmodel()<<endl;
	//cout << "Reg No. of car: " << aCar.getVecregno()<<endl;
	//cout << "Is car rented: " << aCar.getRent()<<endl;
	//cout << "No. doors: " << aCar.getNumdoors() << endl;
	//cout << "Is car an auto: " << aCar.getAuto() << endl;
	//cout << "Is car a convertible: " << aCar.getConvertible() << endl;

	cout << endl;
	aCar.printDetails();
	cout << endl;
	bCar.printDetails();
	cout << endl;
	aVan.printDetails();

	
	/*cout << "Test of Customer class" << endl;
	cout <<"Name: "<< aCustomer.getCusname() << endl;
	cout <<"Address: "<< aCustomer.getCusaddress()<< endl;
	cout <<"Number: "<< aCustomer.getCusnumber()<< endl;
	cout <<"Creditcard: "<< aCustomer.getCuscreditcard() << endl;*/

	//cout << "Test of Vehicle class" << endl;
	//cout << "Name: " << aVehicle.getCusname() << endl;
	//cout << "Address: " << aVehicle.getCusaddress() << endl;
	//cout << "Number: " << aVehicle.getCusnumber() << endl;
	//cout << "Creditcard: " << aVehicle.getCuscreditcard() << endl;
	//cout << "Make of car: " << aVehicle.getVecmake() << endl;
	//cout << "Model of car: " << aVehicle.getVecmodel() << endl;
	//cout << "Reg of car: " << aVehicle.getVecregno() << endl;
	

	cin.get();
	cin.get();










}