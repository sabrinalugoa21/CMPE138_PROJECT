#include <iostream>
#include <string>
#include <cstring>
#include <sqlite3.h> 
#include <stdio.h>

using namespace std; 

/**********FUNCTIONS**************/
int main_menu();
void Employee_menu();
void User_menu();
void Manager_menu();
void EventPlanner_menu();
void Trainer_menu();
void Cook_menu();
void login();
void build_db();
void fill_db();
void query();
/********************************/

/* Open database */
sqlite3 *db;
char *zErrMsg = 0;
char *sql;
int rc = sqlite3_open("Community_Center.db", &db);
const char* data = "Callback function called";

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
   int i;
   for(i = 0; i<argc; i++) {
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}

int main()
{
    build_db();
    fill_db();

    char username;
    char password; 
    //int type_of_user;

    //type_of_user = main_menu();
    // login();

    main_menu();    
    
    // query();

    return 0;
}

int main_menu()
{
    int choice  = 0;
    while(choice != 3)
    {
        cout << "Choose from the following: " << endl;
        cout << "(1) Employee" << endl;
        cout << "(2) User" << endl;
        cout << "(3) Quit" << endl; 
        
        cout << "Enter an option: " << endl;
        cin >> choice;

        if(choice == 1)
        {
            Employee_menu();
        }

        else if(choice == 2)
        {
            User_menu();
        }
    }
    return choice;
}

// User's menu 
void User_menu()
{
    int choice  = 0;
    string name; 

    while (choice < 4)
    {
        cout << "What do you want to do? " << endl;
        cout << "(1) View events schedule" << endl;
        cout << "(2) View Cafeteria schedule" << endl;
        cout << "(3) View gym courses schedule" << endl; 
        cout << "(4) Quit" << endl;
        //cout << "(5) Sign up for a gym membership" << endl;
        
        cout << "Enter an option: " << endl;
        cin >> choice;

        if (choice == 1)
        {
            sql = "SELECT * from event";
            rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);
        }
        else if (choice == 2)
        {
            sql = "SELECT * from cafeteria";
            rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);
        }
        else if (choice == 3)
        {
            sql = "SELECT * from course";
            rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);
        }
        else 
        {
            //php code 
        }

    }

}

void Employee_menu()
{
    int choice  = 0;
    while(choice < 5)
    {
        cout << "Choose from the following: " << endl;
        cout << "(1) Manager" << endl;
        cout << "(2) Event Planner" << endl;
        cout << "(3) Trainer" << endl; 
        cout << "(4) Cook" << endl; 
        cout << "(5) Quit" << endl; 
        
        cout << "Enter an option: " << endl;
        cin >> choice;

        if(choice == 1)
        {
            Manager_menu();
        }

        else if(choice == 2)
        {
            EventPlanner_menu();
        }

        else if(choice == 3)
        {
            Trainer_menu();
        }

        else if(choice == 4)
        {
            Cook_menu();
        }
    }
}

void Manager_menu()
{
    int choice;

    while (choice < 4)
    {
        cout << "What do you want to do? " << endl;
        cout << "(1) Update Schedule" << endl;
        cout << "(2) Update Employees" << endl;  //add, delete, mod
        cout << "(3) Update Volunteers" << endl;  //add, delete, mod
        cout << "(4) Quit" << endl;
        
        cout << "Enter an option: " << endl;
        cin >> choice;

        if (choice == 1)
        {
            //php code
        }
        else if (choice == 2)
        {
            //php code
        }
        else if (choice == 3)
        {
            //php code
        }
        else 
        {
            //php code
        }
    }    
}

void EventPlanner_menu()
{
    int choice;
    string e_name, start_time, end_time, date, e_id;
    string sql_query;

    while (choice < 4)
    {
        cout << "What do you want to do? " << endl;
        cout << "(1) Add an Event" << endl;
        cout << "(2) Delete an Event" << endl;  
        cout << "(3) Update an Event" << endl;  
        cout << "(4) Quit" << endl;
        
        cout << "Enter an option: " << endl;
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter event name: " << endl;
            getline(cin, e_name);
            cout << "Enter event start time: " << endl;
            getline(cin, start_time);
            cout << "Enter event end time: " << endl;
            getline(cin, end_time);
            cout << "Enter event date: " << endl;
            getline(cin, date);
            cout << "Enter event employee id: " << endl;
            getline(cin, e_id);

            sql_query = "INSERT INTO employee VALUES (" 
                        + e_name + ", " + start_time + ", " 
                        + end_time + ", " + date + ", " + e_id + ");";
            cout << sql_query << endl;
            sql = const_cast<char*>(sql_query.c_str());
            rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
           if( rc != SQLITE_OK )
           {
              fprintf(stderr, "SQL error: %s\n", zErrMsg);
              sqlite3_free(zErrMsg);
           } 
           else fprintf(stdout, "Table created successfully\n");

           sql = "SELECT * from event";
        rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);
        }
        else if (choice == 2)
        {
            //php code
        }
        else if (choice == 3)
        {
            //php code
        }
        else 
        {
            //php code
        }

    }    
}

