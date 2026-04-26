# Secret Code

This project was inspired by the idea of secret identities and undercover agents, similar to *Spy x Family*, where everyday life and hidden missions coexist.

![Secret_Code](Images1/Code.png)

## Overview

**Secret Code** is a C++ program that takes a 12-digit number and interprets it as a classified agent code.

The system simulates a decoding process where:
- Part of the number represents an **infiltration time** (HH:MM:SS)
- Another part is converted from **ASCII values into characters**, forming the agent’s initials

## How It Works

The input is a single 12-digit number.

The program:
1. Splits the number into pairs of digits  
2. Interprets each pair using mathematical operations  
3. Converts some values into ASCII characters  
4. Displays the decoded identity and time

![Termninal](Images1/Terminal.png)

All of this is done **without using strings, conditionals, or loops**, focusing purely on logic and number manipulation.