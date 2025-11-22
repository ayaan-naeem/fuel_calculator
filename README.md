## Fuel Calculator

This C++ program calculates the amount of fuel needed for a trip based on the distance to be traveled.

## Note:

For simplicity, the program assumes that the vehicle consumes 10 liters of fuel per unit distance (you can adjust this value in the code if needed).

## Program Description

The program demonstrates:

Using functions in C++

Taking user input

Performing arithmetic calculations

Displaying results clearly

## How It Works

## Input from User
The program prompts the user to enter:

Distance of the trip (in the same unit as fuel consumption, e.g., kilometers or miles)

## Fuel Calculation

Fuel = Distance * 10;


Multiplies the entered distance by 10 to calculate the total fuel needed for the trip.

## Displaying the Result

The program prints the total fuel required.

All calculations are handled in a separate function called palestine(), which is then called from main().

## Sample Input/Output

Enter the Distance: 50

Fuel Needed: 500


## Explanation:

Distance = 50 units

Fuel needed = 50 × 10 = 500 liters

## Purpose & Learning

This project helps beginners:

Practice defining and calling functions in C++

Handle user input and output

Perform simple arithmetic calculations

Understand modular code structure

It is also a small step toward building more complex vehicle or travel calculators in the future.

## How to Run
## Step 1: Compile the code
g++ fuel_calculator.cpp -o fuel_calculator

## Step 2: Run the program
./fuel_calculator


or on Windows:

fuel_calculator.exe

## Step 3: Enter the Distance

The program will output the total fuel required for the trip.

Step 3: Enter the Distance

The program will output the total fuel required for the trip.