void Trainer_menu()
{
    int choice;
    

    while (choice < 7)
    {
        cout << "What do you want to do? " << endl;
        cout << "(1) Add a course" << endl;
        cout << "(2) Add a trainee" << endl;  
        cout << "(3) Delete a course" << endl; 
        cout << "(4) Delete a trainee" << endl;
        cout << "(5) Update a course" << endl;
        cout << "(6) Update a trainee" << endl; 
        cout << "(7) Quit" << endl;
        
        cout << "Enter an option: " << endl;
        cin >> choice;

        if (choice == 1)
        {
            //php code
        }
        else if (choice == 2)
        {
            //php code
        }
        else if (choice == 3)
        {
            //php code
        }
        else if (choice == 4)
        {
            //php code
        }
        else if (choice == 5)
        {
            //php code
        }
        else if (choice == 6)
        {
            //php code
        }
        else 
        {
            //php code
        }
    }    
}

void Cook_menu()
{
    int choice;
    

    while (choice < 7)
    {
        cout << "What do you want to do? " << endl;
        cout << "(1) Add meals" << endl;
        cout << "(2) Delete meals" << endl;  
        cout << "(3) Update meals" << endl; 
        cout << "(4) Quit" << endl;
        
        cout << "Enter an option: " << endl;
        cin >> choice;

        if (choice == 1)
        {
            //php code
        }
        else if (choice == 2)
        {
            //php code
        }
        else if (choice == 3)
        {
            //php code
        }
        else 
        {
            //php code
        }
        
    }
}

void login()
{
    string username;
    string password; 

    cout << "Username: ";
    cin >> username;
    cout << endl;

    cout << "Password: ";
    cin >> password;
    cout << endl;
}

