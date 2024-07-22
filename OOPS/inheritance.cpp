
// Implementing Inheritance in cpp:
#include <iostream>
using namespace std;

class Vehicle {
protected:
    string name;
    string model;
    int noOfTyres;

    // string getName(){
    //     return this->name;
    // }
public:
    Vehicle(string _name , string _model, int _noOfTyres){
        cout<<"I am inside Vehicle ctor"<<endl; 
        this->name = _name;
        this->model = _model;
        this->noOfTyres = _noOfTyres;
    }
public:
    void start_engine(){
        cout<<"Engine is starting "<< name <<" "<< model << endl;
    }

    void stop_engine(){
        cout<<"Engine is stoping "<< name << " "<< model <<endl;
    }
~Vehicle(){
    cout<<"I am inside vehicle dtor"<<endl;
}
};

class Car : public Vehicle{
protected:
    int noOfDoors;
    string transmissionType;
public:
    Car(string _name , string _model, int _noOfTyres, int _noOfDoors, string _transmissionType):Vehicle(_name ,_model, _noOfTyres){
     cout<<"I am in the car ctor"<<endl;
     this->noOfDoors = _noOfDoors;
     this->transmissionType = _transmissionType;
    }


    void startAc(){
        cout<<"AC has started of "<< name <<endl;
    }

    ~Car(){
    cout<<"I am inside car dtor"<<endl;
}
    
};

class MotorCycle: public Vehicle
{
protected:
    string handleBarStyle;
    string suspensionType;
public:
    MotorCycle(string _name , string _model, int _noOfTyres, string _handleBarStyle, string _suspensionType): Vehicle(_name, _model, _noOfTyres){
        cout<<"motorcycle ctor called "<<endl;
        this->handleBarStyle = _handleBarStyle;
        this->suspensionType = _suspensionType;
    }

    void wheelie(){
        cout<<"wheelie kr rahi hai "<<name<<endl;
    }

    ~MotorCycle(){
    cout<<"I am inside MotorCycle dtor"<<endl;
}
};

int main(){
    Car A("Maruti 800", "LXI", 4 ,4 , "Manual");
    A.start_engine();

    A.startAc();
    A.stop_engine();
    MotorCycle M("BMW","VXI", 2,"U type","hard");
    M.start_engine();
    M.wheelie();
    M.stop_engine();
   
    return 0;
}

// how dtor called (child--> Base)
/*
I am inside MotorCycle dtor
I am inside vehicle dtor
I am inside car dtor
I am inside vehicle dtor

*/
