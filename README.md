# VOID Hotel — Hotel & Restaurant Management System

A console-based Hotel and Restaurant Management System written in C, built with the Code::Blocks IDE. The application simulates room booking, checkout, billing, customer records, and restaurant ordering for a fictional hotel, "VOID Hotel".

## Overview

After a login screen, the user is presented with a main menu offering **Hotel**, **Restaurant**, and **About Us** modules. The Hotel module supports booking, checkout, billing, and customer management across 30 rooms in six categories; the Restaurant module supports food ordering and bill payment for "VOID Cafe".

## Features

### Login
- Simple username/password authentication (`linker.C`) with masked password entry and up to 3 attempts before the program exits.

### Hotel Management (`hotel.C`)
- **Room booking** — 30 rooms across 6 categories, each with its own rate:
  | Rooms | Type | Price |
  |---|---|---|
  | 1–5 | General | ₹1000 |
  | 6–10 | Couple | ₹4500 |
  | 11–15 | Deluxe | ₹2500 |
  | 16–20 | Spl. Deluxe | ₹5000 |
  | 21–25 | Suite | ₹7500 |
  | 26–30 | Dormitory | ₹750 |
- **Checkout / deallocation** of booked rooms
- **View room features** (amenities per room type)
- **View booked rooms** and current availability
- **View customer details** for a given room
- **Suggestions / complaints** logging to `COMPLAINT.txt`
- **Bill payment**
- Customer, booking, and complaint records are persisted to text files (`Customer.txt`, `Booked.txt`, `Name_list.txt`, `COMPLAINT.txt`)

### Restaurant (`Restaurant.C`)
- New food order placement with a token system
- Bill payment tracking per session (orders received vs. bills paid)
- "VOID Cafe" themed console menu

### About Us
- Informational screen about the application/team

## Project Structure

```
HOTEL MANAGEMENT/
├── HOTEL MANAGEMENT.cbp     # Code::Blocks project file
├── HOTEL MANAGEMENT.layout  # Code::Blocks editor layout (IDE state)
├── linker.C                 # Entry point: login screen + main menu (Hotel / Restaurant / About Us)
├── hotel.C                  # Hotel module: booking, checkout, billing, customer records
└── Restaurant.C             # Restaurant module: ordering and bill payment
```

## Requirements

- A C compiler with **Windows-specific headers** (`windows.h`, `conio.h`, `dos.h`), such as **MinGW/GCC on Windows**
- [Code::Blocks IDE](https://www.codeblocks.org/) (project ships as a `.cbp` file), or any GCC toolchain that can compile and link all three `.C` files together

> **Note:** This project relies on Windows-only APIs (`system("cls")`, `system("color ...")`, `conio.h`, `dos.h`) and will not compile as-is on Linux/macOS without modification (e.g. replacing these with cross-platform equivalents like `ncurses`).

## Getting Started

### Using Code::Blocks
1. Open `HOTEL MANAGEMENT.cbp` in Code::Blocks.
2. Build and run the project (Debug or Release target).

### Using GCC directly (Windows/MinGW)
```bash
gcc "linker.C" -o hotel_management.exe
```
> The `.cbp` file lists `Restaurant.C`, `hotel.C`, and `linker.C` as project units; ensure your build setup links them appropriately (the project currently compiles `linker.C` as the entry point containing `main()`).

### Login
Default demo credentials (hardcoded in `linker.C`):
- **Username:** `akash`
- **Password:** `akash`

## Data Files

The program reads/writes plain-text data files in its working directory at runtime, including:
- `Customer.txt` — customer booking records
- `Booked.txt` — currently booked room numbers
- `Name_list.txt` — customer name log
- `COMPLAINT.txt` — suggestions/complaints log

These files are created/appended to automatically; no separate database is required.

## Known Limitations

- Hardcoded login credentials (not suitable for production use)
- Uses the unsafe `gets()` function for string input in a few places, which can lead to buffer overflows — consider replacing with `fgets()`
- Windows-only console APIs limit portability
- No encryption or secure storage of customer data

## Authors' Notes

This is an academic/learning project demonstrating structured C programming, file I/O, and console UI design for a menu-driven management system.
