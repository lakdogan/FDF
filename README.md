# 📊 FDF – *fil de fer* – Wireframe Project

> 3D Wireframe Renderer | **42Heilbronn**  
> Developed by [Levent Akdogan](https://github.com/lakdogan)

[FDF Preview]
<img width="1250" alt="Screenshot 2025-02-23 at 20 42 27" src="https://github.com/user-attachments/assets/d659cd98-e06e-40a5-aabf-70fac2ad752b" />
<img width="839" alt="Screenshot 2025-02-23 at 20 44 48" src="https://github.com/user-attachments/assets/1cfef2ed-bb76-4bde-bd61-81593659f70b" />



---

## 🧭 Overview

**FDF** (*Fil de Fer*) is a **3D wireframe renderer** that transforms `.fdf` map data into a **2D isometric projection** using the **MiniLibX** graphics library.

✨ **Two modes available:**

- 🟢 **Mandatory Version:** Core project with essential features.  
- 🟠 **Bonus Version:** Additional key mappings, auto-rotations, zoom boosts, and more.

The program reads `.fdf` files—grids of numbers representing altitudes, and sometimes grids of numbers with color values—and renders them as a 3D landscape. The program also validates map integrity:

- ✅ **Checks for file accessibility** and verifies the `.fdf` file extension.
- ⚠️ **Identifies errors** like invalid coordinate values, displaying the exact **line** and **coordinate** of the issue.
- 🗺️ **In the Bonus Version:**
  - Displays a **key mapping image** (from an `.xpm` file) for user guidance.
  - Shows the **map name** and **grid size** directly on the interface.

---

## 🚀 Features

### ✅ **Mandatory Features**
- 📐 **Isometric Projection** – Render coordinates in a 2D isometric view.
- 🗂️ **Map Name Validation** – Ensures the map file has the correct `.fdf` extension.
- 📁 **File Validation** – Checks file accessibility and integrity.
- 📊 **Map Parsing** – Parses coordinate and color data from the `.fdf` file.
- 🛡️ **Error Reporting** – Detects and highlights faulty coordinates with line and position details.

### 💡 **Bonus Features**
- 🔁 **Extended Key Mappings** – Enhanced control over rotations and transformations.
- ⚡ **Auto-Zoom Boost** – Quick zoom in/out with extra speed.
- 🌈 **Invert Colors** – Toggle color inversion for visual variety.
- 🌀 **Automatic Rotations** – Rotate the map on different axes automatically.
- ♻️ **Quick View Reset** – Return to isometric or horizontal view instantly.
- 🖼️ **Key Mapping Display** – Show an `.xpm` image illustrating key mappings.
- 🗺️ **Map Information** – Display map name and grid size.
- 🎮 **Bonus Controls** – Advanced key mappings for interactive manipulation.

---

## ⚙️ Installation

### 📋 **Prerequisites**
Ensure the following dependencies are installed:

- **cc** – C Compiler
- **make** – Build Automation Tool
- **MiniLibX** – Graphics library (originally designed for **macOS**)
- **X11 Development Libraries** *(Linux users):*

```bash
sudo apt-get update
sudo apt-get install cc make libx11-dev libxext-dev libbsd-dev
```

💡 *Note: Since **MiniLibX** was originally developed for **macOS**, Linux users may require adaptations or alternative libraries for full compatibility.*

### 🛠️ **Building the Project**

1. **Clone the Repository:**

```bash
git clone https://github.com/lakdogan/FDF.git
cd FDF
```

2. **Compile the Mandatory Version:**

```bash
make
```

3. **Compile the Bonus Version:**

```bash
make bonus
```

This will create the `fdf` and `fdf_bonus` executables.

---

## 💻 Usage

### 📂 **Running the Program**

```bash
# Mandatory
./fdf test_maps/mars.fdf
```
<img width="1029" alt="Screenshot 2025-02-23 at 20 27 57" src="https://github.com/user-attachments/assets/4a489a07-6ce4-47e3-b055-5aad9e1e1690" />
```
# Bonus
./bonus/fdf_bonus ../../../../test_maps/t1.fdf
```
<img width="1913" alt="Screenshot 2025-02-23 at 20 26 03" src="https://github.com/user-attachments/assets/fb89516b-4ae0-4139-9207-c665ba8ba98b" />

### 🗺️ **Map File Format**

`.fdf` files are grids of integers representing altitude at each point, and optionally include color values. Example:

```
0 0 0 0 0 0
0 0 4,0xFF0000 4,0x00FF00 0 0
0 0 4 4 0 0
0 0 0 0 0 0
0 0 0 0 0 0
```
<img width="442" alt="Screenshot 2025-02-23 at 20 36 56" src="https://github.com/user-attachments/assets/56aa9247-896b-46fa-a003-b830ac873796" />

- **Higher numbers** represent higher elevations.
- **Color values** can be defined using hexadecimal (e.g., `0xFF0000` for red).

If the file contains any errors (invalid numbers or color codes), the program will indicate the exact line and coordinate where the issue occurs.

---

## 🎮 Controls

### 🟢 **Mandatory Controls**

| Key/Action        | Description                         |
|-------------------|-------------------------------------|
| ESC               | Exit Program                       |

### 🟠 **Bonus Controls**

| Key/Action          | Description                                  |
|--------------------|----------------------------------------------|
| Arrow Keys        | Move the origin on the X/Y plane             |
| 1 / 2              | Zoom In / Zoom Out                          |
| 3 / 4              | Auto-Zoom In / Out (double-tap for boost)   |
| Q / A              | Rotate +X / -X                              |
| W / S              | Rotate +Y / -Y                              |
| E / D              | Rotate +Z / -Z                              |
| PGUP / PGDN        | Auto-Rotate +Z / -Z                         |
| HOME / END         | Auto-Rotate +X / -X                         |
| \ (Backslash)      | Change Pattern                              |
| / (Slash)          | Invert Colors                               |
| (NUM) + / -        | Fine-tune Radians                           |
| CAPSLOCK           | Reset to Isometric View                     |
| SHIFT              | Switch to Horizontal View                   |
| TAB                | Switch to Parallel View                     |
| F5 - F8            | Toggle Patterns/Views (if implemented)      |
| ESC                | Exit Program                                |

---

## 📁 Project Structure

```
FDF/
├── inc/             # Header files
├── srcs/            # Source code files
├── test_maps/       # Example .fdf maps
├── Makefile         # Build file for the project
└── README.md        # Project documentation
```

---

## 🧪 Tips & Acknowledgments

- 💾 **Memory & Error Checking:** Use `valgrind` to detect memory leaks.
- 📚 **42 Resources:** Part of the **42 Curriculum**.
- 🎨 **MiniLibX Docs:** [MiniLibX Documentation](https://harm-smits.github.io/42docs/libs/minilibx/getting_started.html)

Developed by [Levent Akdogan](https://github.com/lakdogan).

For questions or suggestions, feel free to open an issue or contact me directly.

---

## 📜 License

This project is licensed under the **MIT License**.

```
MIT License

Copyright (c) 2024 Levent Akdogan

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```

---


