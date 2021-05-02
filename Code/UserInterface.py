#main menu
def menu_one():
    print("Choose from the following:")
    print("(1) Employee")              #php will be used to determine access 
    print("(2) User")
    print("(Q) Exit.")
    
    choice = input(print("Who are you? "))

    return choice

#Employee menu
#determines the employee access  
def Employee_menu():

#User menu
#user options
def User_menu():
    print("What do you want to do?")
    print("(1)View events schedule")
    print("(2)View cafeteria schedule")
    print("(3)View Gym schedule")
    print("(4)View Exercise course schedule")
    print("(Q)uit ")

    choice = input(print("Enter an option: "))

#    return choice

    while choice != 'Q':
        if choice == '1':
            #php code
        elif choice == '2':
            #php code
        elif choice == '3':
            #php code
        elif choice == '4':
            #php code
    
#Manager menu
#manager options
def manager_menu():
    print("What do you want to do?")
    print("(1) Update Schedule.")
    print("(2) Update Employees.")
    print("(3) Update Volunteers")
    print("(Q) Exit.")

    choice = input(print("Enter an option: "))
 #   return choice

     while choice != 'Q':
        if choice == '1':
            #php code
        elif choice == '2':
            #php code
        elif choice == '3':
            #php code

#Event planner menu
#event planner options
def eventPlanner_menu():          
    print("What do you want to do?")
    print("(1) Add an Event")
    print("(2) Delete an Event")
    print("(3) Update Event")
    print("(Q) Exit.")

    choice = input(print("Enter an option: "))
#    return choice

    while choice != 'Q':
        if choice == '1':
            #php code
        elif choice == '2':
            #php code
        elif choice == '3':
            #php code

#Cook menu
#cook options 
def cook_menu():
    print("What do you want to do?")
    print("(1) Add meals")
    print("(2) Delete meals")
    print("(3) Update meals")
    print("(Q) Exit.")

    choice = input(print("Enter an option: "))
    return choice

#Trainer menu
#trainer options    
def trainer_menu():
    print("What do you want to do?")
    print("(1) Add a course")
    print("(2) Add a trainee")
    print("(3) Delete a course")
    print("(4) Delete a trainee")
    print("(5) Update a course")
    print("(6) Update trainee information")
    print("(Q) Exit.")

    choice = input(print("Enter an option: "))
    return choice
    
def login():
    username = input(print("Username: "))
    password = input(print("Password: "))

    return username, password

def main():
    type_of_user = menu_one()

    while choice != "Q":
        #employee  
        if choice == '1':
           username, password = login()
           #php code
           if (username == [php code]) and (password == [php code]):
              option = 
                  #manager 
                  if [php code here]: 
                    manager_menu()
                  #event planner   
                  elif[php code here]:
                    eventPlanner_menu()
                  #cook 
                  elif [php code here]:
                      cook_menu()

                  #trainer
                  elif [php code here]:
                      trainer_menu()
                      
        #User
        elif choice == '2':
            user_menu()

    

    

    
