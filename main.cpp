#include <iostream> /// standard library
#include <cstdlib> /// needed for random numbers (PAC validation)
#include <iomanip> /// needed for input and output
#include <ctime> /// needed for time(0)


using namespace std;

class validation /// class to validate user ID, 3 random PAC numbers and marks
{
public: /// section for declaration of methods
    bool test_PAC1(int  PAC_no1, int Input_PAC1) ;
    bool test_PAC2(int  PAC_no2, int Input_PAC2) ;
    bool test_PAC3(int  PAC_no3, int Input_PAC3) ;
    bool test_userid(int user_id);
    bool test_mark(float mark);


private: /// section for declaration of data members
    int dm_PAC1, dm_PAC2, dm_PAC3;
    int dm_Input_PAC1, dm_Input_PAC2, dm_Input_PAC3;
    int dm_user_id;
    float dm_mark;

};
class Process_LC_Results:public validation /// class inheritance (ProcessLCR inherits validation)
{

public:
    string get_grade(float result);
    int get_CAO_points(float result);
    void display_report_headings();

private:
    float dm_result;
    string dm_grade;
    int dm_CAO_points;
     float dm_mark;
};

string sub_name[7] = {"             Irish", "  English", "Maths", " Physics", "French", "History", " Average"};
string student_name[6] = {"T Jones", "G Adams", "E Kenny", "T May", "B Behan", "D Breen"};

void Process_LC_Results::display_report_headings()
{
    cout << setw(50) << "Leaving certificate results" << endl;
    cout << setw(0) << " No " << setw(3) << " Name " << endl;
    for (int n=0; n<7; n++)
    {
        cout << right << setw(8) << sub_name[n];
    }
    cout << endl;
}

string Process_LC_Results::get_grade(float result) /// method for calculating grades based on results
{
      dm_result = result;

        if ( dm_result >= 90) {dm_grade = "H1";}

        if (dm_result  >= 80 && dm_result  < 90 )
        {dm_grade = "H2";}

        if (dm_result  >= 70 && dm_result  < 80 )
        {dm_grade = "H3";}

        if (dm_result  >= 60 && dm_result  < 70 )
        {dm_grade = "H4";}

        if (dm_result  >= 50 && dm_result  < 60 )
        {dm_grade = "H5";}

        if (dm_result  >= 40 && dm_result  < 50 )
        {dm_grade = "H6";}

        if (dm_result  >= 30 && dm_result  < 40 )
        {dm_grade = "H7";}

        if (dm_result  < 30 )
        {dm_grade = "H8";}

    return dm_grade;
}

int Process_LC_Results::get_CAO_points(float result) /// method for calculating LC results to CAO points
{
     dm_result = result;


        if (dm_result >= 90) {dm_CAO_points = 100;}
        if (dm_result  >= 80 && dm_result  < 90 ) {dm_CAO_points = 88;}
        if (dm_result  >= 70 && dm_result  < 80 ) {dm_CAO_points = 77;}
        if (dm_result  >= 60 && dm_result  < 70 ) {dm_CAO_points = 66;}
        if (dm_result  >= 50 && dm_result  < 60 ) {dm_CAO_points = 56;}
        if (dm_result  >= 40 && dm_result  < 50 ) {dm_CAO_points = 46;}
        if (dm_result  >= 30 && dm_result  < 40 ) {dm_CAO_points = 37;}
        if (dm_result  < 30 ) {dm_CAO_points = 0;}


    return dm_CAO_points;


}


bool validation::test_mark(float mark) /// method which validates mark entry
{
    dm_mark = mark;
    if (dm_mark <0 || dm_mark >100)
    {
        return false;
    }
    else
    {
        return true;
    }
}


