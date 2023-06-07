//Antonel
//Mathematical Operationc On Two Numbers

#include <iostream>

using namespace std;

int main()
{
    system("cls");
    
    cout << "Welcome To Calculation Program" << endl << endl;
    
    cout << "If You Want To Continue Please Click \"y\"" << endl;
    cout << "If Not Please Click \"n\"" << endl << endl;
    
    firstcondition:
    
    cout << "Please Enter Your Choice, Then Click \"ENTER\" : ";
    
    char firstcondition;
    cin >> firstcondition;
    
    if(firstcondition == 'y' || firstcondition == 'Y')
    {
        system("cls");
        
        secondcondition:
        
        cout << "Please Select a Calculation Method" << endl << endl;
        
        cout << "Click \"+\" For Additional Operation" << endl;
        cout << "Click \"-\" For Subtraction Operation" << endl;
        cout << "Click \"*\" For Multiplication Operation" << endl;
        cout << "Click \"/\" For Division Operation" << endl;
        cout << "Click \"n\" To End The Program" << endl << endl;
        
        char secondcondition;
        cout << "Please Enter Your Choice, Then Click \"ENTER\" : ";
        cin >> secondcondition;
        
        if(secondcondition == '+')
        {
            //Additional Program
            
            system("cls");
            
            cout << "Welcome To Addditional Program" << endl << endl;
            cout << "If You Want To Continue Please Click \"y\"" << endl;
            cout << "If Not Please Click \"n\"" << endl << endl;
            
            additional:
            
            cout << "Please Enter Your Choice, Then Click \"ENTER\" : ";
            
            char thirdcondition;
            cin >> thirdcondition;
            
            if(thirdcondition == 'y' || thirdcondition == 'Y')
            {
                system("cls");
                
                cout << "Enter The First Number  : ";
                
                int firstnumber;
                cin >> firstnumber;
                
                cout << endl << "Enter The Second Number : ";
                
                int secondnumber;
                cin >> secondnumber;
                
                int correct;
                correct = firstnumber + secondnumber;
                
                cout << endl << "Enter Your Answer       : ";
                
                int answer;
                cin >> answer;
                
                cout << endl << firstnumber << " + " << secondnumber << " = " << answer << endl;
                
                if(answer == correct)
                {
                    cout << "True" << endl << endl;
                    
                    system("pause");
                    system("cls");
                    
                    cout << "If You Want To Use The Program Again, Please Click \"y\"" << endl;
                    cout << "If Not, Please Click \"n\"" << endl << endl;
                    
                    additional1:
                    
                    cout << "Please Enter Your Choice, Then Click \"ENTER\" : ";
                    
                    char fourthcondition;
                    cin >> fourthcondition;
                    
                    if(fourthcondition == 'y' || fourthcondition == 'Y')
                    {
                        system("cls");
                        
                        goto secondcondition;
                    }
                    else if(fourthcondition == 'n' || fourthcondition == 'N')
                    {
                        system("exit");
                    }
                    else
                    {
                        system("cls");
                        
                        cout << "Sorry, Your Choiche Could Not Be Recognized" << endl;
                        cout << "Please Re-Enter Your Choice" << endl << endl;
                        
                        goto additional1;
                    }
                }
                if(answer < correct)
                {
                    cout << "False" << endl << endl;
                    cout << "Your Answer Is Smaller Than The Correct Answer" << endl;
                    cout << "The Correct Answer Is " << correct << endl << endl;
                    
                    system("pause");
                    system("cls");
                    
                    cout << "If You Want To Use The Program Again, Please Click \"y\"" << endl;
                    cout << "If Not, Please Click \"n\"" << endl << endl;
                    
                    additional2:
                    
                    cout << "Please Enter Your Choice, Then Click \"ENTER\" : ";
                    
                    char fourthcondition;
                    cin >> fourthcondition;
                    
                    if(fourthcondition == 'y' || fourthcondition == 'Y')
                    {
                        system("cls");
                        
                        goto secondcondition;
                    }
                    else if(fourthcondition == 'n' || fourthcondition == 'N')
                    {
                        system("exit");
                    }
                    else
                    {
                        system("cls");
                        
                        cout << "Sorry, Your Choiche Could Not Be Recognized" << endl;
                        cout << "Please Re-Enter Your Choice" << endl << endl;
                        
                        goto additional2;
                    }
                }
                if(answer > correct)
                {
                    cout << "False" << endl << endl;
                    cout << "Your Answer Is Smaller Than The Correct Answer" << endl;
                    cout << "The Correct Answer Is " << correct << endl << endl;
                    
                    system("pause");
                    system("cls");
                    
                    cout << "If You Want To Use The Program Again, Please Click \"y\"" << endl;
                    cout << "If Not, Please Click \"n\"" << endl << endl;
                    
                    additional3:
                    
                    cout << "Please Enter Your Choice, Then Click \"ENTER\" : ";
                    
                    char fourthcondition;
                    cin >> fourthcondition;
                    
                    if(fourthcondition == 'y' || fourthcondition == 'Y')
                    {
                        system("cls");
                        
                        goto secondcondition;
                    }
                    else if(fourthcondition == 'n' || fourthcondition == 'N')
                    {
                        system("exit");
                    }
                    else
                    {
                        system("cls");
                        
                        cout << "Sorry, Your Choiche Could Not Be Recognized" << endl;
                        cout << "Please Re-Enter Your Choice" << endl << endl;
                        
                        goto additional3;
                    }
                }
            }
            else if(thirdcondition == 'n' || thirdcondition == 'N')
            {
                system("exit");
            }
            else
            {
                cout << "Sorry, Your Choiche Could Not Be Recognized" << endl;
                cout << "Please Re-Enter Your Choice" << endl << endl;
                    
                goto additional;
            }
        }
        else if(secondcondition == '-')
        {
            //Subtraction Program
            
            system("cls");
            
            cout << "Welcome To Subtraction Program" << endl << endl;
            cout << "If You Want To Continue Please Click \"y\"" << endl;
            cout << "If Not Please Click \"n\"" << endl << endl;
            
            subtraction:
            
            cout << "Please Enter Your Choice, Then Click \"ENTER\" : ";
            
            char thirdcondition;
            cin >> thirdcondition;
            
            if(thirdcondition == 'y' || thirdcondition == 'Y')
            {
                system("cls");
                
                cout << "Enter The First Number  : ";
                
                int firstnumber;
                cin >> firstnumber;
                
                cout << endl << "Enter The Second Number : ";
                
                int secondnumber;
                cin >> secondnumber;
                
                int correct;
                correct = firstnumber - secondnumber;
                
                cout << endl << "Enter Your Answer       : ";
                
                int answer;
                cin >> answer;
                
                cout << endl << firstnumber << " - " << secondnumber << " = " << answer << endl;
                
                if(answer == correct)
                {
                    cout << "True" << endl << endl;
                    
                    system("pause");
                    system("cls");
                    
                    cout << "If You Want To Use The Program Again, Please Click \"y\"" << endl;
                    cout << "If Not, Please Click \"n\"" << endl << endl;
                    
                    subtraction1:
                    
                    cout << "Please Enter Your Choice, Then Click \"ENTER\" : ";
                    
                    char fourthcondition;
                    cin >> fourthcondition;
                    
                    if(fourthcondition == 'y' || fourthcondition == 'Y')
                    {
                        system("cls");
                        
                        goto secondcondition;
                    }
                    else if(fourthcondition == 'n' || fourthcondition == 'N')
                    {
                        system("exit");
                    }
                    else
                    {
                        system("cls");
                        
                        cout << "Sorry, Your Choiche Could Not Be Recognized" << endl;
                        cout << "Please Re-Enter Your Choice" << endl << endl;
                        
                        goto subtraction1;
                    }
                }
                if(answer < correct)
                {
                    cout << "False" << endl << endl;
                    cout << "Your Answer Is Smaller Than The Correct Answer" << endl;
                    cout << "The Correct Answer Is " << correct << endl << endl;
                    
                    system("pause");
                    system("cls");
                    
                    cout << "If You Want To Use The Program Again, Please Click \"y\"" << endl;
                    cout << "If Not, Please Click \"n\"" << endl << endl;
                    
                    subtraction2:
                    
                    cout << "Please Enter Your Choice, Then Click \"ENTER\" : ";
                    
                    char fourthcondition;
                    cin >> fourthcondition;
                    
                    if(fourthcondition == 'y' || fourthcondition == 'Y')
                    {
                        system("cls");
                        
                        goto secondcondition;
                    }
                    else if(fourthcondition == 'n' || fourthcondition == 'N')
                    {
                        system("exit");
                    }
                    else
                    {
                        system("cls");
                        
                        cout << "Sorry, Your Choiche Could Not Be Recognized" << endl;
                        cout << "Please Re-Enter Your Choice" << endl << endl;
                        
                        goto subtraction2;
                    }
                }
                if(answer > correct)
                {
                    cout << "False" << endl << endl;
                    cout << "Your Answer Is Smaller Than The Correct Answer" << endl;
                    cout << "The Correct Answer Is " << correct << endl << endl;
                    
                    system("pause");
                    system("cls");
                    
                    cout << "If You Want To Use The Program Again, Please Click \"y\"" << endl;
                    cout << "If Not, Please Click \"n\"" << endl << endl;
                    
                    subtraction3:
                    
                    cout << "Please Enter Your Choice, Then Click \"ENTER\" : ";
                    
                    char fourthcondition;
                    cin >> fourthcondition;
                    
                    if(fourthcondition == 'y' || fourthcondition == 'Y')
                    {
                        system("cls");
                        
                        goto secondcondition;
                    }
                    else if(fourthcondition == 'n' || fourthcondition == 'N')
                    {
                        system("exit");
                    }
                    else
                    {
                        system("cls");
                        
                        cout << "Sorry, Your Choiche Could Not Be Recognized" << endl;
                        cout << "Please Re-Enter Your Choice" << endl << endl;
                        
                        goto subtraction3;
                    }
                }
            }
            else if(thirdcondition == 'n' || thirdcondition == 'N')
            {
                system("exit");
            }
            else
            {
                cout << "Sorry, Your Choiche Could Not Be Recognized" << endl;
                cout << "Please Re-Enter Your Choice" << endl << endl;
                    
                goto subtraction;
            }
        }
        else if(secondcondition == '*')
        {
            //Multiplication Program
            
            system("cls");
            
            cout << "Welcome To Multiplicaton Program" << endl << endl;
            cout << "If You Want To Continue Please Click \"y\"" << endl;
            cout << "If Not Please Click \"n\"" << endl << endl;
            
            multiplication:
            
            cout << "Please Enter Your Choice, Then Click \"ENTER\" : ";
            
            char thirdcondition;
            cin >> thirdcondition;
            
            if(thirdcondition == 'y' || thirdcondition == 'Y')
            {
                system("cls");
                
                cout << "Enter The First Number  : ";
                
                int firstnumber;
                cin >> firstnumber;
                
                cout << endl << "Enter The Second Number : ";
                
                int secondnumber;
                cin >> secondnumber;
                
                int correct;
                correct = firstnumber * secondnumber;
                
                cout << endl << "Enter Your Answer       : ";
                
                int answer;
                cin >> answer;
                
                cout << endl << firstnumber << " * " << secondnumber << " = " << answer << endl;
                
                if(answer == correct)
                {
                    cout << "True" << endl << endl;
                    
                    system("pause");
                    system("cls");
                    
                    cout << "If You Want To Use The Program Again, Please Click \"y\"" << endl;
                    cout << "If Not, Please Click \"n\"" << endl << endl;
                    
                    multiplication1:
                    
                    cout << "Please Enter Your Choice, Then Click \"ENTER\" : ";
                    
                    char fourthcondition;
                    cin >> fourthcondition;
                    
                    if(fourthcondition == 'y' || fourthcondition == 'Y')
                    {
                        system("cls");
                        
                        goto secondcondition;
                    }
                    else if(fourthcondition == 'n' || fourthcondition == 'N')
                    {
                        system("exit");
                    }
                    else
                    {
                        system("cls");
                        
                        cout << "Sorry, Your Choiche Could Not Be Recognized" << endl;
                        cout << "Please Re-Enter Your Choice" << endl << endl;
                        
                        goto multiplication1;
                    }
                }
                if(answer < correct)
                {
                    cout << "False" << endl << endl;
                    cout << "Your Answer Is Smaller Than The Correct Answer" << endl;
                    cout << "The Correct Answer Is " << correct << endl << endl;
                    
                    system("pause");
                    system("cls");
                    
                    cout << "If You Want To Use The Program Again, Please Click \"y\"" << endl;
                    cout << "If Not, Please Click \"n\"" << endl << endl;
                    
                    multiplication2:
                    
                    cout << "Please Enter Your Choice, Then Click \"ENTER\" : ";
                    
                    char fourthcondition;
                    cin >> fourthcondition;
                    
                    if(fourthcondition == 'y' || fourthcondition == 'Y')
                    {
                        system("cls");
                        
                        goto secondcondition;
                    }
                    else if(fourthcondition == 'n' || fourthcondition == 'N')
                    {
                        system("exit");
                    }
                    else
                    {
                        system("cls");
                        
                        cout << "Sorry, Your Choiche Could Not Be Recognized" << endl;
                        cout << "Please Re-Enter Your Choice" << endl << endl;
                        
                        goto multiplication2;
                    }
                }
                if(answer > correct)
                {
                    cout << "False" << endl << endl;
                    cout << "Your Answer Is Smaller Than The Correct Answer" << endl;
                    cout << "The Correct Answer Is " << correct << endl << endl;
                    
                    system("pause");
                    system("cls");
                    
                    cout << "If You Want To Use The Program Again, Please Click \"y\"" << endl;
                    cout << "If Not, Please Click \"n\"" << endl << endl;
                    
                    multiplication3:
                    
                    cout << "Please Enter Your Choice, Then Click \"ENTER\" : ";
                    
                    char fourthcondition;
                    cin >> fourthcondition;
                    
                    if(fourthcondition == 'y' || fourthcondition == 'Y')
                    {
                        system("cls");
                        
                        goto secondcondition;
                    }
                    else if(fourthcondition == 'n' || fourthcondition == 'N')
                    {
                        system("exit");
                    }
                    else
                    {
                        system("cls");
                        
                        cout << "Sorry, Your Choiche Could Not Be Recognized" << endl;
                        cout << "Please Re-Enter Your Choice" << endl << endl;
                        
                        goto multiplication3;
                    }
                }
            }
            else if(thirdcondition == 'n' || thirdcondition == 'N')
            {
                system("exit");
            }
            else
            {
                cout << "Sorry, Your Choiche Could Not Be Recognized" << endl;
                cout << "Please Re-Enter Your Choice" << endl << endl;
                    
                goto multiplication;
            }
        }
        else if(secondcondition == '/')
        {
            //Division Program
            
            system("cls");
            
            cout << "Welcome To Division Program" << endl << endl;
            cout << "If You Want To Continue Please Click \"y\"" << endl;
            cout << "If Not Please Click \"n\"" << endl << endl;
            
            division:
            
            cout << "Please Enter Your Choice, Then Click \"ENTER\" : ";
            
            char thirdcondition;
            cin >> thirdcondition;
            
            if(thirdcondition == 'y' || thirdcondition == 'Y')
            {
                system("cls");
                
                cout << "Enter The First Number  : ";
                
                int firstnumber;
                cin >> firstnumber;
                
                cout << endl << "Enter The Second Number : ";
                
                int secondnumber;
                cin >> secondnumber;
                
                int correct;
                correct = firstnumber / secondnumber;
                
                cout << endl << "Enter Your Answer       : ";
                
                int answer;
                cin >> answer;
                
                cout << endl << firstnumber << " / " << secondnumber << " = " << answer << endl;
                
                if(answer == correct)
                {
                    cout << "True" << endl;
                    cout << "The Remainder Of The Division Is " << firstnumber % secondnumber << endl << endl;
                    
                    system("pause");
                    system("cls");
                    
                    cout << "If You Want To Use The Program Again, Please Click \"y\"" << endl;
                    cout << "If Not, Please Click \"n\"" << endl << endl;
                    
                    division1:
                    
                    cout << "Please Enter Your Choice, Then Click \"ENTER\" : ";
                    
                    char fourthcondition;
                    cin >> fourthcondition;
                    
                    if(fourthcondition == 'y' || fourthcondition == 'Y')
                    {
                        system("cls");
                        
                        goto secondcondition;
                    }
                    else if(fourthcondition == 'n' || fourthcondition == 'N')
                    {
                        system("exit");
                    }
                    else
                    {
                        system("cls");
                        
                        cout << "Sorry, Your Choiche Could Not Be Recognized" << endl;
                        cout << "Please Re-Enter Your Choice" << endl << endl;
                        
                        goto division1;
                    }
                }
                if(answer < correct)
                {
                    cout << "False" << endl << endl;
                    cout << "Your Answer Is Smaller Than The Correct Answer" << endl;
                    cout << "The Correct Answer Is " << correct << endl;
                    cout << "The Remainder Of The Division Is " << firstnumber % secondnumber << endl << endl;
                    
                    system("pause");
                    system("cls");
                    
                    cout << "If You Want To Use The Program Again, Please Click \"y\"" << endl;
                    cout << "If Not, Please Click \"n\"" << endl << endl;
                    
                    division2:
                    
                    cout << "Please Enter Your Choice, Then Click \"ENTER\" : ";
                    
                    char fourthcondition;
                    cin >> fourthcondition;
                    
                    if(fourthcondition == 'y' || fourthcondition == 'Y')
                    {
                        system("cls");
                        
                        goto secondcondition;
                    }
                    else if(fourthcondition == 'n' || fourthcondition == 'N')
                    {
                        system("exit");
                    }
                    else
                    {
                        system("cls");
                        
                        cout << "Sorry, Your Choiche Could Not Be Recognized" << endl;
                        cout << "Please Re-Enter Your Choice" << endl << endl;
                        
                        goto division2;
                    }
                }
                if(answer > correct)
                {
                    cout << "False" << endl << endl;
                    cout << "Your Answer Is Smaller Than The Correct Answer" << endl;
                    cout << "The Correct Answer Is " << correct << endl;
                    cout << "The Remainder Of The Division Is " << firstnumber % secondnumber << endl << endl;
                    
                    system("pause");
                    system("cls");
                    
                    cout << "If You Want To Use The Program Again, Please Click \"y\"" << endl;
                    cout << "If Not, Please Click \"n\"" << endl << endl;
                    
                    division3:
                    
                    cout << "Please Enter Your Choice, Then Click \"ENTER\" : ";
                    
                    char fourthcondition;
                    cin >> fourthcondition;
                    
                    if(fourthcondition == 'y' || fourthcondition == 'Y')
                    {
                        system("cls");
                        
                        goto secondcondition;
                    }
                    else if(fourthcondition == 'n' || fourthcondition == 'N')
                    {
                        system("exit");
                    }
                    else
                    {
                        system("cls");
                        
                        cout << "Sorry, Your Choiche Could Not Be Recognized" << endl;
                        cout << "Please Re-Enter Your Choice" << endl << endl;
                        
                        goto division3;
                    }
                }
            }
            else if(thirdcondition == 'n' || thirdcondition == 'N')
            {
                system("exit");
            }
            else
            {
                cout << "Sorry, Your Choiche Could Not Be Recognized" << endl;
                cout << "Please Re-Enter Your Choice" << endl << endl;
                    
                goto division;
            }
        }
        else if(secondcondition == 'n' || secondcondition == 'N')
        {
            system("exit");
        }
        else
        {
            system("cls");
            
            cout << "Sorry, Your Choiche Could Not Be Recognized" << endl;
            cout << "Please Re-Enter Your Choice" << endl << endl;
            
            goto secondcondition;
        }
    }
    else if(firstcondition == 'n' || firstcondition == 'N')
    {
        system("exit");
    }
    else
    {
        system("cls");
        
        cout << "Sorry, Your Choiche Could Not Be Recognized" << endl;
        cout << "Please Re-Enter Your Choice" << endl << endl;
        
        goto firstcondition;
    }
    return 0;
}
