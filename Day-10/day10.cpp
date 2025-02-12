#include<iostream>
using namespace std;

int main(){

    // 1 to n sum of numbers
    // =============================

    // int n,sum = 0;

    // cout << "enter N value" << endl;
    // cin >> n;


    // for(int i = 1; i <= n ; i++){
    //     sum = i + sum ;
    // }
    // cout << sum << endl;



    // 1 to n factorial of numbers
    // ==================================

    // int n,vinit=1;

    // cout << "enter N value" << endl;
    // cin >> n;

    // for(int i = 1; i <=n ; i++){
    //     vinit = i * vinit;
    // }
    // cout << vinit << endl;



    // Enter any number to table
    // =====================================

    // int n;

    // cout << "enter value N" << endl;
    // cin >> n;

    // for(int i=1 ; i <= 10; i++){
    //     cout << n << " x " << i << " = " << n*i << endl;
    // }



    // skiping alphabets using a do wile loop
    // ===========================================

    //    char i='a';

    // do
    // {
    //     cout << i << endl;

    //     i += 4;
    // } while (i <= 'z');
    

    // count the total number of digits
    // =======================================

     int n;

     cout << "enter a value" << endl;
     cin >> n;

     if (n < 10)
     {
        cout << "total digits of num = " << 1 << endl;
     }
     else
        if(n < 100)
        {
            cout << "total digits of num = " << 2 << endl;
        }
        else
        {
            if(n < 1000)
            {
              cout << "total digits of num = " << 3 << endl;  
            }
            else
            {
                if(n < 10000)
                {
              cout << "total digits of num = " << 4 << endl;  
                }
                else
                {
                    if(n < 100000)
                    {
                cout << "total digits of num = " << 5 << endl;
                    }
                    else
                    {
                        if(n < 1000000)
                        {
                    cout << "total digits of num = " << 6 << endl;            
                        }
                        else{
                            if(n < 10000000)
                            {
                                cout << "total digits of num = " << 7 << endl;
                            }
                            else
                            {
                                if(n < 100000000)
                                {
                                    cout << "total digits of num = " << 8 << endl;
                                }
                                 else
                                 {
                                    if(n < 1000000000)
                                    {
                                    cout << "total digits of num = " << 9 << endl;            
                                        }
                                        else{
                                            if(n < 10000000000)
                                            {
                                                cout << "total digits of num = " << 10 << endl;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

        }



    // sum of number's first and last digits

    // int n;

    // cout << "enter value N" << endl;
    // cin >> n;

    

}