bool validation::test_userid(int user_id) /// method which validates user ID
{
    dm_user_id = user_id;
    if (dm_user_id != 12345678)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool validation::test_PAC1(int  PAC_no1, int Input_PAC1) /// method which validates first PAC entry
{
        dm_PAC1 = PAC_no1;
        dm_Input_PAC1 =  Input_PAC1;

          if ((dm_PAC1 == 1 && dm_Input_PAC1 != 9) || (dm_PAC1 == 2 && dm_Input_PAC1 != 9 )
            || (dm_PAC1 == 3 && dm_Input_PAC1 != 8 ) || (dm_PAC1 == 4 && dm_Input_PAC1 != 8 )
              || (dm_PAC1 == 5 && dm_Input_PAC1 != 1 ) )
    {
                return false;
    }
    else
    {
        return true;
    }
}

bool validation::test_PAC2(int  PAC_no2, int Input_PAC2) /// method which validates second PAC entry
{


        dm_PAC2 = PAC_no2;
        dm_Input_PAC2 =  Input_PAC2;

        if ((dm_PAC2 == 1 && dm_Input_PAC2 != 9) || (dm_PAC2 == 2 && dm_Input_PAC2 != 9 )
            || (dm_PAC2 == 3 && dm_Input_PAC2 != 8 ) || (dm_PAC2 == 4 && dm_Input_PAC2 != 8 )
              || (dm_PAC2 == 5 && dm_Input_PAC2 != 1 ) )
    {
                return false;
    }
    else
    {
        return true;
    }
}
bool validation::test_PAC3(int  PAC_no3, int Input_PAC3) /// method which validates third PAC entry
{


          dm_PAC3 = PAC_no3;
        dm_Input_PAC3 =  Input_PAC3;

    if ((dm_PAC3 == 1 && dm_Input_PAC3 != 9) || (dm_PAC3 == 2 && dm_Input_PAC3 != 9 )
            || (dm_PAC3 == 3 && dm_Input_PAC3 != 8 ) || (dm_PAC3 == 4 && dm_Input_PAC3 != 8 )
              || (dm_PAC3 == 5 && dm_Input_PAC3 != 1 ) )
    {
                return false;
    }
    else
    {
        return true;
    }

}


int pac1, pac2, pac3; /// declaration of data members
int user_pac1;
int user_pac2;
int user_pac3;
int Yes_Or_No;
int Yes_Or_No1;
int Yes_Or_No2;
int Yes_Or_No3;
int user_id;
int row_total;
int mark;
    int row_average ;
    int column_total  [6];
    int NO_OF_rows = 6;
    int NO_OF_columns = 6;
float  student_result;
string student_grade;
int CAO_points[6][6];


  int data[6][6] = {90,85,75,65,55,45,
                    60,80,75,50,60,75,
                    80,80,80,80,80,80,
                    60,68,75,50,60,55,
                    60,73,75,50,50,75,
                    60,75,75,50,50,65};


int main() /// main part where method is beeing used



{
   class validation user1;

cout << "---------------------------------------------------------------------" << endl;
cout << "| Key in your 8 digit user ID" <<  " :     ";
cin >> user_id;
cout <<   "| " ;

Yes_Or_No = user1.test_userid(user_id);

    if (Yes_Or_No == 0)
    {
        cout << "Invalid user                                                      |" << endl;
        return 0;
    }
    else
    {
        cout << "Valid user                                                        |" << endl;

    }


start:      srand (time(0)); /// making sure that user isn't prompted for same entry twice

pac1 = 1+ (rand()%5);

pac2 = 1+ (rand()%5);
if (pac2 == pac1)
{
    goto start;
}
pac3 = 1+ (rand()%5);
if (pac3 == pac1 || pac3 == pac2)
{
    goto start;
}

cout << "| Enter PAC " << pac1 << " :" ;

cin >> user_pac1;
cout << "                                                                    |"<< endl;

Yes_Or_No1 = user1.test_PAC1(pac1,user_pac1);

    if (Yes_Or_No1 == 0)
        {
            cout << "| Incorrect PAC                                                     |" << endl;
            return 0;
        }
    else
        {
            cout << "| Correct PAC                                                       |" << endl;
        }

cout << endl << "| Returned value " << Yes_Or_No ;
cout << "                                                  |"<< endl;

cout << "| Enter PAC " << pac2 << " :" ;
cin >> user_pac2;
cout << "                                                                    |"<< endl;

Yes_Or_No2 = user1.test_PAC2(pac2,user_pac2);

    if (Yes_Or_No2 == 0)
        {
            cout << "| Incorrect PAC                                                     |" << endl;
            return 0;
        }
    else
        {
            cout << "| Correct PAC                                                       |" << endl;
        }

cout << endl << "| Returned value" << Yes_Or_No ;
cout << "                                                   |"<< endl;



cout << "| Enter PAC " << pac3 << " :" ;
cin >> user_pac3;
cout << "                                                                    |"<< endl;
Yes_Or_No3 = user1.test_PAC3(pac3,user_pac3);

    if (Yes_Or_No3 == 0)
        {
            cout << "| Incorrect PAC                                                     |" << endl;
            return 0;
        }
    else
        {
            cout << "| Correct PAC                                                       |" << endl;
        }

cout << endl << "| Returned value " << Yes_Or_No ;
cout << "                                                  |"<< endl;


class validation test_mark;

cout << "| Enter mark : " ;
cin >>  mark;
cout << "                                                                    |"<< endl;
{
if(user1.test_mark(mark) == false)
{
    cout <<  "| Invalid mark                                                      |" << endl;
    return 0;
}
if(user1.test_mark(mark) == true)
{
    cout << "| Valid mark                                                        |" << endl;
    cout << "---------------------------------------------------------------------" << endl << endl;
}
}



    class Process_LC_Results student_object[6]; /// 2 dimensional array for displaying leaving cetificate results

 student_object[0].display_report_headings();
  cout <<"____________________________________________________________________"<< endl;

     for (int row = 0 ; row < NO_OF_rows ; row++ )

     {
        row_total = 0 ;
        cout << row << setw(8) << student_name[row] << setw(5) ;



            for (int column = 0 ; column < NO_OF_columns ; column++ )

                {
                    student_grade = student_object[row].get_grade(data[row][column]);


                    cout << right << setw(8) << data[row][column] ;


                  row_total = row_total + data[row][column] ;
                column_total[column] += data[row][column];




                }



        row_average = row_total / NO_OF_columns ;
        cout   << right << setw(8) << row_average;

        cout << "*" << endl;
    }


    cout << "____________________________________________________________________"<< endl;
    cout << "Column average    " ;
for (int i=0;i<6;i++)  ///XXX
{ /// display column totals
    cout << column_total[i]/6 << " *   " ;

}
 cout << endl << endl;


  cout <<"                        Leaving certificate results                 "<< endl;
 cout << "                               Grades                         "<< endl;
 cout <<"No  Name    Irish  English  Maths  Physics  French  History CAO points" << endl;
 cout <<"______________________________________________________________________"<< endl;



  for (int row = 0 ; row < NO_OF_rows ; row++ )
     {
        row_total = 0 ;
        cout << row << setw(8) << student_name[row] << setw(5) ;

            for (int column = 0 ; column < NO_OF_columns ; column++ )

                {
                    student_grade = student_object[row].get_grade(data[row][column]);
		            CAO_points[row][column] = student_object[row].get_CAO_points(data[row][column]);
                    cout << right << setw(8)<<  student_grade ;


                 row_total = row_total + CAO_points[row][column] ;
                column_total[column] += CAO_points[row][column];

                }

        cout << right << setw(8) << row_total  ;
        row_average = row_total / NO_OF_columns ;


        cout << "*" << endl;


}
 cout << endl << endl;



return 0;


};
