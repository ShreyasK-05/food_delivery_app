
# FOOD DELIVERY APPLICATION

A comprehensive C application that simplifies food ordering, optimizes delivery, and rewards customer loyalty with points.
## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [Modules and Algorithms](#modules-and-algorithms)
- [Contribution Guidelines](#contribution-guidelines)
- [Authors and Acknowledgments](#authors-and-acknowledgments)
- [Contact Information](#contact-information)

## Installation
### Prerequisites
- C compiler

### Step-by-Step Installation
1. Clone the repository: `https://github.com/shubhamkumar9798/food_delivery_app.git`
2. Navigate to the project directory: `cd food_delivery_app`
3. Compile the project.
4. Run the executable: `./food_delivery_app`

## Usage
### Running the Application
- Execute the binary: `./food_delivery_app`
- Follow the on-screen instructions to place an order.

## Features
- User-friendly food ordering
- Nearby restaurant suggestions using Dijkstra’s algorithm
- Comprehensive hotel and delivery management
- Loyalty points system

## Modules and Algorithms
### 1. User Module
- **Sign-Up/Login:**
  - Handles user registration and authentication.
  - Stores user credentials in the login database.
  - Manages user profiles and delivery addresses.

### 2. Restaurant Management Module
- **Update Information:**
  - Allows restaurants to update menu items, contact numbers, and addresses.
  - Ensures current and accurate restaurant information in the database.

### 3. Find Restaurants Module
- **Search Functionality:**
  - Enables users to search for restaurants based on criteria such as name, distance, and ratings.
  - Utilizes Dijkstra’s algorithm to suggest nearby restaurants.

### 4. Restaurant Filtering and Ranking Module
- **Display Sorted Results:**
  - Filters and ranks restaurants by star ratings, reviews, and proximity to the delivery location.
  - Displays results in a user-friendly format.

### 5. Order Management Module
- **Place and Manage Orders:**
  - Facilitates users in selecting food items, specifying quantities, and placing orders.
  - Calculates the total bill and manages order history.

### 6. Loyalty Program Module
- **Earn and Redeem Points:**
  - Rewards users with loyalty points for each completed order.
  - Stores points in the points database.
  - Allows users to redeem points for discounts on future orders.

### 7. Delivery Management Module
- **Assign and Track Deliveries:**
  - Assigns delivery agents to accepted orders.
  - Tracks delivery progress in real-time and updates order status.

### 8. Payment Module
- **Process Payments:**
  - Enables users to pay for their orders through the application.
  - Supports multiple payment methods and ensures secure transactions.

### 9. Feedback Collection Module
- **User Feedback:**
  - Collects feedback from users about their experience.
  - Allows users to rate restaurants and delivery agents.

### 10. Receipt Generation Module
- **Generate Receipts:**
  - Automatically generates receipts for users after successful payment.
  - Provides a detailed summary of the order and payment.

### 11. Delivery Agent Module
- **Pickup and Delivery:**
  - Manages delivery agents responsible for picking up and delivering orders.
  - Tracks and updates the status of delivery tasks in real-time.

### 12. Delivery Acceptance or Rejection Module
- **Task Management:**
  - Allows delivery agents to accept or reject assigned delivery tasks based on availability.
  - Ensures efficient task allocation and management.
- Dijkstra’s Algorithm: Finds the shortest path between user and restaurant.

## Contribution Guidelines
- Fork the repository
- Create a new branch
- Submit a pull request

## Authors
- Developed by Shreyas K, Shriram Gopalakrishnan, Shubham kumar

## Contact Information
For questions or support, contact shreyas2310140@ssn.edu.in
