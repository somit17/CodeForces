#include <iostream>
using namespace std;
int main()
{
    int noOfRooms = 0, people = 0, capacity = 0, count = 0;
    cin >> noOfRooms;

    while (noOfRooms--)
    {
        cin >> people >> capacity;
        int peopleLeftInRoom = capacity-people;
        if (peopleLeftInRoom>=2)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}