# Competitive Programming — Codeforces Solutions

This repository contains my Codeforces solutions organized around two study sheets:

- The Striver CP Sheet (folder: `striver-CP-sheet`)
- The CP31 (TLE Eliminators) sheets (folders: `CP31-800`, `CP31-900`)

Problems are solved in separate `.cpp` files and grouped by contest or sheet. Filenames follow the Codeforces ID pattern (for example: `cf1234A.cpp`).

**Repository structure (high level)**

- `contests/` — ad-hoc contest problem solutions
- `striver-CP-sheet/` — problems from Striver's CP sheet
- `CP31-800/`, `CP31-900/` — problems from the CP31 sheets grouped by difficulty
- `one.cpp`, other single files used for quick testing

**How to compile & run**

Using g++ (recommended flags for contest use):

```bash
g++ -std=c++17 -O2 -pipe path/to/file.cpp -o file.exe
./file.exe < input.txt
```

On Windows PowerShell you can run the produced executable as:

```powershell
.\file.exe < input.txt
```

**Style & naming**

- File names are `cf<problem-id><letter>.cpp` (e.g. `cf1371A.cpp`).
- Each file contains a self-contained solution that can be compiled and run independently.

**Contributing / Notes**

- Pull requests and suggestions are welcome. If you add solutions, follow the existing naming style and include a brief comment at the top describing the problem link.
- This repo is mainly a personal collection for practice and revision.

**License**

This repository is shared for learning purposes. Use as you like. If you want a formal license, add one (e.g., MIT).

---

Happy coding! If you'd like, I can also:

- add a table of contents listing solved problems,
- generate per-folder README indexes,
- or add CI to compile all files automatically.
