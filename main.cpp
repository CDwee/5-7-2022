// Started at 2:23 5-7-2022

// Section 11
// Function prototypes
// Area of Circle and Volume of a Cylinder
#include <iostream>

using namespace std;

// Function prototypes
double calc_volume_cylinder(double radius, double height);
double calc_area_circle(double);
void area_circle();
void volume_cylinder();


const double pi {3.14159};

int main() {    
    area_circle();
    volume_cylinder();
    return 0;
}

double calc_volume_cylinder(double radius, double height) {
//    return pi * radius * radius * height;
    return calc_area_circle(radius) * height;
}

double calc_area_circle(double radius) {
    return pi * radius * radius;
}

void area_circle() {
    double radius{};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    double radius{};
    double height{};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "\nEnter the height of the cylinder: ";
    cin >> height;
    
    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}

// Section 11
// Function Parameters
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1(int num) {
    num = 1000;
}

void pass_by_value2(string s) {
    s = "Changed";
}

void pass_by_value3(vector<string> v) {
    v.clear();      // delete all vector elements
}

void print_vector(vector<string> v) {
    for(auto s: v)
        cout << s << " ";
    cout << endl;
}

int main() {
    int num {10};
    int another_num {20};
    
    cout << "num before calling pass_buy_value1: " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_buy_value1: " << num << endl;
    
    cout << "\nanother_num before calling pass_by_value1: " << another_num << endl;
    pass_by_value1(another_num);
    cout << "another_num after calling pass_by_value1: " << another_num << endl;

    string name {"Frank"};
    cout << "\nname before calling pass_by_value2: " << name << endl;
    pass_by_value2(name);
    cout << "name after calling calling pass_by_value2: " << name << endl;
    
    vector<string> stooges {"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass_by_value3: ";
    print_vector(stooges);
    pass_by_value3(stooges);
    cout << "stooges before calling pass_by_value3: "; 
    print_vector(stooges);
    
    cout << endl;
    return 0;
}

// Section 11
// Default Arguments
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double calc_cost(double base_cost = 100.0, double tax_rate = 0.06, double shipping = 3.50);

void greeting(string name, string prefix = "Mr.", string suffix = "");

double calc_cost(double base_cost, double tax_rate, double shipping) {
    return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting(string name, string prefix, string suffix) {
    cout << "Hello " << prefix + " " + name + " " + suffix << endl;
}


int main() {
    double cost{ 0 };
    cost = calc_cost(100.0, 0.08, 4.25);        // will use no defaults  100 + 8 + 4.25

    cout << fixed << setprecision(2);
    cout << "Cost is: " << cost << endl;    // 112.25

    cost = calc_cost(100.0, 0.08);                  // will use default shipping  100 + 8 + 3.50
    cout << "Cost is: " << cost << endl;    // 111.50

    cost = calc_cost(200.0);                         // will use default tax and shipping   200 + 12 + 3.50
    cout << "Cost is: " << cost << endl;    // 215.50

    cost = calc_cost();
    cout << "Cost is: " << cost << endl;    // 100 + 6 + 3.50
    
    greeting("Glenn Jones", "Dr.", "M.D.");
    greeting("James Rogers", "Professor","Ph.D.");
    greeting("Frank Miller", "Dr.");
    greeting("William Smith");
    greeting("Mary Howard", "Mrs.", "Ph.D.");

    cout << endl;
    return 0;
}

// Ended at 6:25 5-7-2022
