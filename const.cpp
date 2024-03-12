#include<iostream>
using namespace std;

// class smartphone{    
// //Data Members(Properties)    
// string model;    
// int year_of_manufacture;    
// bool _5g_supported;        
// public:    
// //constructor with 0 parameter   
// smartphone(){       
//  model = "unknown";        
//  year_of_manufacture = 0;        
//  _5g_supported = false;   
//   }     

//  //constructor with 2 parameter   
// smartphone(string model_string, bool _5g_){        
// model = model_string;       
//  _5g_supported = _5g_;    
//  }    

// //constructor with 3 parameter    
// smartphone(string model_string, int manufacture, bool _5g_){        

// //initialising data members        
// model = model_string;        
// year_of_manufacture = manufacture;        
// _5g_supported = _5g_;    

// }};

// int main(){    
// //creating objects of smartphone class        
// // using constructor with 0 parameter    
// smartphone unknown;        
// //using constructor with 0 parameter    
// smartphone redmi("Note 7 Pro", false);
// // using constructor with 3 parameter    smartphone iphone("iphone 11", 2019, false );
// }

#include <bits/stdc++.h>
using namespace std;
class mobile
{   
string model;  
int year_of_manufacture;
public: 
void set_details(string model, int year_of_manufacture)
{      
                
this->model = model;  
this->year_of_manufacture = year_of_manufacture;  
  }       
   void print()
   {  
          cout << this->model << endl;  
                cout << this->year_of_manufacture << endl; 
                   }};
                                           
                                           
                                           int main()
                                           {    
                                            mobile redmi;
                                               redmi.set_details("Note 7 Pro", 2019);  
                                                 redmi.print();
                                                 }