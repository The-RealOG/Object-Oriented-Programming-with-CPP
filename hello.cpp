#include <iostream>
#include <string>

using namespace std;

//CLASS DECLARATION

class Cars {
    private:
        string company_name;
        string model_name;
        string fuel_type;
        float mileage;
        double price;


    public:
        //public methods

        //default constructor
        Cars() {
            cout << "Default constructor called" << endl;
        }

        //parameterized constructor
        Cars(string mname, string ftype, float m, double p) {
            model_name = mname;
            fuel_type = ftype;
            mileage = m;
            price = p;
        }

        //Other Methods
        void setCompanyName(string cname, string mname, string ftype, float m, double p) {
            company_name = cname;
            model_name = mname;
            fuel_type = ftype;
            mileage = m;
            price = p;
        }
        void displayData() {
            cout << "Company Name: " << company_name << "is working" << endl;
            cout << "Model Name: " << model_name << endl;
            cout << "Fuel Type: " << fuel_type << endl;
            cout << "Mileage: " << mileage << endl;
            cout << "Price: " << price << endl;
        }

};

int main () {
    Cars car1;
    Cars car2("BMW", "Petrol", 15.5, 5000000);
    car1.displayData();
    car2.displayData();


}