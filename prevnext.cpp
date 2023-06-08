//Antonel
//Previous And Next From Entered Numbers And Alphabet

#include <iostream>

using namespace std;

void number()
{
    int i, num, nums[1000];
    
    cout << "The Number Of Numbers You Want To Enter : ";
    
    cin >> num;
    
    cout << endl;
    
    for(i = 1; i <= num; i++)
    {
        cout << "Number " << i << " : ";
        
        cin >> nums[i];
    }
    
    cout << endl << "<\t \t>" << endl << endl;
    
    for(i = 1; i <= num; i++)
    {
        cout << nums[i] - 1 << "\t" << nums[i] << "\t" << nums[i] + 1 << endl;
    }
}

void alphabet()
{   
    char alphabet[1000];
    int amount, i;
    
    cout << "Number Of Alphabet You Want To Enter : ";
    
    cin >> amount;
    
    fflush(stdin);
    
    cout << endl;
    
    for(i = 1; i <= amount; i++)
    {
        cout << "Alphabet " << i << " : ";
        
        alphabet[i] = getchar();
        
        fflush(stdin);
    }
    
    cout << endl << "<\t \t>" << endl << endl;
    
    for(i = 1; i <= amount; i++)
    {
        cout << (char)(alphabet[i] - 1) << "\t" << (char)(alphabet[i]) << "\t" << (char)(alphabet[i] + 1) << endl;
    }
}

int main()
{
    system("cls");
    
    int firstcondition;
    
    cin >> firstcondition;
    
    system("cls");
    
    if(firstcondition == 0)
    {
        number();
    }
    else if(firstcondition == 1)
    {
        alphabet();
    }
    else
    {
        cout << "Permintaan Anda Tidak Dapat Di Eksekusi";
    }
    return 0;
}
