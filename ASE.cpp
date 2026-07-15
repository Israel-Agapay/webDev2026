#include <iostream>
#include <vector>
#include <map>
#include <algorithm>  
#include <string>

// using namespace std;

    // void addFive(int* num){
    //     *num = *num + 5;
    // }

    // void doubleValue(int& numPointer){
    //     numPointer = numPointer * 2;
    // }

    // class BankAccount {
    //     private:
    //         double balance;  // ITINAGO natin ito — hindi pwedeng direktang i-access mula sa labas

    //     public:
    //         BankAccount(double initialBalance) {
    //             balance = initialBalance;
    //         }

    //         void deposit(double amount) {
    //             if (amount > 0) {  // may VALIDATION bago baguhin ang balance
    //                 balance = balance + amount;
    //             }
    //         }

    //         double getBalance() {
    //             return balance;
    //         }
    //     };

    // class Student{
    //     private:
    //         int grade;
    //     public:

    //         Student(int GradeData){
    //             grade = GradeData;
    //         }

    //         void setGrade(int g){
    //             if(g >= 0 && g <= 100){
    //                 grade = g;
    //             }else{
    //                 std::cout << "Invalid grade" << std::endl;
    //             }
    //         }

    //         int getGrade(){
    //             return grade;
    //         }

    // };

    // class BankAcount{
    //     private:
    //         double balance;
    //     public:
    //         BankAcount(double intialBalance){
    //             balance = intialBalance;
    //         }
    //         void withdraw(double amount){
    //            if (amount <= 0) {                    // CHECK MUNA ito
    //                 std::cout << "Invalid amount!" << std::endl;
    //             } else if (amount >= balance) {       // tapos ito
    //                 std::cout << "Insufficient funds!" << std::endl;
    //             } else {                             // kung parehong pumasa, VALID na
    //                 balance = balance - amount;
    //             }
    //         }

    //         double getBalance(){
    //             return balance;
    //         }
    // };

    // PARENT CLASS (Base Class)
    // class Animal {
    // public:
    //     std::string name;

    //     Animal(std::string n) {
    //         name = n;
    //     }

    //     void eat() {
    //         std::cout << name << " is eating." << std::endl;
    //     }
    // };

    // // CHILD CLASS (Derived Class) — "nagmamana" mula sa Animal
    // class Dog : public Animal {
    // public:
    //     Dog(std::string n) : Animal(n) {  // tinatawag ang constructor ng PARENT
    //         // walang ibang dagdag kailangan dito
    //     }

    //     void bark() {
    //         std::cout << name << " is barking: Woof!" << std::endl;
    //     }
    // };

    // class Vehicle{
    //     public:
    //     std::string brand;

    //     Vehicle(std::string b){
    //         brand = b;
    //     }

    //     void honk(){
    //         std::cout << "Beep! Beep!" << std::endl;
    //     }
    // };

    // class Motorcycle : public Vehicle{
    //     public:

    //     int numberOfWheels;

    //     Motorcycle(std::string b, int wheels ) : Vehicle(b){
    //         numberOfWheels = wheels;
    //     }

    //     void wheelie(){
    //         std::cout << brand << " is doing wheelie for "<< numberOfWheels << " Times" << std::endl;
    //     }
    // };

    // class Animal{
    //     public: 
    //         virtual void makeSound(){
    //             std::cout << "Some generic animal sound " << std::endl;
    //         }
    // };

    // class Dog : public Animal{
    //     public:
    //         void makeSound() override {
    //             std::cout << "Woof woof!" << std::endl;
    //         }
    // };
    // class Cat : public Animal{
    //     public:
    //     void makeSound() override{
    //         std::cout << "Meow! Meow!" << std::endl;
    //     }
    // };

    // class Shape{
    //     public:
    //         virtual void draw(){
    //             std::cout << "Drawing a shape" << std::endl;
    //         }
    // };

    // class Circle : public Shape{
    //     public:
    //         void draw() override {
    //             std::cout << "Drawing a Circle" << std::endl;
    //         }
    // };
    // class Square : public Shape{
    //     public:
    //         void draw() override{
    //             std::cout << "Drawing a square" << std::endl;
    //         }
    // };

// class Student
// {
// private:
//     string name;
//     int id;
//     vector<int> grades;

// public:
//     Student(string studentName, int studentId)
//     {
//         name = studentName;
//         id = studentId;
//     }

//     int getId()
//     {
//         return id;
//     }

