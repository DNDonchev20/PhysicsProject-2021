#include <iostream>
#include <cmath>

using namespace std;


void sloping_plane(double acceleration)
{   
    acceleration = 0;
    double time[10];
    double distance;

    for (int i = 0; i < 3; i++)
    {
        cin >> time[i];
    }

    cin >> distance;

    int Avg_Time = 0;
    for (int  i = 0; i < 3; i++)
    {
        Avg_Time += time[i];
    }

    cout << "All time is " << Avg_Time << endl;
    cout << "Average time is " << Avg_Time / 3 << endl;
    cout << "Distance travelled is " << distance << endl;

    Avg_Time = Avg_Time / 3;
    acceleration = (2 * distance) / pow(Avg_Time, 2);
    cout << "Accleration is " << acceleration;
}
/*int accelerations_Îf_Planets(float arr[8])
{
    //compare and sort the accelerations//

    int swap;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < (8 - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }

        }

        return arr[i];
    }
}


int main()
{
    Mercury = 3.59; Venus = 8.87;
    Earth = 9.81; Mars = 3.77;
    Jupiter = 25.95; Saturn = 11.08;
    Uranus = 10.67; Neptume = 14.07

    float arr[8] = {3.59, 8.77, 9.81, 3.77, 25.95, 11.08, 10.67, 14.07};
    accelerations_Îf_Planets(arr[8]);

}*/

int main()
{
    string choise;
    cin >> choise;

    if (choise == "acceleration")
    {
        int acceleration;
        sloping_plane(acceleration);
    }
    /*else if{

    }*/
    
}