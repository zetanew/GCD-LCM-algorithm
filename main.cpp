#include <iostream>

using namespace std;

//functions:
void entery();


int main()
{
    cout <<  "GCD-LCM-algorithm:" << endl;
    entery();
    main();

    return 0;
}


    void entery(){
                    // getting numbers //
                    cout << "How many integers?\t" ;
                    int  n;
                    cin >> n ;
   /*declare array*/int num[n];
                    cout << "enter the integers:\n" ;
                    for (int i=0 ; i<n ; i++ ){
                        cout << i+1 << ". integer : " ;
                        cin >> num[i] ;

                      }
                      cout << "\n \n ------------" << endl;
 // numbers entered  //
                      int d=2;
// writes first time
                        for (int i=0 ; i<n ; i++){
                        cout << num[i] << "   " ;



                    }
                    cout << " | " << d << endl;
 //nested


//start calculating
                    short c;
                    bool isOne=0;
                    int lcm=1;
                    int gcd=1;


                    while (isOne==0)
        {


                   c=0;




                    for(int i=0 ; i<n ; i++)
                    {

                        if (num[i]%d==0)
                        {
                        num[i] = num[i]/d;
                        c++;
                        }


                    }


                                        // is it 1  ?
                                        for(int j=0 ; j<n ; j++)
                                        {
                                            if( num[j] != 1 )
                                            {
                                                isOne=0;
                                                break;
                                            }
                                            if(num[j] ==1)
                                            {
                                                isOne=1;
                                            }


                                        }
                                        // gcd part
                                        if(c==n)

                                        {
                                            gcd*=d;
                                        }



                                        //gcd part ended


                                        //lcm part

                                           if (c!=0)
                                        {

                                            lcm *=d;
                                        }

                                        //lcm part ended

                                        // if no divisors incriment

                                            if (c==0)
                                        {

                                            d++;
                                        }

                                        


                                        for(int k=0 ; k<n ; k++)
                                        {
                                            cout << num[k] << "  "  ;
                                        }
                                        cout << "  |  " << d << endl;
    //while end
            }

            cout << " ------>> \t lcm value is :" << lcm << endl;
            cout << "\n ------>> \t gcd value is :" << gcd << endl;



//entery end
            }
