#include<iostream>
using namespace std;

int main(){

    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;

    cout << "plese select your lenguage" << endl;

    cout << " Hindi ke liye 1 chune" << endl; 
    cout << " Gujrati mate 2 dabavo" << endl; 
    
    cin >> a;

    switch (a)
    {
        case 1 :
        cout << "pin Badal ne keliye 1 chune" << endl;
        cout << "Widrawal karne ke liye 2 chune" << endl;
        cout << "Balance Cheak karne ke liye 3 chune" << endl;
        cin >> b;
       
        switch (b)
        {
            case 1 :
            cout << "A/C no dalne ke liye 1 chune" << endl;
            cin >> c;

            switch (c)
            {
                case 1 :
                cout << "purana pin badal ne or naya pin dalne ke liye 1 chune" << endl;
                cin >> d;

                switch (d) 
                {
                    case 1 :
                    cout << "apka pin chang ho gaya he ==========> Thank you";
                    break;
                } 
                break; 
            }
            break;
        break;

        case 2 :
        cout << "widrawal ke liye pin dale 1" << endl;
        cin >> e;
        
        switch (e)
        {
            case 1 :
            cout << "100 ke note chahi a to 1 chune" << endl;
            cout << "200 ke note chahi a to 2 chune" << endl;
            cout << "500 ke note chahi a to 3 chune" << endl;
            cin >> f;

            switch (1)
            {
            case 1 :
            cout << "krupaya pratiksha kare" << endl;
            break;
            case 2 :
            cout << "krupaya pratiksha kare" << endl;
            break;
            case 3 :
            cout << "krupaya pratiksha kare" << endl;
            break;
            }
            break;
        }
        break;

        case 3 :
        cout << "A/C no dalne ke liye 1 chune" << endl;
        cin >> g;

        switch (g)
        {
            case 1 :
            cout << "pin dal ne ke liye 1 chune" << endl;
            cin >> h;

            switch (h)
            {
                case 1 :
                cout << "apka Balance 10000 he ===========> thank you" << endl;
                break;
            }
            break;
        }
        break;
    }
        break;

        case 2 :
        cout << "pin badalva mate 1 dabavo" << endl;
        cout << "paisa upadva mate 2 dabavo" << endl;
        cout << "pin fervva mate 3 dabavo" << endl;
        cin >> i;

        switch (i)
        {
            case 1 :
            cout << "A/C no nakhva mate 1 dabavo" << endl;
            cin >> j;

            switch (j)
            {
                case 1 :
                cout << "juno pin kadhi ne navo pin gothavva mate 1 dabavo" << endl;
                cin >> k;

                switch (k) 
                {
                    case 1 :
                    cout << "tamaro pin fari gayo che ==========> Thank you";
                    break;
                } 
                break; 
            }
            break;

        case 2 :
        cout << "paisa upadva mate pin nakho 1" << endl;
        cin >> m;
        
        switch (m)
        {
            case 1 :
            cout << "100 ni note mate  1 dabavo" << endl;
            cout << "200 ni note mate  2 dabavo" << endl;
            cout << "500 ni note mate  3 dabavo" << endl;
            cin >> n;

            switch (n)
            {
            case 1 :
            cout << "thodik var khami jav" << endl;
            break;
            case 2 :
            cout << "thodik var khami jav" << endl;
            break;
            case 3 :
            cout << "thodik var khami jav" << endl;
            break;
            }
            break;
        }
        break;    

        case 3 :
        cout << "A/C no nakhva mate 1 dabavo" << endl;
        cin >> o;

        switch (o)
        {
            case 1 :
            cout << "pin nakhva mate 1 dabavo" << endl;
            cin >> p;

            switch (p)
            {
                case 1 :
                cout << "tamaru balance 10000 che ===========> thank you" << endl;
                break;
            }
            break;
        }
        break;

    } 
}
}