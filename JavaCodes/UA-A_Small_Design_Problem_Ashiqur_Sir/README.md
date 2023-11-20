# Problem Statement

After failing miserably in studying CSE, I have decided to throw a business with a ride sharing app named Uthao, but a miniature version.
For starters, it will have three types of transportation options:
Car
MotorCycle
Bicycle

### The fare is calculated as follows:

1. Base fare (Every ride starts with this amount):
a. Car: 50 Taka
b. Motorcycle: 30 Taka
c. Bicycle: 20 Taka
2. Distance fare:
   a. Car: 25 Taka / km
   b. Motorcycle: 15 Taka / km
   c. Bicycle: 10 Taka / km
3. Duration fare: 2 Taka/minute
4. Total fare = Base fare + Distance fare + Duration fare
   Let’s assume that we live in an ideal city where the vehicles move at a constant speed.
   ● Car: 60km/hour
   ● Motorcycle: 70 km/hour
   ● Bicycle: 20 km/hour


### Now the application should behave like the following:

1. User chooses a transportation option
2. User chooses the distance s/he wants to travel
3. The duration is calculated automatically
4. Based on the user’s chosen promo code, the promo fare is calculated
5. Based on payment option, the grand total fare is calculated
6. At the end, user can see the grand total fare with break down as follows
   Base fare: b taka
   Distance fare: d taka (dd KM)
   Duration fare: u taka (uu minutes)
   Total fare: t taka

