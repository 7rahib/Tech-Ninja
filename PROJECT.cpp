#include<bits/stdc++.h>
#include <windows.h>
using namespace std;
 void gotoxy(int x,int y)
    {
        COORD a;
        a.X=x;
        a.Y=y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);
    }

char borad[3][3]= {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char work='X';
int row,colum;
bool draw=false;
void n_menu()
{
    int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
       std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;

}

void display_borad()
{
    system("cls");
    cout<<"\n\n fun of game \n\n"<<endl;
    cout<<"\tPlayer1 [X] \n\tPlayer2 [O]\n\n";

    cout<<"\t\t     |     |    \n";
    cout<<"\t\t  "<<borad[0][0]<<"  |   "<<borad[0][1]<<" |  "<<borad[0][2]<<"\n";
    cout<<"\t\t ____|_____|____\n";
    cout<<"\t\t     |     |    \n";
    cout<<"\t\t  "<<borad[1][0]<<"  |   "<<borad[1][1]<<" |  "<<borad[1][2]<<"\n";
    cout<<"\t\t ____|_____|____\n";
    cout<<"\t\t     |     |    \n";
    cout<<"\t\t  "<<borad[2][0]<<"  |   "<<borad[2][1]<<" |  "<<borad[2][2]<<"\n";
    cout<<"\t\t     |     |    \n\n\n";
}

void Player_work()
{

    int input;
    if(work=='X')
    {
        cout<<"\n\tPlayer1 [X] turn: ";
    }
    if(work=='O')
    {
        cout<<"\n\tPlayer2 [O] turn: ";
    }

    cin>>input;


    switch(input)
    {
    case 1:
        row=0;
        colum=0;
        break;
    case 2:
        row=0;
        colum=1;
        break;
    case 3:
        row=0;
        colum=2;
        break;
    case 4:
        row=1;
        colum=0;
        break;
    case 5:
        row=1;
        colum=1;
        break;
    case 6:
        row=1;
        colum=2;
        break;
    case 7:
        row=2;
        colum=0;
        break;
    case 8:
        row=2;
        colum=1;
        break;
    case 9:
        row=2;
        colum=2;
        break;

    default:
        cout<<"Wrong Input";
        break;
    }
    if(work=='X'&& borad[row][colum]!='X'&&borad[row][colum]!='O')
    {
        borad[row][colum]='X';
        work='O';
    }
    else if(work=='O'&& borad[row][colum]!='X'&&borad[row][colum]!='O' )
    {
        borad[row][colum]='O';
        work='X';
    }
    else
    {
        cout<<"\t\tWrong answer and borad have already failed\n";
        Player_work();
    }
    display_borad();

}

bool gameover()
{
    for(int i=0; i<3; i++)
    {
        if(borad[i][0]==borad[i][1]&&borad[i][0]==borad[i][2]||borad[0][i]==borad[1][i]&&borad[0][i]==borad[2][i])
        {
            return false;
        }
        if(borad[0][0]==borad[1][1]&&borad[0][0]==borad[2][2]||borad[0][2]==borad[1][1]&&borad[0][2]==borad[2][0])
        {
            return false;
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(borad[i][j]!='X'&&borad[i][j]!='O')
            {
                return true;
            }
        }
    }
    draw=true;
    return false;


}

void game()
{
    while(gameover())
    {
        display_borad();
        Player_work();
        gameover();

    }
    if(work=='X'&&draw==false)
    {
        cout<<"\tPlayer2 [O] is win\n";
        cout<<endl;
        cout<<"PRESS 0 TO BACK MENU"<<endl;
        int n;
        cin>>n;
        if(n==0)
        {
            system("CLS");
            n_menu();
        }
    }
    else if(work=='O'&&draw==false)
    {
        cout<<"\tPlayer1 [X] is win";
        cout<<endl;
        cout<<"PRESS 0 TO BACK MENU"<<endl;
        int n;
        cin>>n;
        if(n==0)
        {
            system("CLS");
            n_menu();
        }

    }
    else
    {
        cout<<"draw your game";
        cout<<endl;
        cout<<"PRESS 0 TO BACK MENU"<<endl;
        int n;
        cin>>n;
        if(n==0)
        {
            system("CLS");
            n_menu();
        }
    }
}

void teacher_llb()
{
     int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
        std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}




void llb()
{
    std::string line_;
    ifstream file_("llb.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
            system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    system("color 9e");
    std::cin.get();

    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;
    system("color 9e");

    int llb;
    cin>>llb;
    if(llb==0)
    {
        system("CLS");
        teacher_llb();
    }
}

void teacher_arct()
{
     int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
       std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}



void architecture()
{

    std::string line_;
    ifstream file_("architecture.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
            system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    std::cin.get();

    cout<<"PRESS 0 TO BACK MENU"<<endl;

    int m_arct;
    cin>>m_arct;
    if(m_arct==0)
    {
        system("CLS");
        teacher_arct();
    }

}

void teacher_bang()
{
    int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
      std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}



void bangla()
{

    std::string line_;
    ifstream file_("bangla.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
            system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    std::cin.get();

    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;

    int bang;
    cin>>bang;
    if(bang==0)
    {
        system("CLS");
        teacher_bang();
    }
}

void  teacher_bba()
{
      int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
       std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}



void bba()
{
    std::string line_;
    ifstream file_("bba.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
            system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    std::cin.get();

    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;

    int bba;
    cin>>bba;
    if(bba==0)
    {

        system("CLS");
        teacher_bba();
    }

}

void teacher_isl()
{
      int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
      std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}



void islamic()
{

    std::string line_;
    ifstream file_("islamic.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
            system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    std::cin.get();

    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;

    int isl;
    cin>>isl;
    if(isl==0)
    {

        system("CLS");
        teacher_isl();
    }
}

void teacher_hos()
{
        int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
        std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}

void hospital()
{

    std::string line_;
    ifstream file_("hospital.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
            system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    std::cin.get();

    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;

    int hos;
    cin>>hos;
    if(hos==0)
    {

        system("CLS");
        teacher_hos();
    }
}
void teacher_cse()
{
    int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
    std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}




void cse()
{
    std::string line_;
    ifstream file_("cse.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
            system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    std::cin.get();
    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;

    int cse;
    cin>>cse;
    if(cse==0)
    {

        system("CLS");
        teacher_cse();
    }
}

void teacher_eng()
{
     int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
      std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}



void english()
{
    std::string line_;
    ifstream file_("english.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
            system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    std::cin.get();

    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;

    int eng;
    cin>>eng;
    if(eng==0)
    {

        system("CLS");
        teacher_eng();
    }
}

void teacher_ee()
{
      int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
        std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}



void eee()
{
    std::string line_;
    ifstream file_("eee.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
            system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    std::cin.get();
    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;

    int ee;
    cin>>ee;
    if(ee==0)
    {

        system("CLS");
        teacher_ee();
    }


}
void  teacher_civ()
{
     int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
     std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}



void civil()
{
    std::string line_;
    ifstream file_("civil.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
            system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    std::cin.get();
    cout<<"PRESS 0 TO BACK MANUE"<<endl;
    cout<<endl;
    int civ;
    cin>>civ;
    if(civ==0)
    {

        system("CLS");
        teacher_civ();
    }

}
void teacher_heal()
{
    int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
      std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}



void health()
{
    std::string line_;
    ifstream file_("health.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
            system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    std::cin.get();
    cout<<"PRESS 0 TO BACK MENU"<<endl;
    cout<<endl;
    int heal;
    cin>>heal;
    if(heal==0)
    {

        system("CLS");
        teacher_heal();
    }

}


void teacher()
{
     system("color 0e");

    cout<<"1. CSE"<<endl;

    cout<<"2. LLB"<<endl;

    cout<<"3. BBA"<<endl;

    cout<<"4. EEE"<<endl;

    cout<<"5. CIVIL"<<endl;

    cout<<"6. ENGLISH"<<endl;

    cout<<"7  ARCHITECTURE"<<endl;

    cout<<"8. TOURISM AND HOPITALITY MANAGEMENT"<<endl;

    cout<<"9. ISLAMIC STUDIES"<<endl;

    cout<<"10. BANGLA"<<endl;

    cout<<"11. PUBLIC HEALTH"<<endl;


    int t;
    cin>>t;
    if(t==1)
    {
        system("CLS");
        cse();
    }
    if(t==2)
    {
        system("CLS");
        llb();
    }

    if(t==3)
    {
        system("CLS");
        bba();
    }
    if(t==4)
    {
        system("CLS");
        eee();
    }
    if(t==5)
    {
        system("CLS");
        civil();
    }
    if(t==6)
    {
        system("CLS");
        english();
    }
    if(t==7)
    {
        system("CLS");
        architecture();

    }
    if(t==8)
    {
        system("CLS");
        hospital();
    }
    if(t==9)
    {
        system("CLS");
        islamic();
    }
    if(t==10)
    {
        system("CLS");
        bangla();
    }
    if(t==11)
    {
        system("CLS");
        health();
    }


}








void ban_club()
{  int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
      std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}


void banned()
{
    std::string line_;
    ifstream file_("banned.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
             system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    std::cin.get();
    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;
    int ban;
    cin>>ban;
    if(ban==0)
    {
        system("CLS");
        ban_club();
    }
}
void com_club()
{
  int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
       std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}

void computer()
{
    std::string line_;
    ifstream file_("computer.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
            system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    std::cin.get();
    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;
    int com;
    cin>>com;
    if(com==0)

    {
        system("CLS");
        com_club();
    }
}
void orp_club()
{
   int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
        std::cout<<"5. Quiz GAME."<<endl;
           gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}


void orpheus()
{
    std::string line_;
    ifstream file_("orpheus.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
             system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    std::cin.get();
    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;
    int orp;
    cin>>orp;
    if(orp==0)
    {
        system("CLS");
        orp_club();
    }
}
void phot_club()
{
    int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
       std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}




void    photographic()
{
    std::string line_;
    ifstream file_("photograpic.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
           system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    std::cin.get();
    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;
    int phot;
    cin>>phot;
    if(phot==0)
    {
        system("CLS");
        phot_club();
    }
}
void cul_club()
{
  int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
      std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}

void cultural()
{
    std::string line_;
    ifstream file_("cultural.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
            system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;
    int cul;
    cin>>cul;
    if(cul==0)
    {
        system("CLS");
        cul_club();
    }
}
void soc_club()
{
     int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
       std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}


void social()
{
    std::string line_;
    ifstream file_("social.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
             system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;

    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;
    int soc;
    cin>>soc;
    if(soc==0)
    {
        system("CLS");
        soc_club();
    }
}
void   spo_club()
{
     int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
       std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}


void sports()
{
    std::string line_;
    ifstream file_("sports.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
            system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;
    int spo;
    cin>>spo;
    if(spo==0)
    {
        system("CLS");
        spo_club();
    }
}

void club()
{
     system("color 0e");
      gotoxy(35,12);
    cout<<"1. COMPUTER CLUB (LUCC)"<<endl;
     gotoxy(35,14);
    cout<<"2. SPORTS CLUB"<<endl;
    gotoxy(35,16);
    cout<<"3. SOCIAL CLUB"<<endl;
     gotoxy(35,18);
    cout<<"4. CULTURAL CLUB"<<endl;
     gotoxy(35,20);
    cout<<"5. BANNED COMUNITY"<<endl;
     gotoxy(35,22);
    cout<<"6. ORPHEUS"<<endl;
     gotoxy(35,24);
    cout<<"7. Leading University Photographic society"<<endl;
     gotoxy(35,26);
    int clu;
    cin>>clu;
    if(clu==1)
    {
        system("CLS");
        computer();

    }
    else if(clu==2)
    {
        system("CLS");
        sports();
    }
    else if(clu==3)
    {
        system("CLS");
        social();
    }
    else if(clu==4)
    {
        system("CLS");
        cultural();
    }
    else if(clu==5)
    {
        system("CLS");
        banned();
    }
    else if(clu==6)
    {
        system("CLS");
        orpheus();

    }
    else if(clu==7)
    {
        system("CLS");
        photographic();
    }
}










void f1_cr()
{
    int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
        std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}



void fourty_first()
{

    std::string line_;
    ifstream file_("41.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
            system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    std::cin.get();

    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;
    int f1;
    cin>>f1;
    if(f1==0)
    {
        system("CLS");
        f1_cr();
    }


}
void f2_cr()
{
     int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
      std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}



void fourty_second()

{
    std::string line_;
    ifstream file_("42.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
            system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    std::cin.get();

    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;
    int f2;
    cin>>f2;
    if(f2==0)
    {
        system("CLS");
        f2_cr();
    }
}

void f3_cr()
{
    int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
        std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}



void fourty_third()
{
    std::string line_;
    ifstream file_("43.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
            system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    std::cin.get();
    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;
    int f3;
    cin>>f3;
    if(f3==0)
    {
        system("CLS");
        f3_cr();
    }
}
void  f4_cr()
{ int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
      std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}



void  fourty_four()
{
    std::string line_;
    ifstream file_("44.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
            system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    std::cin.get();

    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;
    int f4;
    cin>>f4;
    if(f4==0)
    {
        system("CLS");
        f4_cr();
    }


}
void  f5_cr()
{
     int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
       std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}


void  fourty_five()
{
    std::string line_;
    ifstream file_("45.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
            system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    std::cin.get();

    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;
    int f5;
    cin>>f5;
    if(f5==0)
    {
        system("CLS");
        f5_cr();
    }



}
void f7_cr()
{
     int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
       std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}


void   fourty_seven()
{
    std::string line_;
    ifstream file_("47.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
            system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    std::cin.get();

    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;
    int f7;
    cin>>f7;
    if(f7==0)
    {
        system("CLS");
        f7_cr();
    }


}
void  f8_cr()
{
      int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
       std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}



void fourty_eight()
{
    std::string line_;
    ifstream file_("48.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
            system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    std::cin.get();

    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;
    int f8;
    cin>>f8;
    if(f8==0)
    {
        system("CLS");
        f8_cr();
    }
}

void f9_cr()
{
      int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
       std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;



}


void fourty_nine()
{
    std::string line_;
    ifstream file_("49.txt");
    if(file_.is_open())
    {
        while(getline(file_,line_))
        {
            std::cout<<line_<<'\n';
            system("color 9e");
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<endl;
    std::cin.get();

    cout<<endl;
    cout<<"PRESS 0 TO BACK MENU"<<endl;

    int f9;
    cin>>f9;
    if(f9==0)
    {
        system("CLS");
        f9_cr();
    }
}
void   f0_cr()
{
 int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
      std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


}


    void fifty()
    {
        std::string line_;
        ifstream file_("50.txt");
        if(file_.is_open())
        {
            while(getline(file_,line_))
            {
                std::cout<<line_<<'\n';
                system("color 9e");

            }
            file_.close();
        }
        else
            std::cout<<"file is not open"<<endl;
        std::cin.get();
        cout<<endl;
        cout<<"PRESS 0 TO BACK MENU"<<endl;

        int f0;
        cin>>f0;
        if(f0==0)
        {
            system("CLS");
            f0_cr();
        }

    }
    void   fit_cr()
    {
         int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
       std::cout<<"5. Quiz GAME."<<endl;
          gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


    }



    void fifty_one()
    {
        std::string line_;
        ifstream file_("51.txt");
        if(file_.is_open())
        {
            while(getline(file_,line_))
            {
                std::cout<<line_<<'\n';
                system("color 9e");

            }
            file_.close();
        }
        else
            std::cout<<"file is not open"<<endl;
        std::cin.get();
        cout<<endl;
        cout<<"PRESS 0 TO BACK MENU"<<endl;

        int fit;
        cin>>fit;
        if(fit==0)
        {
            system("CLS");
            fit_cr();
        }
    }
    void fi_cr()
    {
        int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
        std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;


    }


    void fifty_two()
    {
        std::string line_;
        ifstream file_("52.txt");
        if(file_.is_open())
        {
            while(getline(file_,line_))
            {
                std::cout<<line_<<'\n';
                system("color 9e");

                file_.close();
            }
        }
        else
            std::cout<<"file is not open"<<endl;
        std::cin.get();
        cout<<endl;
        cout<<"PRESS 0 TO BACK MENU"<<endl;

        int fi;
        cin>>fi;
        if(fi==0)
        {
            system("CLS");
            fi_cr();
        }
    }


    void fif_cr()
    {
       int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
       std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;




    }



    void fifty_three()
    {
        std::string line_;
        ifstream file_("53.txt");
        if(file_.is_open())
        {
            while(getline(file_,line_))
            {
                std::cout<<line_<<'\n';
                    system("color 9e");


            }
            file_.close();
        }
        else
            std::cout<<"file is not open"<<endl;

        std::cin.get();
        cout<<endl;
        cout<<"PRESS 0 TO BACK MENU"<<endl;


        int fif;
        cin>>fif;
        if(fif==0)
        {
            system("CLS");
            fif_cr();
        }

    }




    void cr()
    {
         system("color 0e");
        cout<<"1.  41st batch"<<endl;
        cout<<"2.  42nd batch"<<endl;
        cout<<"3.  43rd batch"<<endl;
        cout<<"4.  44th batch"<<endl;
        cout<<"5.  45th batch"<<endl;
        cout<<"6.  47th batch"<<endl;
        cout<<"7.  48th batch"<<endl;
        cout<<"8.  49th batch"<<endl;
        cout<<"9.  50th batch"<<endl;
        cout<<"10. 51st batch"<<endl;
        cout<<"11. 52nd batch"<<endl;
        cout<<"12. 53rd batch"<<endl;
        int cr;
        cin>>cr;
        if(cr==1)
        {
            system("CLS");
            fourty_first();
        }
        else if(cr==2)
        {
            system("CLS");
            fourty_second();
        }
        else if(cr==3)
        {
            system("CLS");
            fourty_third();
        }
        else if(cr==4)
        {
            system("CLS");
            fourty_four();
        }
        else if(cr==5)
        {
            system("CLS");
            fourty_five();
        }
        else if(cr==6)
        {
            system("CLS");
            fourty_seven();
        }
        else if(cr==7)
        {
            system("CLS");
            fourty_eight();
        }
        else if(cr==8)
        {
            system("CLS");
            fourty_nine();
        }

        else if(cr==9)
        {
            system("CLS");
            fifty();
        }

        else if(cr==10)
        {
            system("CLS");
            fifty_one();
        }

        else if(cr==11)
        {
            system("CLS");
            fifty_two();
        }
        else if(cr==12)
        {
            system("CLS");
            fifty_three();
        }


    }
    void bu1()
    {
       int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
         gotoxy(35,20);
       std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;




    }


    void bus()
    {
        std::string line_;
        ifstream file_("bus.txt");
        if(file_.is_open())
        {
            while(getline(file_,line_))
            {
                std::cout<<line_<<'\n';
                    system("color 0e");


            }
            file_.close();
        }

            cout<<endl;
            cout<<"PRESS 0 TO BACK MENU"<<endl;
            int bu;
            cin>>bu;
            if(bu==0)
            {
                system("CLS");
                bu1();
            }
    }
     void qui(){

      int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;

         gotoxy(35,20);
        std::cout<<"5. Quiz GAME."<<endl;
         gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;
     }
    void quiz()
    {
        int counter=0;
        string name;

        char answer;
        system("color 0e");
         gotoxy(35,10);

        cout<<"WELCOME TO QUIZ GAME"<<endl;
        cout<<endl;
             system("pause");
          system("cls");
            gotoxy(35,10);

        cout<<"Enter Your Name"<<endl;
         gotoxy(35,12);


        getline (cin,name);
        cout<<endl;
        system("cls");
         gotoxy(35,10);

         int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(30,5);
        cout<<"1. 1024 bit is equal to how many byte?"<<endl;
         gotoxy(30,8);
        cout<<"a.1 byte"<<endl;

        gotoxy(55,8);
        cout<<"b.128 byte"<<endl;
         gotoxy(30,12);

        cout<<"c.28 byte"<<endl;
         gotoxy(55,12);

        cout<<"d.100 byte"<<endl;
         gotoxy(30,14);

        cin>>answer;

        if(answer=='b')
        {
            counter++;
            system("color 2e");
             gotoxy(30,16);
            cout<<"Correct Answer!!!"<<endl;
            system("pause");
            system("cls");
            cout<<endl;

        }
        else
        {
            system("color 4e");
            gotoxy(30,16);
            cout<<"Incorrect Answer!!!"<<endl;
            system("pause");
            system("cls");
            cout<<endl;


        }







        char answer1;
         system("color 0e");
        gotoxy(30,5);
        cout<<"2. Which one is the first search engine in internet?"<<endl;
        gotoxy(30,8);
        cout<<"a.WAIS"<<endl;
        gotoxy(55,8);
        cout<<"b.Altavista"<<endl;
        gotoxy(30,12);
        cout<<"c.Archie"<<endl;
        gotoxy(55,12);
        cout<<"d.Google"<<endl;
        gotoxy(30,14);
        cin>>answer1;
        if(answer1=='c')
        {
            counter++;
             system("color 2e");
             gotoxy(30,16);
            cout<<"Correct Answer!!!"<<endl;
            system("pause");
            system("cls");
            cout<<endl;

        }
        else
        {
            system("color 4e");
            gotoxy(30,16);
            cout<<"Incorrect Answer!!!"<<endl;
            system("pause");
            system("cls");
            cout<<endl;
        }
        system("color 0e");
        char answer2;
         gotoxy(30,5);
        cout<<"3. In computer world,Trojan refer to?"<<endl;
         gotoxy(30,8);
        cout<<"a.Virus"<<endl;
         gotoxy(55,8);
        cout<<"b.Malware"<<endl;
         gotoxy(30,12);
        cout<<"c.Worm"<<endl;
         gotoxy(55,12);
        cout<<"d.Spyware"<<endl;
         gotoxy(30,14);
        cin>>answer2;
        if(answer2=='b')
        {
            counter++;
             system("color 2e");
             gotoxy(30,16);
            cout<<"Correct Answer!!!"<<endl;
            system("pause");
            system("cls");
            cout<<endl;

        }
        else
        {
             system("color 4e");
             gotoxy(30,16);
            cout<<"Incorrect Answer!!!"<<endl;
            system("pause");
            system("cls");
            cout<<endl;
        }
        char answer3;
        system("color 0e");
          gotoxy(30,5);
        cout<<"4. Which one is a Text Editor for Microsoft Windows?"<<endl;
         gotoxy(30,8);
        cout<<"a.MS Word"<<endl;
         gotoxy(55,8);
        cout<<"b.Ms Excel"<<endl;
         gotoxy(30,12);
        cout<<"c.WordPad"<<endl;
         gotoxy(55,12);
        cout<<"d.Notepad"<<endl;
         gotoxy(30,14);
        cin>>answer3;
        if(answer3=='c')
        {
            counter++;
             system("color 2e");
             gotoxy(30,16);
            cout<<"Correct Answer!!!"<<endl;
            system("pause");
            system("cls");
            cout<<endl;

        }
        else
        {
             system("color 4e");
             gotoxy(30,16);
            cout<<"Incorrect Answer!!!"<<endl;
            system("pause");
            system("cls");
            cout<<endl;
        }
        char answer4;
         system("color 0e");
         gotoxy(30,5);
        cout<<"5. Which program converts assembly language to machine language?"<<endl;
        gotoxy(30,8);
        cout<<"a.Interpreter"<<endl;
        gotoxy(55,8);
        cout<<"b.Compiler"<<endl;
        gotoxy(30,12);
        cout<<"c.Assembler"<<endl;
        gotoxy(55,12);
        cout<<"d.Comparator"<<endl;
        gotoxy(30,14);
        cin>>answer4;
        if(answer4=='c')
        {
            counter++;
            system("color 2e");
            gotoxy(30,16);

            cout<<"Correct Answer!!!"<<endl;
            system("pause");
            system("cls");
            cout<<endl;

        }
        else
        {
            system("color 4e");
            gotoxy(30,16);
            cout<<"Incorrect Answer!!!"<<endl;
            system("pause");
            system("cls");
            cout<<endl;
        }
         char answer5;
         system("color 0e");
         gotoxy(30,5);
        cout<<"6.Which of the following are table tag?"<<endl;
        gotoxy(30,8);
        cout<<"a.table, thead, tr, td"<<endl;
        gotoxy(55,8);
        cout<<"b.colspan, table, tr"<<endl;
        gotoxy(30,12);
        cout<<"c.table, tt, tr, tdr"<<endl;
        gotoxy(55,12);
        cout<<"d.none of the mentioned"<<endl;
        gotoxy(30,14);
        cin>>answer5;
        if(answer5=='a')
        {
            counter++;
            system("color 2e");
            gotoxy(30,16);

            cout<<"Correct Answer!!!"<<endl;
            system("pause");
            system("cls");
            cout<<endl;

        }
        else
        {
            system("color 4e");
            gotoxy(30,16);
            cout<<"Incorrect Answer!!!"<<endl;
            system("pause");
            system("cls");
            cout<<endl;
        }

        char answer6;
         system("color 0e");
         gotoxy(30,5);
        cout<<"7.The default parameter passing mechanism is?"<<endl;
        gotoxy(30,8);
        cout<<"a.call by value"<<endl;
        gotoxy(55,8);
        cout<<"b.call by reference"<<endl;
        gotoxy(30,12);
        cout<<"c.call by value result"<<endl;
        gotoxy(55,12);
        cout<<"d.none of the mentioned"<<endl;
        gotoxy(30,14);
        cin>>answer6;
        if(answer6=='a')
        {
            counter++;
            system("color 2e");
            gotoxy(30,16);

            cout<<"Correct Answer!!!"<<endl;
            system("pause");
            system("cls");
            cout<<endl;

        }
        else
        {
            system("color 4e");
            gotoxy(30,16);
            cout<<"Incorrect Answer!!!"<<endl;
            system("pause");
            system("cls");
            cout<<endl;
        }

          char answer7;
         system("color 0e");
         gotoxy(30,5);
        cout<<"8.A processor command?"<<endl;
        gotoxy(30,8);
        cout<<"a.need not start on a new line"<<endl;
        gotoxy(67,8);
        cout<<"b.need not start on the first column"<<endl;
        gotoxy(30,12);
        cout<<"c.has # as the first character"<<endl;
        gotoxy(67,12);
        cout<<"d.comes before the first executable statement"<<endl;
        gotoxy(30,14);
        cin>>answer7;
        if(answer7=='c')
        {
            counter++;
            system("color 2e");
            gotoxy(30,16);

            cout<<"Correct Answer!!!"<<endl;
            system("pause");
            system("cls");
            cout<<endl;

        }
        else
        {
            system("color 4e");
            gotoxy(30,16);
            cout<<"Incorrect Answer!!!"<<endl;
            system("pause");
            system("cls");
            cout<<endl;
        }
          char answer8;
         system("color 0e");
         gotoxy(30,5);
        cout<<"9.what command is used to remove file?"<<endl;
        gotoxy(30,8);
        cout<<"a.dm"<<endl;
        gotoxy(55,8);
        cout<<"b.rm"<<endl;
        gotoxy(30,12);
        cout<<"c.delete"<<endl;
        gotoxy(55,12);
        cout<<"d.erase"<<endl;
        gotoxy(30,14);
        cin>>answer8;
        if(answer8=='b')
        {
            counter++;
            system("color 2e");
            gotoxy(30,16);

            cout<<"Correct Answer!!!"<<endl;
            system("pause");
            system("cls");
            cout<<endl;

        }
        else
        {
            system("color 4e");
            gotoxy(30,16);
            cout<<"Incorrect Answer!!!"<<endl;
            system("pause");
            system("cls");
            cout<<endl;
        }

        char answer9;
         system("color 0e");
         gotoxy(30,5);
        cout<<"10.what service is used to translate domain name to ip adresses?"<<endl;
        gotoxy(30,8);
        cout<<"a.NFS"<<endl;
        gotoxy(55,8);
        cout<<"b.SMB"<<endl;
        gotoxy(30,12);
        cout<<"c.NIS"<<endl;
        gotoxy(55,12);
        cout<<"d.DNS"<<endl;
        gotoxy(30,14);
        cin>>answer9;
        if(answer9=='d')
        {
            counter++;
            system("color 2e");
            gotoxy(30,16);

            cout<<"Correct Answer!!!"<<endl;
            system("pause");
            system("cls");
            cout<<endl;

        }
        else
        {
            system("color 4e");
            gotoxy(30,16);
            cout<<"Incorrect Answer!!!"<<endl;
            system("pause");
            system("cls");
            cout<<endl;
        }


          gotoxy(28,6);
        cout<<"CONGRATULAIONS"<<endl;
         system("color 0e");
         gotoxy(28,8);
         cout<<name<<endl;
         gotoxy(28,10);
         cout<<"YOUR TOTAL SCORE IS = "<<counter<<endl;
         cout<<endl;
         cout<<"PRESS 0 TO BAACK MENU"<<endl;
         int quiz1;
         cin>>quiz1;
         if(quiz1==0)
         {
             system("CLS");
             qui();
         }





    }






    int main()
    {

        int x,y;
        gotoxy(35,10);

        system("color 0e");
        gotoxy(28,6);
        cout<<"****************************************************"<<endl;
          gotoxy(28,7);
          cout<<"*"<<endl;
            gotoxy(28,8);
          cout<<"*"<<endl;
            gotoxy(28,9);
          cout<<"*"<<endl;
            gotoxy(28,10);
          cout<<"*"<<endl;
            gotoxy(79,7);
          cout<<"*"<<endl;
           gotoxy(79,8);
          cout<<"*"<<endl;
           gotoxy(79,9);
          cout<<"*"<<endl;
          gotoxy(79,10);
          cout<<"*"<<endl;
        gotoxy(30,8);

        cout<<"WELCOME TO LEADING UNIVERSITY STUDENTS HELP DESK"<<endl;

         gotoxy(28,10);
        cout<<"****************************************************"<<endl;
        gotoxy(35,12);

        std::cout<<"1. TEACHERS INFORMATION.";


        gotoxy(35,14);
        std::cout<<"2. EXTRA ACTIVITIES CLUB INFORMATION.";


        gotoxy(35,16);
        std::cout<<"3. CR INFORMATIOIN.";


        gotoxy(35,18);
        std::cout<<"4. GAME."<<endl;
        gotoxy(35,20);
        std::cout<<"5. QUIZ GAME."<<endl;
        gotoxy(35,22);
        std::cout<<"6. BUS SCHEDULE."<<endl;




        while(1)
        {
            int m;
              gotoxy(35,24);
              std::cin>>m;

            if(m==1)
            {
                system("CLS");
                teacher();

            }

            else if(m==2)
            {
                system("CLS");
                club();
            }
            else if(m==3)
            {
                system("CLS");
                cr();
            }
            else if(m==4)
            {
                system("CLS");
                game();
            }
            else if(m==5)
            {
                system("CLS");
                quiz();
            }
              else if(m==6)
            {
                system("CLS");
                bus();
            }

        }


        return 0;
    }

