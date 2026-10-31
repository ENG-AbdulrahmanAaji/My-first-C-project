#include <iostream>
using namespace std;

int main()
{
	int dist[7] = {-50, -1, 120, 85, -404, 210, 45};//The array
	
	int sum = 0;
	int num = 0;
	
	int max;
	int min;
	
	double avg;

	for ( int i = 0 ; i < 7 ; i++) {//To read the array elements

		if(dist[i] >= 0){
		    
		    if(num==0){
		        max = dist[i];
		        min = dist[i];
		    }
		    else{
		        if(dist[i] > max){
		            max = dist[i];
		        }
		        if(dist[i] < min){
		            min = dist[i];
		        }
		    }
			    sum += dist[i];
		        num ++;
		}

	}
	
    if (num > 0) {//to make it against dividing by 0
        avg = (double)sum / num;
        cout << "The avg of nums is " << avg << endl;
        cout << "The max num is " << max << endl;
        cout << "The min num is " << min << endl;
    } else {
        cout << "Error: Sensor disconnected! No valid readings found." << endl;
    }
    
	return 0;
}
