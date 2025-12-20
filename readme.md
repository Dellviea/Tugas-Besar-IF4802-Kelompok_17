# Clinic Management System – Multi Linked List (C++)
This program is a **Data Structures Final Project** that implements a  
**Multi Linked List** to model a **Clinic Management System**  
(Polyclinic – Doctor – Patient).

---
## Case Study
A clinic system consists of:
- Multiple **Polyclinics**
- Each polyclinic has a **Doctor**
- Each polyclinic can serve **many Patients**

Data structure used:
- **Polyclinic** → parent (Single Linked List)
- **Patient** → child (Double Linked List)

---
## Data Structure Design
### Polyclinic (Parent)
- Implemented using a **Single Linked List**
- Stores:
  - Polyclinic ID
  - Polyclinic Name
  - Doctor ID
  - Doctor Name
- Each polyclinic has a pointer to its patient list

### Patient (Child)
- Implemented using a **Double Linked List**
- Stores:
  - Patient ID
  - Patient Name
  - Visit Date

---
## Program Features
### Basic ADT Operations
- Node allocation
- Insert operations:
  - Insert First
  - Insert Last
  - Insert After
- Delete operations:
  - Delete First
  - Delete Last
  - Delete After
- Search (find element)
- Display data

---
### Admin Menu
- Manage polyclinics (insert & delete first/last/after)
- Manage patients in each polyclinic
- Perform technical data structure operations
- Generate statistical reports

---
### User Menu
- View all polyclinics
- View polyclinic details (doctor & patients)
- Search patient data
- View reports

---
### Reports & Computation
- Number of patients per polyclinic
- Total number of patients in all polyclinics

