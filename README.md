# Conto Corrente 🏦

> A terminal-based bank account management system written in C, developed for the Programming 1 course at Università degli Studi di Napoli "Parthenope".

![C](https://img.shields.io/badge/C-ANSI-00599C?style=flat&logo=c&logoColor=white)
![Platform](https://img.shields.io/badge/Platform-Windows%20%2F%20Linux-informational?style=flat)
![Course](https://img.shields.io/badge/Course-Programmazione%201-orange?style=flat)

---

## Overview

This program manages bank accounts for N users. Each account holder is identified by name, surname, account number, and a transaction record (number of deposits, number of withdrawals, and final balance). Account holders are maintained in alphabetical order and the system supports dynamic insertion and deletion operations.

---

## Features

- Register N account holders at startup with their personal and financial data
- Display the full list of registered account holders
- **Insert** a new account holder (assigned a unique account number), maintaining alphabetical order
- **Delete** an account holder by name and surname, with error handling for non-existent users
- Perform multiple sequential operations in a single session

---

## Data Structures

```c
typedef struct Totale {
    int numero_versamenti;   // number of deposits
    int numero_prelievi;     // number of withdrawals
    int saldo;               // final balance
} totale;

typedef struct utente {
    char nome[20];           // first name
    char cognome[20];        // surname
    int numero_conto;        // account number
    totale lista_movimenti;  // transaction record
} Utente;
```

---

## How it works

1. The user enters the number of account holders and their data
2. The list is displayed in the current order
3. The user specifies how many operations to perform
4. For each operation, the user chooses:
   - `1` — insert a new account holder
   - `2` — delete an existing account holder by name and surname
5. The updated list is displayed at the end

---

## Build & Run

### Linux / macOS

```bash
gcc main.c -o conto_corrente
./conto_corrente
```

### Windows (MinGW)

```bash
gcc main.c -o conto_corrente.exe
conto_corrente.exe
```

> **Note:** The original project used `gets()`, `strupr()`, and `fflush(stdin)` which are Windows/MSVC-specific or deprecated. On Linux, `strupr()` is not available in standard libc — replace it with a manual uppercase loop or use `#include <ctype.h>` with `toupper()`.

---

## Project Structure

```
conto-corrente-c/
├── main.c       # Main program: input, menu loop, operation dispatch
└── function.h   # Structs definition, insert and delete functions
```

---

## Author

**Raffaele Calcagno**  
B.Sc. Computer Science — Università degli Studi di Napoli "Parthenope"  
[rcal97.github.io](https://rcal97.github.io) · [github.com/Rcal97](https://github.com/Rcal97)
