# CrackMe

A minimal reverse engineering challenge.

## Objective
Bypass the payment verification and reach the success message.

## How to Solve
- Analyze the binary using x64dbg, Ghidra, or any RE tool
- Patch the conditional jump that checks `IsPremium()`
- Successfully display the "CONGRATS!" message

## Build (Optional)
```bash
gcc src/CrackMe.c -o CrackMe.exe -mwindows -s -O2