//     string getName()
//     {
//         return name;
//     }

//     void addGrade(int grade)
//     {
//         grades.push_back(grade);
//     }

//     double getAverage()
//     {
//         if (grades.empty())
//         {
//             return 0;
//         }

//         int sum = 0;

//         for (int grade : grades)
//         {
//             sum += grade;
//         }

//         return (double)sum / grades.size();
//     }

//     void displayInfo()
//     {
//         cout << "\nStudent ID      : " << id << endl;
//         cout << "Student Name    : " << name << endl;

//         cout << "Grades          : ";

//         if (grades.empty())
//         {
//             cout << "No grades yet";
//         }
//         else
//         {
//             for (int grade : grades)
//             {
//                 cout << grade << " ";
//             }
//         }

//         cout << endl;
//         cout << "Average Grade   : " << getAverage() << endl;
//     }
// };

class Student{
    private:
        std::string name;
        int id;
        std::vector<int> grades;
    public:

        Student(std::string n, int i){
            name = n;
            id = i;
        }

        void addGrade(int g){
            grades.push_back(g);
        }

        void getAverage(){

        }
        
        void displayInfo()const{
            std::cout << "Student Name: " << name << std::endl;
            std::cout << "Student ID: " << id << std::endl;
            
            for(int nums : grades){
                std::cout << "Student Grade: "<< nums << std::endl;
            }
        }

        int getId(){
            return id;
        }
};

