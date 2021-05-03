-- 1. drop the database Community_ceter if it exists
-- 2. create the database Community_ceter
-- 3. set the current DB context to the newly created database, and then execute the DDL statements.

-- drop database if exists Community_ceter;
create database Community_ceter;
use Community_ceter;

	create table EMPLOYEE (
		e_id		numeric(8),
	 	name		varchar(25),
	 	address		varchar(25),
     	password   	varchar(50) not null,
	 	primary key (e_id)
	);

	create table E_SHIFT (
		e_id  	numeric(8),
		shift 	varchar(25),
		primary key (e_id),
		foreign key (e_id) references employee(e_id)
	);

	create table MANAGER (
		e_id	varchar(50), 
	 	primary key (e_id),
	 	foreign key (e_id) references employee(e_id)
			on delete set null
	);
    
	create table TRAINER (
		e_id	varchar(50), 
 		primary key (e_id),
	 	foreign key (e_id) references employee(e_id)
			on delete set null
	);
    
    
	create table EVNET_PANNER (
		e_id	varchar(50), 
	 	primary key (e_id),
		foreign key (e_id) references employee(e_id)
			on delete set null
	);
    
    create table JANITOR (
    	e_id	varchar(50), 
	 	primary key (e_id),
	 	foreign key (e_id) references employee(e_id)
			on delete set null
	);
    
	create table COOK (
		e_id	varchar(50), 
		c_name  varchar(50),
	 	primary key (e_id),
	 	foreign key (e_id) references employee(e_id)
			on delete set null
		foreign key (c_name) references CAFETERIA(c_name)
	);

	create table APPLICANT ( 
		app_number		numeric(10),
		mgr_id			
		address			varchar(25),
		resume			numeric(10),
		interview_date	varchar(25),
		cv				numeric(10),
		name 			varchar(100),
	);	

	create table COURSE (
		-- c_id	 varchar(25),
		g_name  varchar(25),
		type    varchar(25),
		c_time 	varchar(25),
		tr_id   varchar(50),
		primary key(type),
		foreign key(tr_it) references Trainer(e_id)
			on delete set null,
		-- foreign key(g_name) references Gym(g_name)
		-- 	on delete set null
	);

	create table COURSE_DATE (
		type	varchar(25),
		c_date 	varchar(25),
		primary key(type)
	);
    
    create table CAFETERIA (
		c_name		varchar(25),
		m_name		varchar(25),
		type		varchar(25),
		amount     numeric(100),
		closing_time numeric(10),
		opening_time numeric(10),
		primary key (c_name)
	);

	create table GYM (
		g_name			varchar(100),
		closing_time	numeric(10),
		opening_time 	numeric(10),	
		primary key (g_name)
	);
    
	create table EVENT (
		e_name		varchar(50),
		start_time	numeric(10),
		end_time	numeric(10),
		e_date 	    varchar(10),
		ep_id 		varchar(25),
		primary key (e_name),
		foreign key(ep_id) references Event_planner(e_id)
			on delete set null 
	);
    
    create table COMMUNITY_MEMBER (
		c_id		numeric(8),
	 	name	    varchar(25),
     	password   varchar(50),
	 	primary key (c_id)
	);

	create table WORKS_AT (
		g_name     varchar(25),
		tr_id 		varchar(25),
	    primary key(gname, e_id),
	 	foreign key (g_name) references Gym(g_name)
			on delete set null,
		foreign key (tr_id) references Trainer(e_id)
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

    create table PARTICIPANT (	
		c_id		 numeric(8),
	 	c_name 	 varchar(25),
     	primary key (c_id),
	 	foreign key (c_id) references Community_member(c_id)
			on delete set null,
	 	foreign key (c_name) references Cafeteria(c_name)
	);
    
	create table GYM_MEMBER (
		c_id		numeric(8),
		g_name 	varchar(25),
		-- course     varchar(25),
		-- trainer    varchar(10),
		primary key(c_id),
		foreign key (c_id) references Community_member(c_id)
			on delete set null,
		foreign key (g_name) references Gym(g_name)
			on delete set null,
		-- foreign key (course) references Course(type)
		-- 	on delete set null,
		-- foreign key (trainer) references Trainer(e_id)
		-- 	on delete set null
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
    
    
INSERT INTO employee VALUES (1, Joe, 123 Alice Way, password);

    