void build_db()
{
    /*EMPLOYEE*/
    sql =   """ create table EMPLOYEE ( \
                e_id     numeric(8), \
                name     varchar(25), \
                address     varchar(25), \
                password    varchar(50) not null, \
                primary key (e_id) ); \
            """
            ; 
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   
   if( rc != SQLITE_OK )
   {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } 
   else fprintf(stdout, "Table created successfully\n");
        
    /*E_SHIFT*/
    sql =   """ create table E_SHIFT ( \
                e_id    varchar(8), \
                shift   varchar(25), \
                primary key (e_id), \
                foreign key (e_id) references employee(e_id) ); \
            """ 
            ;
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK )
   {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } 
   else fprintf(stdout, "Table created successfully\n");

   /*MANAGER*/
    sql =   """ create table manager ( \
                e_id   varchar(8) , \
                primary key (e_id), \
                foreign key (e_id) references employee(e_id) ); \
            """
            ;
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK )
   {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } 
   else fprintf(stdout, "Table created successfully\n");

    /*TRAINER*/
    sql =   """ create table Trainer ( \
                e_id   varchar(8), \
                primary key (e_id), \
                foreign key (e_id) references employee(e_id) \
                ); \
            """ 
            ;
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK )
   {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } 
   else fprintf(stdout, "Table created successfully\n");

   /*EVENT_PLANNER*/
    sql =   """ create table Event_Planner ( \
                e_id   varchar(8), \
                primary key (e_id), \
                foreign key (e_id) references employee(e_id) \
                ); \
            """ 
            ;
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK )
   {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } 
   else fprintf(stdout, "Table created successfully\n");

   /*JANITOR*/
    sql =   """ create table Janitor ( \
                e_id   varchar(8), \
                primary key (e_id), \
                foreign key (e_id) references employee(e_id) \
                ); \
            """ 
            ;
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK )
   {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } 
   else fprintf(stdout, "Table created successfully\n");

   /*COOK*/
    sql =   """ create table Cook ( \
                e_id   varchar(8), \
                primary key (e_id), \
                foreign key (e_id) references employee(e_id) \
                ); \
            """ 
            ;
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK )
   {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } 
   else fprintf(stdout, "Table created successfully\n");

   /*CAFETERIA*/
    sql =   """ create table Cafeteria ( \
                c_name     varchar(25), \
                 m_name     varchar(25), \
                 type       varchar(25), \
                 amount     numeric(25), \
                 closing_time numeric(10), \
                 opening_time numeric(10), \
                 primary key (c_name) \
                ); \
            """ 
            ;
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK )
   {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } 
   else fprintf(stdout, "Table created successfully\n");

   /*EVENT*/
    sql =   """ create table Event ( \
                e_name     varchar(50), \
                start_time numeric(10), \
                end_time   numeric(10), \
                date       numeric(10), \
                e_id varchar(8), \
                primary key (e_name), \
                foreign key(e_id) references Event_planner(e_id) \
                ); \
            """ 
            ;
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK )
   {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } 
   else fprintf(stdout, "Table created successfully\n");

   /*GYM*/
    sql =   """ create table Gym ( \
                g_name         varchar(100), \
                closing_time   numeric(10), \
                opening_time   numeric(10), \
                primary key (g_name) \
                ); \
            """ 
            ;
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK )
   {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } 
   else fprintf(stdout, "Table created successfully\n");

   /*COURSE*/
    sql =   """ create table Course ( \
                c_id    varchar(8), \
                g_name  varchar(25), \
                type    varchar(25), \
                time    varchar(25), \
                primary key(type), \
                foreign key(c_id) references Trainer(e_id), \
                foreign key(g_name) references Gym(g_name) \
                ); \
            """ 
            ;
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK )
   {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } 
   else fprintf(stdout, "Table created successfully\n");

   /**/
    sql =   """ create table COURSE_DATE ( \
                type    varchar(25), \
                c_date  varchar(25), \
                primary key(type), \
                foreign key(type) references Course(type) \
                ); \
            """ 
            ;
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK )
   {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } 
   else fprintf(stdout, "Table created successfully\n");

   /*COMMUNITY_MEMBER*/
    sql =   """ create table Community_member ( \
                c_id       varchar(8), \
                name       varchar(25), \
                password   varchar(50), \
                primary key (c_id) \
                ); \
            """ 
            ;
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK )
   {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } 
   else fprintf(stdout, "Table created successfully\n");

   /*GYM_MEMBER*/
    sql =   """ create table Gym_member ( \
                c_id       varchar(8), \
                g_name     varchar(25), \
                course     varchar(25), \
                trainer    varchar(10), \
                primary key(c_id), \
                foreign key (c_id) references Community_member(c_id), \
                foreign key (g_name) references Gym(g_name), \
                foreign key (course) references Course(type), \
                foreign key (trainer) references Trainer(e_id) \
                ); \
            """ 
            ;
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK )
   {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } 
   else fprintf(stdout, "Table created successfully\n");

   /*PARTICIPANT*/
    sql =   """ create table Participant ( \
                c_id        varchar(8), \
                c_name      varchar(25), \
                primary key (c_id), \
                foreign key (c_id) references Community_member(c_id), \
                foreign key (c_name) references Cafeteria(c_name) \
                ); \
            """ 
            ;
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK )
   {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } 
   else fprintf(stdout, "Table created successfully\n");

   /*VOLUNTEER*/
    sql =   """ create table Volunteer ( \
                c_id        varchar(8), \
                primary key (c_id), \
                foreign key (c_id) references Community_member(c_id) \
                ); \
            """ 
            ;
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK )
   {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } 
   else fprintf(stdout, "Table created successfully\n");

   /*SERVER*/
    sql =   """ create table Server ( \
                c_id    varchar(8), \
                c_name  varchar(25), \
                primary key (c_id), \
                foreign key (c_id) references Volunteer(c_id), \
                foreign key (c_name) references Cafeteria(c_name) \
                ); \
            """ 
            ;
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK )
   {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } 
   else fprintf(stdout, "Table created successfully\n");

   /*WORKER*/
    sql =   """ create table Worker ( \
                c_id    varchar(8), \
                foreign key (c_id) references Volunteer(c_id) \
                ); \
            """ 
            ;
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK )
   {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } 
   else fprintf(stdout, "Table created successfully\n");

   /*WORKS_AT*/
    sql =   """ create table WORKS_AT ( \
                g_name     varchar(25), \
                e_id       varchar(8), \
                primary key(g_name, e_id), \
                foreign key (g_name) references Gym(g_name), \
                foreign key (e_id) references Trainer(e_id) \
                ); \
            """ 
            ;
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK )
   {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } 
   else fprintf(stdout, "Table created successfully\n");

   /*WORKS_IN*/
    sql =   """ create table WORKS_IN ( \
                e_name varchar(25), \
                c_id   varchar(8), \
                primary key (e_name, c_id), \
                foreign key(e_name) references Event(e_name), \
                foreign key(c_id) references Worker(c_id) \
                ); \
            """ 
            ;
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK )
   {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } 
   else fprintf(stdout, "Table created successfully\n");

   /*PARTICIPATES_IN*/
    sql =   """ create table PARTICIPATES_IN ( \
                e_name varchar(25), \
                c_id   varchar(8), \
                primary key(e_name, c_id), \
                foreign key(e_name) references Event(e_name), \
                foreign key(c_id) references Participant(c_id) \
                ); \
            """ 
            ;
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK )
   {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } 
   else fprintf(stdout, "Table created successfully\n");
}