int main(){
    int choice;
    int studID;
    int AddGrade;
    std::string studName;
    std::vector<Student> records = {};

    do{
        std::cout << "=== STUDENT GRADE MANAGEMENT SYSTEM ===" << std::endl
                  << "1. Add New Student"<<std::endl
                  << "2. Add Grade to Student"<<std::endl
                  << "3. View All Students"<<std::endl
                  << "4. View Specific Student"<<std::endl
                  << "5. View Class Average"<<std::endl
                  << "16. Exit"<<std::endl;

        std::cout << "Enter Your Choices: " ;
        std::cin >> choice;

        if(choice == 1){
            std::cin.ignore();
            std::cout << "Enter your name: ";
            std::getline(std::cin,studName);

            std::cout << "Enter your ID: ";
            std::cin >> studID;

            Student students(studName, studID);

            records.push_back(students);
        }else if(choice == 3){
            for(auto const& stud : records){
                stud.displayInfo();
            }
        }else if(choice == 2){
            bool found = false;
            std::cout << "Enter your id: ";
            std::cin >> studID;

            for(auto& StudId : records){
                if(studID == StudId.getId()){
                    std::cout << "Enter your Grade: ";
                std::cin >> AddGrade;

                StudId.addGrade(AddGrade);  
                found = true; 
                }
            }
            if (!found) {
                std::cout << "Id not found!" << std::endl;
            }
        }
    }while(choice != 6);


    // int score = 20;
    // int* scorePointer = &score;

    // *scorePointer = 100;

    // std::cout << "The number os pointer is: "<< *scorePointer << std::endl;

    // int score = 10;
    // addFive(&score);
    // std::cout << "Outside function: "<< score << std::endl;


    // int score = 10;

    // doubleValue(score);

    // std::cout << "The number is double: "<< score << std::endl;

    // int*pointer = new int;

    // *pointer = 25;

    // std::cout << *pointer << std::endl;

    // delete pointer;

    //     int size;
    // std::cout << "Ilang numero gusto mo? ";
    // std::cin >> size;

    // int* numbers = new int[size];  // dynamic array — ang laki ay base sa INPUT ng user!

    // for (int i = 0; i < size; i++) {
    //     numbers[i] = i + 1;
    //     std::cout << numbers[i] << std::endl;
    // }

    // delete[] numbers;  // gamitin ang "[]" pagkatapos ng delete kapag array ang na-"new"

    // BankAccount account1(1000);

    // account1.deposit(500);   //  pwede, gamit ang PUBLIC method
    // std::cout << account1.getBalance() << std::endl;  // 1500

    // Student student1(85);
    // student1.setGrade(95);   
    // std::cout << student1.getGrade() << std::endl; 

    // student1.setGrade(90);  
    // std::cout << student1.getGrade() << std::endl;  

    // BankAcount bankAcount1(1000);
    // bankAcount1.withdraw(1);

    // std::cout << "Here your current balance: " << bankAcount1.getBalance() << std::endl;

    // Dog myDog("Bantay");

    // myDog.eat();   
    // myDog.bark();

    // Motorcycle Motorcycle1("Toyota", 10);

    // Motorcycle1.honk();
    // Motorcycle1.wheelie();

    // Dog myDog;
    // Cat myCat;

    // myDog.makeSound();
    // myCat.makeSound();

    // Animal* myAnimal = new Cat();  // POINTER na "Animal" type, pero "Dog" object
    // myAnimal->makeSound();  // "Woof! Woof!" — TAMANG version pa rin, kahit "Animal" ang tipo ng pointer!

    // delete myAnimal;


    // Circle circle1;
    // Square square1;

    // circle1.draw();
    // square1.draw();

    // std::vector<int> number = {1,2,3,4,5};

    // number.push_back(6);

    // std::cout << number[0] << std::endl;
    // std::cout << number.size() << std::endl;

    // std::vector<int> numbers = {10,20,30};

    // numbers.pop_back();
    // std::cout << numbers.size() << std::endl;

    // numbers.clear();
    // std::cout << numbers.size() << std::endl;

    // if(numbers.empty()){
    //     std::cout << "Walang laman!" << std::endl;
    // }

    // for(int num : numbers){
    //     std::cout << num << std::endl;
    // }

    // std::vector<int> numbers = {};
    // int num = 0;

    // for(int i=1; i<=5; i++){
    //     std::cout << "Enter your number : " ;
    //     std::cin >> num;
        
    //     numbers.push_back(num);
    // }

    // for(int nums : numbers){
    //     std::cout << nums << std::endl;
    // }
   
    // int total = 0;

    // for(int num: numbers){
    //     total += num;
    // }

    // std::cout << total << std::endl;

    // std::map<std::string, int> ages;

    // ages["Deacon"] = 22;
    // ages["Maria"] = 25;
    // ages["Juan"] = 30;

    // std::cout << ages["Deacon"] << std::endl;  // 22

    // if (ages.count("Deacon") > 0) {
    // std::cout << "May laman na si Deacon!" << std::endl;
    // }

    // // O pwede ring:
    // if (ages.find("Deacon") != ages.end()) {
    //     std::cout << "Nahanap si Deacon!" << std::endl;
    // }

    // std::map<std::string, int> inventory;

    // inventory["Apple"] = 10;
    // inventory["Banana"] = 5;
    // inventory["Orange"] = 8;

    // for(auto const& items : inventory){
    //     std::cout << items.first << ": " << items.second << std::endl;
    // }

    //     if(inventory.count("Apple")>0){
    //         std::cout << "May laman si Apple" << std::endl;
    //     }

    // std::vector<int> number = {5,2,8,1,9,3};

    // std::sort(number.begin(), number.end(), std::greater<int>());

    // for (int num : number){
    //     std::cout << num << " " << std::endl;
    // }

    // std::cout << std::endl;

    // std::vector<int> numbers = {5,2,8,1,9};

    // auto result = std::find(number.begin(), number.end(), 8);

    // if(result != number.end()){
    //     std::cout << "Nahanap!" << std::endl;
    // }else{
    //     std::cout << "Hindi nahanap." << std::endl;
    // }

    // std::vector<std::string> ListName = {};
    // std::string names;

    // for(int i = 1; i<=5; i++){
    //     std::cout << "Enter your name: ";
    //     std::cin >> names;

    //     ListName.push_back(names);
    // }

    // for(auto const& list : ListName){
    //     std::cout << list << std::endl;
    // }

    // auto result = std::find(ListName.begin(), ListName.end(), "Israel");

    // if(result != ListName.end()){
    //     std::cout << "Nahanap!" << std::endl;
    // }else{
    //     std::cout << "Hindi nahanap!" << std::endl;
    // }

    // std::vector<int> number = {5,2,8,1,9,3};

    // for(auto const& num : number){
    //     std::cout << num << std::endl;
    // }

    // std::cout << "Ascend Order" << std::endl;

    // std::sort(number.begin(), number.end(), std::greater<int>());

    // for(int num : number){
    //     std::cout << num << std::endl;
    // }

    // int maxNum = *std::max_element(number.begin(),number.end());
    // int minNum = *std::min_element(number.begin(),number.end());
    
    // std::cout << "Max Number: " << maxNum << " Min number: " << minNum << std::endl;

    // // std::reverse(number.begin(), number.end());

    // auto finding = *std::find(number.begin(), number.end(), 10);
    
    // std::cout << "Meron number na hinahanap mo: "<< finding << std::endl;

    return 0;
}