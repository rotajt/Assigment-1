//
//  main.cpp
//  CS2 Assigment 1
//
//  Created by Rotaj Tamer Saeed on 22/09/2022.
//

#include <iostream>
using namespace std;
#include <fstream>
#include <string>
#include <queue>

class Car{
public:
    string car_brand;
    string car_type;
    string car_plate;
    int speed;
    int year_model;
    
    Car (){
    };
    Car ( string carbrand, int speed, int yearmodel){
        this-> car_brand= carbrand;
        this-> speed= speed;
        this-> year_model= yearmodel;
    }
    void setcar_brand(string carbrand){
        this->car_brand= carbrand;
    }
   void setcar_type(string cartype){
       this->car_type= cartype;
   }
    void setcar_plate(string carplate){
        this->car_plate= carplate;
    }
    void setspeed(int speed){
        this->speed= speed;
    }
    void setyear_model(int yearmodel){
        this->year_model= yearmodel;
    }
   
    string getcar_brand(){
        return this->car_brand;
        
    }
   string getcar_type(){
        return this->car_type;
    }
   string getcar_plate(){
       return this->car_plate;
   }
   int  getspeed(){
       return this->speed;
   }
   int getyear_model(){
       return this->year_model;
   }
};
class Road{
    public:
        char road_type;
        int speed_limit;
        int countA;
        int countB;
        int countC;

    Road();
    Road ( char roadtype, int speedlimit){
        this-> road_type= roadtype;
        this-> speed_limit = speedlimit;
        
    };
    
    void setroad_type(char roadtype){
        
        if (roadtype == 'A' || roadtype == 'B'||roadtype == 'C'){
            this-> road_type= roadtype;
            
        }
        else{
            cout<< "wrong road";
        }
     
    }
    void setspeed_limit (int speedlimit){
        this-> speed_limit= speedlimit;
    }
    
    void setcountA(int countA){
        this-> countA = countA;
    }
    void setcountB(int countB){
        this-> countB = countB;
    }
    void setcountC(int countC){
        this-> countC = countC;
    }
    
    char getroad_type (){
        return this-> road_type;
    }
    int getspeed_limit(){
        return this-> speed_limit;
    }
    int getcountA(){
        return this-> countA;
    }
    int getcountB(){
        return this-> countB;
    }
    int getcountC(){
        return this-> countC;
    }
    
    bool radar( int car_speed, char road_type){
        if ( car_speed >speed_limit){
            return true;
        }
        else return false;
        }
    
    void allow(string car_type){
        if (road_type=='A'){
            if(car_type=="Private" || car_type=="motorcycle"){
                cout << "allow" ;
            }
            else{
                cout << "reject";
            }
        }
        else if (road_type=='B'){
            cout<<"allow";
        }
        else{
            if(car_type=="truck"){
                cout << "allow" ;
            }
            else{
                cout << "false";
            }
        }
    }
    int age(int yearmodel){
        return 2022-yearmodel;
    }
};

int main()
{
    queue<int> myqueue;
    myqueue.push(0);
    myqueue.push(1);
    myqueue.push(2);
    
    queue<Car> myqueue;
    myqueue.push("Honda", 100, 2002);
    myqueue.push("Honda", 100, 2002);
    myqueue.push("Honda", 100, 2002);

    myqueue.pop();
    myqueue.pop();
 
    while (!myqueue.empty()) {
        cout << ' ' << myqueue.front();
        myqueue.pop();
    }
}
