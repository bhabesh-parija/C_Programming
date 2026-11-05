# 01 - C Programming Basics

Welcome to the **Basics** section of my C programming journey. This folder contains my first C programs and practice exercises.

## 📂 Files in this folder

| File | Topic |
|---|---|
| `01_hello.c` | First C program |
| `02_variables_and_data_types.c` | Variables and data types |
| `03_operators.c` | Operators |
| `04_remainder_finding.c` | Remainder (`%`) operator |
| `05_fractional_part.c` | Fractional part of a number |
| `06_multiplication_table.c` | Multiplication table |
| `07_size_of.c` | `sizeof` operator |

## 💻 How to open and run a C program in VS Code

### 1. Open the project

1. Install **Visual Studio Code**.
2. Open VS Code.
3. Select **File → Open Folder**.
4. Choose your downloaded or cloned `C_Programming` folder.
5. In the Explorer panel, open `01_Basics`.
6. Click the C file you want to view, for example `01_hello.c`.

> Opening a `.c` file lets you read and edit it. To execute it, you also need a C compiler.

### 2. Install a C compiler

VS Code is an editor; it does not compile C programs by itself.

- **Windows:** Install a GCC compiler such as MinGW-w64 and make sure its `bin` folder is added to your system PATH.
- **macOS:** Install Apple's command-line developer tools using `xcode-select --install`.
- **Linux (Ubuntu/Debian):** Install GCC using `sudo apt install build-essential`.

To check whether GCC is available, open the VS Code terminal (**Terminal → New Terminal**) and type:

```bash
gcc --version
```

If a version is displayed, the terminal can find GCC.

### 3. Compile your C file

In the VS Code terminal, make sure you are inside the `01_Basics` folder. You can open the terminal in that folder, or navigate to it using `cd`.

For the first program, type:

```bash
gcc 01_hello.c -o hello
```

This compiles `01_hello.c` and creates an executable named `hello` (on Windows, it will usually be `hello.exe`).

### 4. Run the program

Use the command for your operating system:

**Windows PowerShell:**
```powershell
.\\hello.exe
```

**macOS / Linux:**
```bash
./hello
```

You should see the output printed in the terminal.

### 5. Run another program

For example, to compile and run the variables program:

```bash
gcc 02_variables_and_data_types.c -o variables
```

Then run it:

- Windows PowerShell: ` .\\variables.exe `
- macOS / Linux: `./variables`

## 🧠 Useful commands

| Command | Purpose |
|---|---|
| `gcc --version` | Check GCC installation |
| `gcc file.c -o output` | Compile a C file |
| `.\\output.exe` | Run the executable in Windows PowerShell |
| `./output` | Run the executable on macOS/Linux |

## 📌 Remember

- Save your file before compiling (**Ctrl + S**).
- If you change the code, compile it again before running it.
- Read compiler errors carefully; they usually point to the line that needs attention.
- The executable is the compiled program; the `.c` file is your source code.

**Learning step by step — from the first `printf` to building real C projects.**
