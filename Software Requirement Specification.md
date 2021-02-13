Software Requirement Specification
Temperature Conversion Calculator
Purpose: To ease calculations and to check temperature as per user choice.
Overall Description: The calculator is designed to perform functions like Fahrenheit to Celsius, Celsius to Fahrenheit, Kelvin to Celsius, Celsius to Kelvin, Fahrenheit to Kelvin, Kelvin to Fahrenheit.
Feasibility Study: 
What: Calculator to convert among temperature units.
Why: To perform calculation and change forms of temperature so as to ease it for user.
Where: Mainly used in hospitals and weather forecasting.
<<<<<<< Updated upstream

//comment
=======
>>>>>>> Stashed changes
When: This application is used when the user wants to convert temperature from one form to another 
How: Based on the user choice the following formulas are executed:
•	Celsius to Fahrenheit: fah = (cel*9/5)+32
•	Celsius to Kelvin: kel = (cel + 273.15)
•	Fahrenheit to Celsius: cel = ((fah - 32)*5)/9
•	Fahrenheit to Kelvin: kel = ((fah - 32)*5)/9 +273.15
•	Kelvin to Celsius: cel = (kel - 273.15)
•	Kelvin to Fahrenheit: fah = ((kel - 273.15)*9)/5+32
             
Specific Requirements:
1)	High level Requirements: 
•	Software to code application
•	Data types
•	Complied by gcc C Compiler
•	Written in C
2)	Low level Requirements:
•	Need a system that supports gcc Compiler.



UML Diagram:
A)	Structural Diagram:
                                    
                                                            Fig: Class Diagram
B)	Behavioural Diagram:                  

Fig: Use Case Diagram

SWOT Analysis: 

     
Strength

It helps to reduce calculation and get temperature in various formats very easily.

It has an accuracy of up to two floating points.	
Weakness

We don’t have an attractive user interface.

Opportunity

We can make good GUI for temperature conversion application.

Customization can be done based on region.	
Threats

The conversion could make no sense if the input entered is out of limit or threshold.

