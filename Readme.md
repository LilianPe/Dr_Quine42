# 🧬 Dr_Quine - Self-Replicating Programs in C

This project is a deep dive into the world of **Quines** — programs that can **reproduce their own source code**.  
It is part of the *Malware* curriculum, and focuses on code self-awareness, low-level manipulation, and recursion logic through source code generation.

---

## 🧠 What is a Quine?

A **Quine** is a non-trivial program that, when run, outputs **its exact source code**, without reading it from a file.  
The goal is to create a clean, self-contained program that achieves this using clever string formatting and structure.

---

## 📁 Project Structure

### 🧱 Colleen

> A simple self-replicating program

- Writes its own source code to `stdout`.
- Must include comments and structure preservation.
- This is your “Hello World” of Quines.
- Focus: basic formatting, string quoting, and recursion in output logic.

---

### 👩‍👧 Grace

> A macro-based self-replicator that creates a child file

- The program must generate an identical file named `Grace_kid.c`.
- Constraints:
  - No `main()` function declared explicitly.
  - Only 3 `#define` directives allowed.
  - Only one comment in the whole file.
  - The program must run via a macro.

- Focus: macro manipulation, self-replication with constraints, and generating compilable output.

---

### 🧬 Sully

> A program that recursively spawns and compiles copies of itself

- When run, it generates a copy of itself in a file with a decreasing index (e.g. `Sully_5.c`, `Sully_4.c`, etc.).
- Each child is compiled and executed automatically.
- The loop continues until the index reaches `0`.

- Focus: recursion, index manipulation, process control (`fork`, `exec`, or `system`), and self-aware file naming.

---

## 🔧 Compilation

Each file can be compiled using `gcc`:

```bash
gcc -Wall -Wextra -Werror -o Colleen Colleen.c
./Colleen

gcc -Wall -Wextra -Werror -o Grace Grace.c
./Grace

gcc -Wall -Wextra -Werror -o Sully Sully.c
./Sully
