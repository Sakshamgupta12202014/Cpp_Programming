//We don't use dot operator in Enumerations.
//Using Enumerations inside classes.
#include<iostream>
using namespace std;

class Year {
    public:
        enum months {
            january,febuary,march ,april ,may,june,july,august,september,
            october,november,december
        };

        void setmonth(months month){
            currentmonth=month;
        }

        months getmonth(){
            return currentmonth;
        }

        string getMonthString(months month){
            switch (month){
                case january:
                    return "January";
                case febuary:
                    return "February";
                case march:
                    return "March";
                case april:
                    return "April";
                case may:
                    return "May";
                case june:
                    return "June";
                case july:
                    return "July";
                case august:
                    return "August";
                case september:
                    return "September";
                case october:
                    return "October";
                case november:
                    return "November";
                case december:
                    return "December";
                default:
                    return "Invalid month";
            }
        }
    private:
        months currentmonth;

};

int Main(void)
{
    Year year;
    int month;
    cin>>month;
    if(month>=1 && month<=12){
        
        Year::months selectedMonth=static_cast<Year::months>(month-1);
        year.setmonth(selectedMonth);

    }
    cout<<"Month: "<<endl;
    year.getmonth();
    return 0;
}



enum week {sunday,monday,tuesday,wednesday,friday,saturday};  //Default indexing starts from 0.
enum seasons {summer=10,winter,spring,monsoon};  //now indexing will start from 10.
enum months {jan=19,feb=34,march=56,april};  // value of april=57
int main(){
    // enum week day1,day2;
    // day1=sunday; //we don't use dot operator.
    // day2=monday;  
    // if(day1>day2)
    // {
    //     cout<<"day1 comes after day\n";
    // }
    // else
    // {
    //     cout<<"day1 comes before day2\n";
    // }


    // enum seasons season;
    // season=winter;
    // cout<<season<<endl;

    // enum months month;
    // month=april;
    // cout<<month<<endl;

    Main();
    return 0;
}