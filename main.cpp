#include <iostream>

using namespace std;

string progFundamentalsGrade(double score1)
{
   if(score1 >= 80.0)
     return "A";

   else if(score1 >= 75.0 && score1 <= 79.9)
     return "B+";

   else if(score1 >= 70.0 && score1 <= 74.5)
     return "B";

   else if(score1 >= 65.0 && score1 <= 69.9)
     return "B-";

   else if(score1 >= 60.0 && score1 <= 64.5)
     return "C+";

    else if(score1 >= 55.0 && score1 <= 59.9)
     return "C";

    else if(score1 >= 50.0 && score1 <= 54.9)
     return "C-";

    else if(score1 >= 45.0 && score1 <= 49.9)
     return "D";

    else if(score1 >= 0 && score1 <= 44.9)
     return "F";


}

string introManagementGrade(int score2)
{

   if(score2 >= 80.0)
     return "A";

   else if(score2 >= 75.0 && score2 <= 79.9)
     return "B+";

   else if(score2 >= 70.0 && score2 <= 74.5)
     return "B";

   else if(score2 >= 65.0 && score2 <= 69.9)
     return "B-";

   else if(score2 >= 60.0 && score2 <= 64.5)
     return "C+";

    else if(score2 >= 55.0 && score2 <= 59.9)
     return "C";

    else if(score2 >= 50.0 && score2 <= 54.9)
     return "C-";

    else if(score2 >= 45.0 && score2 <= 49.9)
     return "D";

    else if(score2 >= 0 && score2 <= 44.9)
     return "F";


}

string logicGrade(int score3)
{

   if(score3 >= 80.0)
     return "A";

   else if(score3 >= 75.0 && score3 <= 79.9)
     return "B+";

   else if(score3 >= 70.0 && score3 <= 74.5)
     return "B";

   else if(score3 >= 65.0 && score3 <= 69.9)
     return "B-";

   else if(score3 >= 60.0 && score3 <= 64.5)
     return "C+";

    else if(score3 >= 55.0 && score3 <= 59.9)
     return "C";

    else if(score3 >= 50.0 && score3 <= 54.9)
     return "C-";

    else if(score3 >= 45.0 && score3 <= 49.9)
     return "D";

    else if(score3 >= 0 && score3 <= 44.9)
     return "F";


}

string frenchGrade(int score4)
{

   if(score4 >= 80.0)
     return "A";

   else if(score4 >= 75.0 && score4 <= 79.9)
     return "B+";

   else if(score4 >= 70.0 && score4 <= 74.5)
     return "B";

   else if(score4 >= 65.0 && score4 <= 69.9)
     return "B-";

   else if(score4 >= 60.0 && score4 <= 64.5)
     return "C+";

    else if(score4 >= 55.0 && score4 <= 59.9)
     return "C";

    else if(score4 >= 50.0 && score4 <= 54.9)
     return "C-";

    else if(score4 >= 45.0 && score4 <= 49.9)
     return "D";

    else if(score4 >= 0 && score4 <= 44.9)
     return "F";


}

string compHardGrade(int score5)
{
   if(score5 >= 80.0)
     return "A";

   else if(score5 >= 75.0 && score5 <= 79.9)
     return "B+";

   else if(score5 >= 70.0 && score5 <= 74.5)
     return "B";

   else if(score5 >= 65.0 && score5 <= 69.9)
     return "B-";

   else if(score5 >= 60.0 && score5 <= 64.5)
     return "C+";

    else if(score5 >= 55.0 && score5 <= 59.9)
     return "C";

    else if(score5 >= 50.0 && score5 <= 54.9)
     return "C-";

    else if(score5 >= 45.0 && score5 <= 49.9)
     return "D";

    else if(score5 >= 0 && score5 <= 44.9)
     return "F";

}

double progFundamentalsWPG(string grade1, const int CHRS)
{
    if (grade1 == "A")
        return (4.0*CHRS);
    else if (grade1== "B+")
        return (3.5*CHRS);
    else if (grade1== "B")
        return (3.25*CHRS);
    else if (grade1== "B-")
        return (3.0*CHRS);
    else if (grade1== "C+")
        return (2.5*CHRS);
    else if (grade1== "C")
        return (2.25*CHRS);
    else if (grade1== "C-")
        return (2.0*CHRS);
    else if (grade1== "D")
        return (1.0*CHRS);
    else if (grade1== "F")
        return (0*CHRS);
}

