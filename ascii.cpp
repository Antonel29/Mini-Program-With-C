//Antonel
//ASCII Table

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    system("cls");
    
    cout << "Welcome To The ASCII Table Program" << endl << endl;
    
    cout << "Select Method You Want" << endl << endl; 
    
    cout << "If You Want To Display The Entire Table, Enter The Keyword                       : [1]" << endl;
    cout << "If You Want To Display A Certain Char Via Decimal, Enter TheKeyword              : [2]" << endl;
    cout << "If You Want To Display A Certain Line With A Certain Start And Enter The Keyword : [3]" << endl;
    cout << "If You Want To Display The ASCII Table Completely, Enter A Keyword               : [4]" << endl << endl;
    
    int firstcondition;
    
    cout << "Please Enter Your Choice, Then Click \"ENTER\" : ";
    
    cin >> firstcondition;
    
    switch(firstcondition)
    {
        case 1:
        {
            system("cls");
            
            int ascii = 0;
            
            cout << "ASCII Table" << endl << endl;
            
            cout << "Decimal\tOctal\tHexadecimal\tChar" << endl << endl;
            
            for(ascii; ascii <= 255; ascii++)
            {
                if(ascii == 28)
                {
                    int ascii2 = 0;
                    
                    for(ascii2; ascii2 < 28; ascii2++)
                    {
                        printf("%i\t%o\t%x\t\t%c\n", ascii2, ascii2, ascii2, ascii2);
                    }
                    
                    cout << "2";
                    printf("%i\t%o\t%x\t\t%c\n", ascii, ascii, ascii, ascii);
                    
                    for(ascii; ascii <= 255; ascii++)
                    {
                        printf("%i\t%o\t%x\t\t%c\n", ascii, ascii, ascii, ascii);
                    }
                }
                else
                {
                
                }
            }
        }
        break;
        case 2:
        {
            system("cls");
            
            int decimal;
            
            cout << "Enter The Decimal Number Of Your Choiche, Then Click \"ENTER\" : ";
            
            cin >> decimal;
            
            cout << endl << "Display Characters With The Decimal Number " << decimal << " From The ASCII Table" << endl << endl;
            
            cout << "Decimal\tOctal\tHexadecimal\tChar" << endl << endl;
            
            printf("%i\t%o\t%x\t\t%c\n", decimal, decimal, decimal, decimal);
        }
        break;
        case 3:
        {
            system("cls");
            
            int firstdecimal, seconddecimal;
            
            cout << "Enter The Decimal Number You Want To Start With First      : ";
            cin >> firstdecimal;
            
            cout << endl << "Enter A Decimal Number To Be The End Of The Specified Line : ";
            cin >> seconddecimal;
            
            cout << endl << "Decimal\tOctal\tHexadecimal\tChar" << endl << endl;
            
            if(firstdecimal < 28 && seconddecimal >= 28)
            {   
                for(firstdecimal; firstdecimal <= seconddecimal; firstdecimal++)
                {
                    if(firstdecimal == 28)
                    {
                        int seconddecimal2 = 28;
                        cout << "2";
                        for(firstdecimal; firstdecimal == seconddecimal2; firstdecimal++)
                        {
                            printf("%i\t%o\t%x\t\t%c\n", firstdecimal, firstdecimal, firstdecimal, firstdecimal);
                        }
                    }
                    printf("%i\t%o\t%x\t\t%c\n", firstdecimal, firstdecimal, firstdecimal, firstdecimal);
                }
            }
            else
            {
                for(firstdecimal; firstdecimal <= seconddecimal; firstdecimal++)
                {
                    printf("%i\t%o\t%x\t\t%c\n", firstdecimal, firstdecimal, firstdecimal, firstdecimal);
                }                
            }
        }
        break;
        case 4:
        {
            fstream myFile;
            char text;
            
            myFile.open("ascii.txt");
            
            if(!myFile.fail())
            {
                while(!myFile.eof())
                {
                    myFile.get(text);
                    cout << text;
                }
                myFile.close();
            }
            else
            {
                cout << "Missing File" << endl;
            }
        }
    }
    return 0;
}
