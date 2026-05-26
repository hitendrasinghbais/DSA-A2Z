/* 
Given the integer day denoting the day number, print on the screen which day of the week it is. Week starts from Monday and for values greater than 7 or less than 1, print Invalid.

Ensure only the 1st letter of the answer is capitalised.
*/


class Solution {
public:
    void whichWeekDay(int day) {
        switch (day)
        {
        case 1:
        cout<<"Monday"<<endl;
        break;
        case 2:
        cout<<"Tuesday"<<endl;
        break;
        case 3:
        cout<<"Wednesday"<<endl;
        break;
        default :
        cout<<"Invalid"<<endl;

        }

    

    }
};
