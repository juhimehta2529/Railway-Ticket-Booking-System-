# Train Ticket Reservation System 🚆

![C](https://img.shields.io/badge/Language-C-blue)
![Console](https://img.shields.io/badge/Interface-Console-green)

A complete train ticket booking system developed in C that handles passenger details, seat selection, fare calculation, and generates booking receipts.

## Features

- **Passenger Management**:
  - Store multiple passenger details (name, age, gender)
  - Linked list data structure for efficient storage

- **Train Options**:
  - 5 different train choices with varying:
    - Departure times
    - Stations
    - Pricing

- **Class Selection**:
  - Sleeper class
  - AC classes (3A, 2A, 1A)
  - Automatic GST calculation (18%)

- **Seat Selection**:
  - Visual seat matrix display
  - Multiple seat booking capability

- **Booking Receipt**:
  - Detailed booking summary
  - All passenger information
  - Journey details
  - Payment information


## Program Structure
Main Components:
- main(): Entry point with UI framework
- details(): Captures passenger information
- cal(): Calculates fares with GST
- seat(): Handles seat selection
- bill(): Generates booking receipt
- add_node(): Linked list management

Data Structures:
- Node structure for passenger data
- Global variables for journey details
- Array for seat management

## Implementation Details
**Core Systems**
- **Linked List Storage:**
  - Dynamic memory allocation for passengers
  - Efficient traversal for receipt generation
- **Fare Calculation:**
    - b = y1 * h;  // Base fare
    - c = b + (b * 0.18);  // With 18% GST
- **User Interface:**
  - Border design with custom characters
  -  Clear screen transitions between sections
  -  Input validation for choices

## How to Compile and Run

1. Ensure you have GCC installed
2. Compile the program:
   gcc train_booking.c -o train_booking
3. Run the executable: ./train_booking
