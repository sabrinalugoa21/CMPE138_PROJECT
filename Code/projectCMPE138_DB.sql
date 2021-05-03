	drop database if exists community_center;
    create database community_center;
    use community_center;
    
    create table employee
	(e_id		varchar(8) not null,
	 name		varchar(25),
	 address	varchar(25),
     shifts 	varchar(25),
     password   varchar(50) not null,
	 primary key (e_id)
	);

	create table manager 
	(e_id	varchar(8) , 
	 primary key (e_id),
	 foreign key (e_id) references employee(e_id)
	);
    
	create table Trainer 
	(e_id	varchar(8), 
	 primary key (e_id),
	 foreign key (e_id) references employee(e_id)
	);
    
    
	create table Event_Planner 
	(e_id	varchar(8), 
	 primary key (e_id),
	 foreign key (e_id) references employee(e_id)
	);
    
    create table Janitor 
	(e_id	varchar(8), 
	 primary key (e_id),
	 foreign key (e_id) references employee(e_id)
	);
    
	create table Cook 
	(e_id	varchar(8), 
	 primary key (e_id),
	 foreign key (e_id) references employee(e_id)
	);
    
    create table Cafeteria 
	(c_name		varchar(25),
     m_name		varchar(25),
     type		varchar(25),
     amount     numeric(25),
	 closing_time numeric(10),
	 opening_time numeric(10),
	 primary key (c_name)
	);
    
	create table Event
	(e_name		varchar(50),
	 start_time	numeric(10),
	 end_time	numeric(10),
     date 	    numeric(10),
     e_id varchar(8),
	 primary key (e_name),
     foreign key(e_id) references Event_planner(e_id)
	);
    
	create table Gym
	(g_name			varchar(100),
	 closing_time	numeric(10),
     opening_time 	numeric(10),	
	 primary key (g_name)
	);
    
    create table Course
	(c_id	 varchar(8),
	 g_name  varchar(25),
     type    varchar(25),
     time 	 varchar(25),
     dates   varchar(50),
     primary key(type),
     foreign key(c_id) references Trainer(e_id),
	 foreign key(g_name) references Gym(g_name)
	);
    
    create table Community_member
	(c_id		varchar(8),
	 name	    varchar(25),
     password   varchar(50),
	 primary key (c_id)
	);
    
	create table Gym_member
	(c_id		varchar(8),
	 g_name 	varchar(25),
     course     varchar(25),
     trainer    varchar(10),
     primary key(c_id),
	 foreign key (c_id) references Community_member(c_id),
	foreign key (g_name) references Gym(g_name),
	foreign key (course) references Course(type),
	foreign key (trainer) references Trainer(e_id)
	);
    
	create table Participant
	(c_id		 varchar(8),
	 c_name 	 varchar(25),
     primary key (c_id),
	 foreign key (c_id) references Community_member(c_id),
	 foreign key (c_name) references Cafeteria(c_name)
	);
    
	create table Volunteer
	(c_id		 varchar(8),
     primary key (c_id),
	 foreign key (c_id) references Community_member(c_id)
	);
    
	create table Server
	(c_id    varchar(8),
	 c_name  varchar(25),
     primary key (c_id),
	 foreign key (c_id) references Volunteer(c_id),
     foreign key (c_name) references Cafeteria(c_name)
	);
  
  	create table Worker
	(c_id    varchar(8),
	 foreign key (c_id) references Volunteer(c_id)
	);
   
   	create table WORKS_AT 
	(g_name     varchar(25),
	 e_id 		varchar(8),
     primary key(g_name, e_id),
	 foreign key (g_name) references Gym(g_name),
	 foreign key (e_id) references Trainer(e_id)
	);
    
    create table WORKS_IN 
    (e_name varchar(25),
     c_id   varchar(8),
     primary key (e_name, c_id),
     foreign key(e_name) references Event(e_name),
	 foreign key(c_id) references Worker(c_id)
    );
    
    create table PARTICIPATES_IN
    (e_name varchar(25),
     c_id   varchar(8),
     primary key(e_name, c_id),
     foreign key(e_name) references Event(e_name),
	 foreign key(c_id) references Participant(c_id)
    );

    
    