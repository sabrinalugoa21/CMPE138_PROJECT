INSERT employee VALUES 
('123', 'Alice', '333 Dorsey Lane', 'herPass'),
('234', 'Bob', '444 Rain Rd', 'hisPass'),
('392', 'Vero', '355 Burrow Rd', 'verito'),
('899', 'Rythor', '277 SJ street', 'ryan82'),
('589', 'Carther', '4822 Maple Ct', 'canadianSyrup'),
('791', 'Kirby', '333 Tart St', 'imdaman'),
('115', 'Regen', '121 Rainy St', 'florence');


INSERT e_shift VALUES 
('123', 'MON-TUES (9am-2pm)'),
('234','MON-FRI (2PM-10PM)'),
('392','THUR-FRI (4PM-10PM)'),
('899','MON-FRI (9AM-5pm)'),
('589','MON-FRI (9AM-5pm)'),
('791','MON-FRI (9AM-5pm)'),
('115','MON-FRI (9AM-5pm)');


INSERT gym VALUES
('Spartan Gym', 900, 1700),
('Neon Gym', 900, 1700);
	
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
('Powerlifting Meet', 1200, 1500, 042221, 589), 
('Music Appreciation', 1500, 1900, 042721, 589),
('Geology Conference', 1000, 1400, 050121, 589);

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
('Spartan Eats', 'Cheese Burger', 'Lunch', 9, 900, 1700), 
('Spartan Eats', 'Breakfast Burrito', 'Breakfast', 20, 900, 1700),
('Spartan Eats', 'Porridge', 'Breakfast', 15, 900, 1700),
('Spartan Eats', 'Peanut Butter Sandwich', 'Lunch', 10, 900, 1700),
('Spartan Eats', 'Fruit Salad', 'Lunch', 15, 900, 1700),
('Spartan Eats', 'Pasta', 'Dinner', 30, 900, 1700),
('Neon Eats', 'Milkshake', 'Dessert', 30, 2100, 0500), 
('Neon Eats', 'Cheese Burger', 'Other', 10, 2100, 0500), 
('Neon Eats', 'Tomato Soup', 'Other', 30, 2100, 0500);

INSERT participant VALUES 
('6767', 'Spartan Eats'),
('9999', 'Spartan Eats'),
('0202', 'Spartan Eats'),
('1212', 'Neon Eats'),
('5523' 'Neon Eats');

INSERT volunteer VALUES 
('8888'),
('1212'),
('1332'),
('7215'),
('5522'),
('9999'),
('5526');

INSERT worker VALUES 
('8888'),
('1212'),
('5526'),
('9999');

INSERT server VALUES 
('1332', 'Spartan Eats'),
('7215', 'Spartan Eats'),
('5522', 'Neon Eats');

INSERT course VALUES 
('392', 'Spartan Gym', 'Yoga', '900'),
('392', 'Spartan Gym', 'Powerlifting', '1200'),
('392', 'Spartan Gym', 'Beginner Weights', '1100'),
('115', 'Spartan Gym', 'Swimming Basics', '1200'),
('115', 'Neon Gym', 'Advanced Yoga', '1200');


INSERT course_date VALUES 
('Yoga', '052121'),
('Powerlifting', '062721'),
('Beginner Weights', '063021'),
('Swimming Basics', '052221'),
('Advanced Yoga', '062221');

INSERT gym_member VALUES
('0202', 'Spartan Gym', 'Yoga', '392'),
('1984', 'Spartan Gym', 'Beginner Weights', '392'),
('1984', 'Spartan Gym', 'Swimming', '115'),
('5523', 'Neon Gym', 'Advanced Yoga', '115');