double introManagementWPG(string grade2, const int CHRS)
{
    if (grade2 == "A")
        return (4.0*CHRS);
    else if (grade2== "B+")
        return (3.5*CHRS);
    else if (grade2== "B")
        return (3.25*CHRS);
    else if (grade2== "B-")
        return (3.0*CHRS);
    else if (grade2== "C+")
        return (2.5*CHRS);
    else if (grade2== "C")
        return (2.25*CHRS);
    else if (grade2== "C-")
        return (2.0*CHRS);
    else if (grade2== "D")
        return (1.0*CHRS);
    else if (grade2== "F")
        return (0*CHRS);
}

double logicWPG(string grade3, const int CHRS)
{
    if (grade3 == "A")
        return (4.0*CHRS);
    else if (grade3== "B+")
        return (3.5*CHRS);
    else if (grade3== "B")
        return (3.25*CHRS);
    else if (grade3== "B-")
        return (3.0*CHRS);
    else if (grade3== "C+")
        return (2.5*CHRS);
    else if (grade3== "C")
        return (2.25*CHRS);
    else if (grade3== "C-")
        return (2.0*CHRS);
    else if (grade3== "D")
        return (1.0*CHRS);
    else if (grade3== "F")
        return (0*CHRS);
}

double frenchWPG(string grade4, const int CHRS)
{
    if (grade4 == "A")
        return (4.0*CHRS);
    else if (grade4== "B+")
        return (3.5*CHRS);
    else if (grade4== "B")
        return (3.25*CHRS);
    else if (grade4== "B-")
        return (3.0*CHRS);
    else if (grade4== "C+")
        return (2.5*CHRS);
    else if (grade4== "C")
        return (2.25*CHRS);
    else if (grade4== "C-")
        return (2.0*CHRS);
    else if (grade4== "D")
        return (1.0*CHRS);
    else if (grade4== "F")
        return (0*CHRS);
}

double compHardWPG(string grade5, const int CHRS)
{
    if (grade5 == "A")
        return (4.0*CHRS);
    else if (grade5== "B+")
        return (3.5*CHRS);
    else if (grade5== "B")
        return (3.25*CHRS);
    else if (grade5== "B-")
        return (3.0*CHRS);
    else if (grade5== "C+")
        return (2.5*CHRS);
    else if (grade5== "C")
        return (2.25*CHRS);
    else if (grade5== "C-")
        return (2.0*CHRS);
    else if (grade5== "D")
        return (1.0*CHRS);
    else if (grade5== "F")
        return (0*CHRS);
}
int main()
{
    string firstName, lastName;
    const int CHRS = 3;
   double score1, score2, score3, score4, score5;
   string grade1, grade2, grade3, grade4, grade5;
   double wpg1, wpg2, wpg3, wpg4, wpg5;

   cout << "Enter your first name and last name: ";
    getline(cin, firstName);
    getline(cin, lastName);

   cout << "Enter score for Programming Fundamentals: ";
   cin >> score1;

   grade1 = progFundamentalsGrade(score1);
    wpg1 = progFundamentalsWPG(grade1, CHRS);

   cout << "Enter score for Intro Management: ";
   cin >> score2;

   grade2 = introManagementGrade(score2);
    wpg2 = introManagementWPG(grade2, CHRS);

   cout << "Enter score for Logic: ";
   cin >> score3;

   grade3 = logicGrade(score3);
    wpg3 = logicWPG(grade3, CHRS);

   cout << "Enter score for French: ";
   cin >> score4;

   grade4 = frenchGrade(score4);
    wpg4 = frenchWPG(grade4, CHRS);

   cout << "Enter score for Computer Hardware: ";
   cin >> score5;

   grade5 = compHardGrade(score5);
    wpg5 = compHardWPG(grade5, CHRS);


   //Final Output
   cout << "\n\nSECOND SEMESTER RESULTS" << endl;
   cout << "*************\n" << endl;
   cout << "Student Name: " <<firstName << " " <<lastName;
   cout << "\n";
   cout << "Course Title \t\t\tMarks\tGrade\tCHrs\tWGP" << endl;
   cout << "*****************************************************************" <<endl;
   cout << "Programming Fundamentals\t" <<score1 <<"\t" <<grade1 <<"\t" <<CHRS <<"\t" <<wpg1 <<endl;
   cout << "Intro Management\t\t" <<score2 <<"\t" <<grade2 <<"\t" <<CHRS <<"\t" <<wpg2 <<endl;
   cout << "Logic\t\t\t\t" <<score3 <<"\t" <<grade3 <<"\t" <<CHRS <<"\t" <<wpg3 <<endl;
   cout << "French\t\t\t\t" <<score4 <<"\t" <<grade4 <<"\t" <<CHRS <<"\t" <<wpg4 <<endl;
   cout << "Computer Hardware\t\t" <<score5 <<"\t" <<grade5 <<"\t" <<CHRS <<"\t" <<wpg5 <<endl;


   cout << "\n\n\n";

   return 0;
}
