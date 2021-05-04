INSERT employee VALUES 
('123', 'Alice', '333 Dorsey Lane','MON-FRI (9am-2pm)', 'herPass'),
('234', 'Bob', '444 Rain Rd','MON-FRI (2PM-10PM)', 'hisPass'),
('392', 'Vero', '355 Burrow Rd','MON-FRI (2PM-10PM)', 'verito'),
('899', 'Rythor', '277 SJ street','MON-FRI (4PM-10PM)', 'ryan82'),
('589', 'Carther', '4822 Maple Ct','MON-FRI (9AM-5pm)', 'canadianSyrup');

INSERT gym VALUES
('Spartan Gym', 900, 1700),
('Neon Gym', 2100, 0500);
	
INSERT manager VALUES 
('123'), ('791');

INSERT janitor VALUES 
('234'), ('250');

INSERT trainer VALUES 
('392'), ('115'), ('342');

INSERT cook VALUES 
('899'), ('555');

INSERT event_planner VALUES 
('589'), ('386'), ('221');

INSERT Event VALUES
('Swim Comp', 1100, 1300, 041821, 589),
('Powerlifting Meet', 1200, 1500, 042221, 589), 
('Music Appreciation', 1500, 1900, 042721, 386),
('Geology Conference', 1000, 1400, 050121, 221);

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
('392', 'Spartan Gym', 'Yoga', '900', '052121'),
('392', 'Spartan Gym', 'Powerlifting', '1200', '052721'),
('392', 'Spartan Gym', 'Beginner Weights', '1100', '060421');

INSERT gym_member VALUES
('0202', 'Spartan Gym', 'Yoga', '392'),
('1984', 'Spartan Gym', 'Beginner Weights', '392');

