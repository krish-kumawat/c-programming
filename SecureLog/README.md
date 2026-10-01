# SecureLog 🔐

SecureLog is a C-based security log analyzer that reads login logs and generates a simple security report.

## Features

- Total event counting
- Successful login detection
- Failed login detection
- User-wise failed login analysis
- Suspicious activity detection
- File handling and log analysis

## Project Structure

```text
SecureLog/
├── src/
│   ├── main.c
│   └── analyzer.c
├── data/
│   └── sample.log
└── README.md

Technologies
->C Programming
->File Handling
->String Processing
->Conditional Statements
->Loops
->Functions

Example Output

========== SECURITY REPORT ==========
Total Events       : 10
Successful Logins  : 4
Failed Logins      : 6

--- Failed Attempts By User ---
admin  : 5
user01 : 1
user02 : 0

--- Suspicious Activity ---
WARNING: admin has suspicious activity!
=====================================

Learning Goal

This project was created to practice C programming concepts through a practical security-log analysis application.

Author

"Krish Kumawat"