#include <iostream>
#include <vector>
using namespace std;
vector<int> gradingStudents(vector<int> grades)
{
    vector<int> ans;
    for (int i = 0; i < grades.size(); i++)
    {
        int temp = (grades[i] % 5); // To get the last digit of the number
        int res = 5 - temp;         // And calculating difference

        if (res < 3 && grades[i] >= 38)
        {
            ans.push_back((grades[i] + res));
        }
        else if (grades[i] < 38) // If less than 38 no change
        {
            ans.push_back(grades[i]);
        }
        else
        {
            ans.push_back(grades[i]);
        }
    }
    return ans;
}
int main()
{
    vector<int> marks{73,
                      67,
                      38,
                      33};

    marks = gradingStudents(marks);
    for (auto ans : marks)
    {
        cout << ans << endl;
    }

    return 0;
}