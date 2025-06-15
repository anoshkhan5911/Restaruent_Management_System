Fast Food Restaurant Management System
A simple yet interactive console-based Restaurant Management System developed in the C programming language. The program provides users with a clean and customizable ordering experience, offering multiple meal deals and real-time billing—all within a looped interface for repeated use.

Features
Deal Options
One Person Deal

Choose from a variety of burgers (Zinger Cheese, Patty Cheese, Beef Burger)
Select fries (Small or Large)
Pick a soft drink (Pepsi, Cola, 7Up)
Automatically calculates and displays the total price
Couple Deal

Choose two burgers with individual preferences
Add one pizza from a selection of flavors (Chicken Supreme, Fajita, Crown Crust, Stuff Crust)
Select one drink
Full customization and billing included
Family Deal

Choose two pizzas with different or same flavors
Select two portions of fries
Choose two burgers
Add two drinks
System totals the combined cost of all selected items
Functional Highlights
Looped Ordering System
After displaying the bill, the system asks the user if they want to place another order
Allows multiple customers to use the same session for different orders
Flexible Customization
Every food category is optional—users can skip items by choosing “None”
Each item type (burger, fries, pizza, drink) is displayed clearly with prices
Billing and Receipt
Uses arithmetic addition to compute the total (total += price)
A formatted final receipt is printed after selections are complete
Enhances user experience with clear section separators
Error Handling
Displays an error message for invalid deal choices
Ignores unselected items (safe default actions in all switches)
Program Structure
Component	Description
Menu Display	Shows deal categories and item selections clearly
Switch Cases	Control structure used to handle different deals and selections
Loops	Used for handling multiple burgers, fries, and drinks in Couple and Family Deals
Price Calculation	Dynamically adds up user choices into a total variable
Final Bill Format	Uses printf to visually format the receipt for clarity
Development Team
Department: BS - Information Technology

Arbaz Shahbaz — BITF24M049
Anosh Dilshad — BITF24M054
Bilal Iqbal — BITF24M030