void fill_db()
{
    /*EMPLOYEE*/
    sql = """   INSERT INTO employee VALUES ('123', 'Alice', '333 Dorsey Lane', 'herPass'), \
                                            ('234', 'Bob', '444 Rain Rd', 'hisPass'), \
                                            ('392', 'Vero', '355 Burrow Rd', 'verito'), \
                                            ('899', 'Rythor', '277 SJ street', 'ryan82'), \
                                            ('589', 'Carther', '4822 Maple Ct', 'canadianSyrup'); \
          """
          ;
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    if( rc != SQLITE_OK ) 
    {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
    } 
   else fprintf(stdout, "Records created successfully\n");

    /*E_SHIFT*/
    sql = """   INSERT INTO e_shift VALUES  ('123', 'MON-TUES (9am-2pm)'), \
                                            ('234','MON-FRI (2PM-10PM)'), \
                                            ('392','THUR-FRI (4PM-10PM)'), \
                                            ('899','MON-FRI (9AM-5pm)'), \
                                            ('589','MON-FRI (9AM-5pm)'); \
          """
          ;
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    if( rc != SQLITE_OK ) 
    {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
    } 
   else fprintf(stdout, "Records created successfully\n");

   /*GYM*/
    sql = """   INSERT INTO gym VALUES  ('Spartan Gym', 900, 1700); \
          """
          ;
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    if( rc != SQLITE_OK ) 
    {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
    } 
   else fprintf(stdout, "Records created successfully\n");

   /*MANAGER*/
    sql = """   INSERT INTO manager VALUES  ('123'); \
          """
          ;
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    if( rc != SQLITE_OK ) 
    {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
    } 
   else fprintf(stdout, "Records created successfully\n");

   /*JANITOR*/
    sql = """   INSERT INTO janitor VALUES  ('234'); \
          """
          ;
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    if( rc != SQLITE_OK ) 
    {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
    } 
   else fprintf(stdout, "Records created successfully\n");

   /*TRAINER*/
    sql = """   INSERT INTO trainer VALUES  ('392'); \
          """
          ;
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    if( rc != SQLITE_OK ) 
    {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
    } 
   else fprintf(stdout, "Records created successfully\n");

   /*COOK*/
    sql = """   INSERT INTO cook VALUES ('899'); \
          """
          ;
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    if( rc != SQLITE_OK ) 
    {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
    } 
   else fprintf(stdout, "Records created successfully\n");

   /*EVENT_PLANNER*/
    sql = """   INSERT INTO event_planner VALUES ('589'); \
          """
          ;
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    if( rc != SQLITE_OK ) 
    {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
    } 
   else fprintf(stdout, "Records created successfully\n");

   /*EVENT*/
    sql = """   INSERT INTO Event VALUES    ('Swim Comp', 1100, 1300, 041821, 589), \
                                            ('Powerlifting Meet', 1200, 1500, 042221, 589); \
          """
          ;
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    if( rc != SQLITE_OK ) 
    {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
    } 
   else fprintf(stdout, "Records created successfully\n");

   /*COMMUNITY_MEMBER*/
    sql = """   INSERT INTO community_member VALUES ('6767', 'Dorthy', 'dorthy!'), \
                                                    ('9999', 'Robert', 'psRob'), \
                                                    ('8888', 'Don', 'tClient'), \
                                                    ('1212', 'Henly', 'bedless'), \
                                                    ('1332', 'Zeppelin', 'Led_Zeppers'), \
                                                    ('7215', 'Grant', 'dmgfjwnfe'), \
                                                    ('0202', 'Biesty', 'The-Beast'), \
                                                    ('1984', 'George', 'animals_rule'), \
                                                    ('5521', 'Arnold', 'arn11'), \
                                                    ('5522', 'Brian', 'ian93'), \
                                                    ('5523', 'Reynold', 'reyspray'), \
                                                    ('5524', 'Sabrina', 'blacksab'), \
                                                    ('5525', 'Casey', 'caseydia'), \
                                                    ('5526', 'Gianine', 'nineteen'), \
                                                    ('5527', 'Veronica', 'VeritoBurito'), \
                                                    ('5528', 'Ryan', 'yannay'); \
          """
          ;
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    if( rc != SQLITE_OK ) 
    {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
    } 
   else fprintf(stdout, "Records created successfully\n");

   /*CAFETERIA*/
    sql = """   INSERT INTO cafeteria VALUES ('Spartan Eats', 'Cheese Burger', 'Lunch', 9, 900, 1700); \
          """
          ;
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    if( rc != SQLITE_OK ) 
    {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
    } 
   else fprintf(stdout, "Records created successfully\n");

   /*PARTIICPANT*/
    sql = """   INSERT INTO participant VALUES  ('6767', 'Spartan Eats'), \
                                                ('9999', 'Spartan Eats'); \
          """
          ;
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    if( rc != SQLITE_OK ) 
    {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
    } 
   else fprintf(stdout, "Records created successfully\n");

   /*VOLUNTEER*/
    sql = """   INSERT INTO volunteer VALUES    ('8888'), \
                                                ('1212'), \
                                                ('1332'), \
                                                ('7215'); \
          """
          ;
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    if( rc != SQLITE_OK ) 
    {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
    } 
   else fprintf(stdout, "Records created successfully\n");

   /*WORKER*/
    sql = """   INSERT INTO worker VALUES   ('8888'), \
                                            ('1212'); \
          """
          ;
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    if( rc != SQLITE_OK ) 
    {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
    } 
   else fprintf(stdout, "Records created successfully\n");

   /*SERVER*/
    sql = """   INSERT INTO server VALUES   ('1332', 'Spartan Eats'), \
                                            ('7215', 'Spartan Eats'); \
          """
          ;
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    if( rc != SQLITE_OK ) 
    {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
    } 
   else fprintf(stdout, "Records created successfully\n");

   /*COURSE*/
    sql = """   INSERT INTO course VALUES   ('392', 'Spartan Gym', 'Yoga', '900'), \
                                            ('392', 'Spartan Gym', 'Powerlifting', '1200'),\
                                            ('392', 'Spartan Gym', 'Beginner Weights', '1100'), \
                                            ('392', 'Spartan Gym', 'Swimming Basics', '1200'); \
          """
          ;
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    if( rc != SQLITE_OK ) 
    {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
    } 
   else fprintf(stdout, "Records created successfully\n");

   /*COURSE_DATE*/
    sql = """   INSERT INTO course_date VALUES  ('Yoga', '052121'), \
                                                ('Powerlifting', '062721'), \
                                                ('Beginner Weights', '063021'); \
          """
          ;
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    if( rc != SQLITE_OK ) 
    {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
    } 
   else fprintf(stdout, "Records created successfully\n");

   /*GYM_MEMBER*/
    sql = """   INSERT INTO gym_member VALUES   ('0202', 'Spartan Gym', 'Yoga', '392'); \
          """
          ;
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    if( rc != SQLITE_OK ) 
    {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
    } 
   else fprintf(stdout, "Records created successfully\n");
}

void query()
{
    string sql_query;
    cout << "Enter query: ";
    getline(cin, sql_query);
    sql = const_cast<char*>(sql_query.c_str());
    rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    if( rc != SQLITE_OK ) {
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
    sqlite3_free(zErrMsg);
    } 
    else fprintf(stdout, "Operation done successfully\n");
}