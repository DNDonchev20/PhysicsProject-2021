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
/*int accelerations_�f_Planets(float arr[8])
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
    accelerations_�f_Planets(arr[8]);

}*/

void second_principle_of_mechanics_check()
{
    //���������
    double s;
    cout << "�he distance from the starting position of the trolley to the restrictive plates: ";
    cin >> s;
    cout << endl;

    //m1 - ���� �� ���������; m2 = ������ ���� �� ��������� � ���������
    double m1, m2;
    cout << "The total mass of the holder: "; //������ ���� �� ���������
    cin >> m1;
    cout << endl;

    cout << "The total mass of the trolley: "; //������ ���� �� ���������
    cin >> m2;
    cout << endl;

    cout << "The total mass is: "; //o����� ���� �:
    double m = m1 + m2;//������ ����
    cout << m << endl;

    cout << "�he strength of gravity is equal to the: "; //������ �� �������� � ����� ��:
    double F = m1 * 9.8; // = g
    cout << F << endl;

    double times[10];

    //��������� ��� �����na �� �������
    cout << "First time: ";
    cin >> times[0];

    cout << "Second time: ";
    cin >> times[1];

    cout << "Third time: ";
    cin >> times[2];
    cout << endl;

    //�������� ������������������� �� ���������(����� �� 3)
    double timeAv = 0;
    for (int i = 0; i < 3; i++)
    {

        timeAv += times[i];
    }
    timeAv = timeAv / 3;


    cout << "Average time: " << timeAv << endl;

    //�������� ����������� �� ���������
    double  acceleration = (2 * s) / pow(timeAv, 2);
    cout << "Accleration is " << acceleration << endl;


    double G = F / acceleration;
    cout << G;

}

int main()
{
   second_principle_of_mechanics_check(); 
}

