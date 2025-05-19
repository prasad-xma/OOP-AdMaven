# OOP-Based advertising agency(AdMaven) System

![C++](https://img.shields.io/badge/Language-C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![OOP](https://img.shields.io/badge/Paradigm-OOP-blueviolet?style=for-the-badge)

> 🎯 A feature-rich, **Object-Oriented Programming** (OOP) based **AdMaven System** built with **C++**, modeling real-world roles and services using robust class structures.

---

## 📌 Overview

🔧 This system simulates the core functionalities required for a service-based platform, including:

- 👥 User Roles
- 📅 Appointments
- 🛒 Orders
- 💳 Payments
- 📝 Feedback Handling
- 📊 Report Generation
- 🔐 Admin Controls

🧭 It adheres to solid **OOP principles**:

- 🧬 Inheritance  
- 🔐 Encapsulation  
- 🧱 Composition  
- 🤝 Association  

---

## 📊 Class Diagram

The system architecture is visually represented below:

![Class Diagram](assets/Class%20Diagram.png)

---

## ✅ Features

✨ Key functionalities of the system include:

- 🗓️ **Appointment Booking & Order Handling**
- 💳 **Payment Management**
- 💬 **Customer Feedback System**
- 🛠️ **Admin Management Panel**
- 📈 **Report Generation**

---

## 🧱 Main Classes Structure

Here's a breakdown of the main OOP components:

| Class                         | Role Description                        |
|------------------------------|------------------------------------------|
| `User`                       | 🧑 Base class for all user types         |
| `RegisteredCustomer`         | 👤 Inherits from `User`                 |
| `SystemAdmin`                | 🛡️ Inherits from `User`                 |
| `Consultant`, `ContentCreator`, `Staff` | 👥 Service Providers       |
| `Service`, `Package`, `Order`| 🛒 Functional Modules                    |
| `Payment`, `Appointment`, `Feedback`, `Report` | 🧾 Additional Features |

---

## ⚙️ Technologies Used

🧰 Developed using:

- 🚀 **C++ (OOP-Based Design)**
- 🧱 **Standard Template Library (STL)**
- 📁 **File I/O (optional for persistence)**

---

## 💻 How to Compile & Run

1. Clone the repository:

   ```bash
   git clone https://github.com/prasad-xma/OOP-AdMaven.git
   cd OOP-AdMaven
    
    g++ -std=c++11 -o main Main/main.cpp
    ./main

## 📂 Folder Structure
```
📁 Main/
├── main.cpp
├── User.h / User.cpp
├── RegisteredCustomer.h / .cpp
├── Services.h / .cpp
├── ...
📁 assets/
├── Class Diagram.png


## 🙌 Support

If you found this project helpful or interesting, please consider giving it a ⭐ on GitHub!

👉 [Click here to star the repo](https://github.com/prasad-xma/OOP-AdMaven/stargazers)