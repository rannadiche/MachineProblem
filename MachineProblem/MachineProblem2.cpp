#include <iostream> // pre-processor directive
#include <cmath>

using namespace std;

char fig_code;
float length, height, volume, radius, lateral_area, base_area, surface_area, width;
char cont;

void menu(){ // menu that the user will choose from
	cout << "-------------------------\n";
    cout << " C --> Cone\n";
    cout << " P --> Pyramid\n";
    cout << " S --> Sphere\n";
    cout << "-------------------------\n";
}

void process(){ // user willinput what figure she wants to calculate
	cout << "Enter the Figure code: ";
 	cin >> fig_code;
}

void solving(){ // function where the user will enter necessary information to calculate certain problems
	switch(fig_code){
    case 'C':
    case 'c':
        cout << "Enter the radius: ";
        cin >> radius;
        
        cout << "Enter the height: ";
        cin >> height;
        
        volume = 3.142 * radius * radius *height/3;
        
        lateral_area = 3.142*radius*sqrt(height*height+radius*radius);
        
        base_area = 3.142*radius*radius;
        
        surface_area = (3.142*radius*(radius+(sqrt(height*height+radius*radius))));
        
      	cout << "The volume of a cone is: " << volume << endl;
        
    	cout << "Lateral area of a cone is: " << lateral_area << endl;
        
        cout << "Base area of a cone is: " << base_area << endl;
        
        cout << "Surface area of a cone is: " << surface_area << endl;
        
        break;
        
    
    case 'P':
    case 'p':
        cout << "Enter the length: ";
       	cin >> length;
        
        cout << "Enter the width: ";
       	cin >> width;
        
        cout << "Enter the height: ";
       	cin >> height;
        
        volume = (length*width*height)/3;
        
        lateral_area = ((length*(sqrt(((width*width)/4)+ height*height))) + (width*(sqrt(((length*length)/4)+ (height*height)))));
       
        base_area = length*width;
        
        surface_area = ((length*width) + (length*(sqrt(((width*width)/4)+ (height*height)))) + (width*(sqrt(((length*length)/2)+ (height*height)))));
        
        cout << "The volume of a pyramid is: " << volume << endl;
        
    	cout << "Lateral area of a pyramid is: " << lateral_area << endl;
        
        cout << "Base area of a pyramid is: " << base_area << endl;
        
        cout << "Surface area of a pyramid is: " << surface_area << endl;
        
        break;
        
    case 'S':
    case 's':
        cout << "Enter the radius: ";
        cin >> radius;
        
        volume = 4.19*radius*radius*radius;
        
        surface_area = 4*3.142*radius*radius;
        
       	cout << "The volume of a sphere is: " << volume << endl;
        
        cout << "Surface area of a sphere is: " << surface_area << endl;
        
        break;
        
  default:
    	cout << "Error in figure code";
       	break;
    }
}

int main(){ // entry point
	menu();
	do{
		process(); // function call
		solving();
		
	cout << "\nSolve another (y if yes, n if no): "; // user will choose if he or she still wants to continue
    cin >> cont; 
	} while(cont != 'n');
		
return 0;	// end of program
}
