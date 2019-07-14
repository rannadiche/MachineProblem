#include <stdio.h>
#include <cmath>
#include <iostream>

using namespace std;
 
int main()
{
    char fig_code;
    float length, height, volume, radius, lateral_area, base_area, surface_area, width;
    char confirm;
 	
 	printf("-------------------------\n");
    printf(" C --> Cone\n");
    printf(" P --> Pyramid\n");
    printf(" S --> Sphere\n");
    printf("-------------------------\n");
    

do{
	
	printf("Enter the Figure code: ");
 	scanf("%c", &fig_code);
	
	switch(fig_code)
    {
    case 'C':
    case 'c':
        printf("Enter the radius: ");
        scanf("%f", &radius);
        
        printf("Enter the height: ");
        scanf("%f", &height);
        
        volume = 3.142 * radius * radius *height/3;
        
        lateral_area = 3.142*radius*sqrt(height*height+radius*radius);
        
        base_area = 3.142*radius*radius;
        
        surface_area = (3.142*radius*(radius+(sqrt(height*height+radius*radius))));
        
        printf("Volume of a cone = %f\n", volume);
        
        printf("Lateral area of a cone = %f\n", lateral_area);
        
        printf("Base area of a cone = %f\n", base_area);
        
        printf("Surface area of a cone = %f\n", surface_area);
        
        break;
        
    
    case 'P':
    case 'p':
        printf("Enter the length: ");
        scanf("%f", &length);
        
        printf("Enter the width: ");
        scanf("%f", &width);
        
        printf("Enter the height: ");
        scanf("%f", &height);
        
        volume = (length*width*height)/3;
        
        lateral_area = ((length*(sqrt(((width*width)/4)+ height*height))) + (width*(sqrt(((length*length)/4)+ (height*height)))));
       
        base_area = length*width;
        
        surface_area = ((length*width) + (length*(sqrt(((width*width)/4)+ (height*height)))) + (width*(sqrt(((length*length)/2)+ (height*height)))));
        
        printf("Volume of a Pyramid = %f\n", volume);
        
        printf("Lateral Area of a Pyramid = %f\n", lateral_area);
        
        printf("Base Area of a Pyramid = %f\n", base_area);
        
        printf("Surface Area of a Pyramid = %f\n", surface_area);
        
        break;
        
    case 'S':
    case 's':
        printf("Enter the radius: ");
        scanf("%f", &radius);
        
        volume = 4.19*radius*radius*radius;
        
        surface_area = 4*3.142*radius*radius;
        
        printf("Volume of a sphere = %f\n", volume);
        
        printf("Surface area of a sphere = %f\n", surface_area);
        
        break;
        
	default:
    	printf("Error in figure code\n");
       	break;
    }
    
    cout << "\nPress y or Y to continue: "; // user will choose if he or she still wants to continue
    cin >> confirm; 
    
	}
	while(confirm == 'y'||confirm == 'Y');

	system("pause");
}
