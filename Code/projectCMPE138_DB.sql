-- 1. drop the database Community_ceter if it exists
-- 2. create the database Community_ceter
-- 3. set the current DB context to the newly created database, and then execute the DDL statements.

-- drop database if exists Community_ceter;
create database Community_ceter;
use Community_ceter;

	create table employee (
		e_id		numeric(8),
	 	name		varchar(25),
	 	address		varchar(25),
     	-- shifts 		varchar(25), -- Multi valued
     	password   	varchar(50) not null,
	 	primary key (e_id)
	);

	create table shifts (
		e_id  	numeric(8,)
		shift 	varchar(25),
		primary key (e_id),
		foreign key (e_id) references employee(e_id)
	);

	create table manager (
		e_id	varchar(50), 
	 	primary key (e_id),
	 	foreign key (e_id) references employee(e_id)
			on delete set null
	);
    
	create table Trainer (
		e_id	varchar(50), 
 		primary key (e_id),
	 	foreign key (e_id) references employee(e_id)
			on delete set null
	);
    
    
	create table Event_Planner (
		e_id	varchar(50), 
	 	primary key (e_id),
		foreign key (e_id) references employee(e_id)
			on delete set null
	);
    
    create table Janitor (
    	e_id	varchar(50), 
	 	primary key (e_id),
	 	foreign key (e_id) references employee(e_id)
			on delete set null
	);
    
	create table Cook (
		e_id	varchar(50), 
	 	primary key (e_id),
	 	foreign key (e_id) references employee(e_id)
			on delete set null
	);
    
    create table Cafeteria (
		c_name		varchar(25),
		m_name		varchar(25),
		type		varchar(25),
		amount     numeric(100),
		closing_time numeric(10),
		opening_time numeric(10),
		primary key (c_name)
	);
    
	create table Event (
		e_name		varchar(50),
		start_time	numeric(10),
		end_time	numeric(10),
		date 	    numeric(10),
		e_id varchar(25),
		primary key (e_name),
		foreign key(e_id) references Event_planner(e_id)
			on delete set null 
	);
    
	create table Gym (
		g_name			varchar(100),
		closing_time	numeric(10),
		opening_time 	numeric(10),	
		primary key (g_name)
	);
    
    create table Course (
		c_id	 varchar(25),
		g_name  varchar(25),
		type    varchar(25),
		time 	 varchar(25),
		dates   varchar(50),
		primary key(type),
		foreign key(c_id) references Trainer(e_id)
			on delete set null,
		foreign key(g_name) references Gym(g_name)
			on delete set null
	);
    
    create table Community_member (
		c_id		numeric(8),
	 	name	    varchar(25),
     	password   varchar(50),
	 	primary key (c_id)
	);
    
	create table Gym_member (
		c_id		numeric(8),
		g_name 	varchar(25),
		course     varchar(25),
		trainer    varchar(10),
		primary key(c_id),
		foreign key (c_id) references Community_member(c_id)
			on delete set null,
		foreign key (g_name) references Gym(g_name)
			on delete set null,
		foreign key (course) references Course(type)
			on delete set null,
		foreign key (trainer) references Trainer(e_id)
			on delete set null
	);
    
	create table Participant (	
		c_id		 numeric(8),
	 	c_name 	 varchar(25),
     	primary key (c_id),
	 	foreign key (c_id) references Community_member(c_id)
			on delete set null,
	 	foreign key (c_name) references Cafeteria(c_name)
	);
    
	create table Volunteer (
		c_id		 numeric(8),
     	primary key (c_id),
	 	foreign key (c_id) references Community_member(c_id)
			on delete set null 
	);
    
	create table Server	(
		c_id    varchar(25),
	 	c_name  varchar(25),
     	primary key (c_id),
	 	foreign key (c_id) references Volunteer(c_id)
			on delete set null 
	);
  
  	create table Worker	(
		c_id    varchar(25),
		foreign key (c_id) references Volunteer(c_id)
			on delete set null 
	);
   
   	create table WORKS_AT (
		g_name     varchar(25),
		e_id 		varchar(25),
	    primary key(gname, e_id),
	 	foreign key (g_name) references Gym(g_name)
			on delete set null,
		foreign key (e_id) references Trainer(e_id)
			on delete set null
	);
    
    create table WORKS_IN (
		e_name 		varchar(25),
		c_id   		varchar(25),
		primary key (e_name, c_id),
		foreign key(e_name) references Event(e_name)
			on delete set null,
		foreign key(c_id) references Worker(c_id)
			on delete set null
    );
    
    create table PARTICIPATES_IN (
		e_name varchar(25),
		c_id   varchar(25),
		primary key(e_name, c_id),
		foreign key(e_name) references Event(e_name)
			on delete set null,
		foreign key(c_id) references Participant(c_id)
    );

INSERT INTO employee VALUES (1, Joe, 123 Alice Way, password);

    