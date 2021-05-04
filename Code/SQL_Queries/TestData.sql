INSERT employee VALUES 
('123', 'Alice', '333 Dorsey Lane''herPass'),
('234', 'Bob', '444 Rain Rd', 'hisPass'),
('392', 'Vero', '355 Burrow Rd', 'verito'),
('899', 'Rythor', '277 SJ street', 'ryan82'),
 ('589', 'Carther', '4822 Maple Ct', 'canadianSyrup');
 
 INSERT e_shift VALUES 
 ('123', 'MON-TUES (9am-2pm)'),
 ('234','MON-FRI (2PM-10PM)'),
 ('392','THUR-FRI (4PM-10PM)'),
 ('899','MON-FRI (9AM-5pm)'),
 ('589','MON-FRI (9AM-5pm)');

 INSERT gym VALUES
 ('Spartan Gym', 900, 1700);

 INSERT manager VALUES 
 ('123');

 INSERT janitor VALUES 
 ('234');

 INSERT trainer VALUES 
 ('392');

 INSERT cook VALUES 
 ('899');

 INSERT event_planner VALUES 
 ('589');

INSERT Event VALUES
('Swim Comp', 1100, 1300, 041821, 589),
('Powerlifting Meet', 1200, 1500, 042221, 589);
INSERT community_member VALUES
('6767', 'Dorthy', 'dorthy!'),
('9999', 'Robert', 'psRob'),
('8888', 'Don', 'tClient'),
('1212', 'Henly', 'bedless'),
('1332', 'Zeppelin', 'Led_Zeppers'),
('7215', 'Grant', 'dmgfjwnfe'),
('0202', 'Biesty', 'The-Beast'),
('1984', 'George', 'animals_rule'),
('5521', 'Arnold', 'arn11'),
('5522', 'Brian', 'ian93'),
('5523', 'Reynold', 'reyspray'),
('5524', 'Sabrina', 'blacksab'),
('5525', 'Casey', 'caseydia'),
('5526', 'Gianine', 'nineteen'),
('5527', 'Veronica', 'VeritoBurito'),
('5528', 'Ryan', 'yannay');

INSERT cafeteria VALUES
('Spartan Eats', 'Cheese Burger', 'Lunch', 9, 900, 1700);

INSERT participant VALUES 
('6767', 'Spartan Eats'),
('9999', 'Spartan Eats');

INSERT volunteer VALUES 
('8888'),
('1212'),
('1332'),
('7215');

INSERT worker VALUES 
('8888'),
('1212');

INSERT server VALUES 
('1332', 'Spartan Eats'),
('7215', 'Spartan Eats');

INSERT course VALUES 
 ('392', 'Spartan Gym', 'Yoga', '900'),
 ('392', 'Spartan Gym', 'Powerlifting', '1200'),
 ('392', 'Spartan Gym', 'Beginner Weights', '1100'),
 ('392', 'Spartan Gym', 'Swimming Basics');
 
 INSERT course_date VALUES 
 ('Yoga', '052121'),
 ('Powerlifting', '062721'),
 ('Beginner Weights', '063021');
 
INSERT gym_member VALUES
('0202', 'Spartan Gym', 'Yoga', '392'),
('1984', 'Spartan Gym', 'Beginner Weights', '392');
