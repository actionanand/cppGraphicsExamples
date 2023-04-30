# C++ : Graphics Examples

> practising C++ graphics (turbo c++) using `graphics.h` file.

## Instaructions for dev-c++

1. Download `Dev-cpp 5.11 TDM-GCC 4.9.2` from [sourceForge](https://sourceforge.net/projects/orwelldevcpp/).
2. Install `Dev-cpp`.
3. Download Graphics Files For Dev C++ from [GDrive - without consoleAppGraphics template](https://drive.google.com/file/d/16xZBvFXf7yFjxwTpuyevK1KPuLgUeZFh/view) or [studyReadEducate](https://studyreadeducate.com/c-graphics-files-for-dev-c-and-codeblocks/) or [GDrive for studyReadEducate](https://drive.google.com/file/d/14BLoBy0PA_A7_gdgO6UWiLEzrMPr7Hua/view) and unzip.
4. Copy the following files to appropriate Dev-cpp folders

   - 🟢 This step is optional only: copy `6-ConsoleAppGraphics.template` and `ConsoleApp_cpp_graph.txt` from `Graphics in Dev C++` to `C:\Program Files (x86)\Dev-Cpp\Templates`.
   - ✔️ Copy `graphics.h` and `winbgim.h` from `Graphics in Dev C++` to `C:\Program Files (x86)\Dev-Cpp\MinGW64\x86_64-w64-mingw32\include`.
   - ✔️ Copy `libbgi.a` from `Graphics in Dev C++` to `C:\Program Files (x86)\Dev-Cpp\MinGW64\x86_64-w64-mingw32\lib`.

5. Choose 32-bit GCC compiler:

   - ⚠️ Click on the `dropdown` in the main ribbon, & select `TDM-GCC 4.9.2 32-bit release`. as shown in below image

   ![image](https://user-images.githubusercontent.com/46064269/235348914-50c6f85a-424c-4a81-8732-5e3f26a7b4f7.png)

6. Choose compiler & add linkers as shown below:

   - ⚠️ Click on `Tools` and choose `Compiler and Options`

   - Other Linker Options required for the setup `graphics.h`

   ```bash
     -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
   ```

   ![image](https://user-images.githubusercontent.com/46064269/235352378-34e095f0-982f-4733-9bd7-e45bdd9f0c13.png)

7. To create a new project:
   - File -> New -> Project
   - then select `Console Graphics Application` under `basic` tab
   - then choose your desired name & hit `ok`.
   - prompt will open file explorer, save the `.dev` file where you want to save your project.
   - --- OR ---
   * Click on `File` icon -> source file or `ctr + N`
8. To execute:
   - Click on `execute` in the main ribbon, then choose `Compile & Run` or press `F11`.
9. Video references:
   - [How to setup graphics.h in Dev C++ | CodeWar - YouTube](https://www.youtube.com/watch?v=CHFyEnlMnxg)
   - [How to run graphics Program in dev C++ | Study Read Educate - YouTube](https://www.youtube.com/watch?v=TEMhWt9WwTA)

## Instaructions for code blocks

1. Download `codeblocks-20.03mingw-setup` (64 bit) from [here](http://www.codeblocks.org/downloads/binaries/).
2. Just install `codeblocks setup`.
3. As we've 64-bit version, we've to set up 32-bit GCC. Because our graphics library(`graphics.h`) is compatible with 32-bit.
4. Before moving on, to find the gcc version, Please do the below steps: -> **This step is optional**

   - 🟢 Cpp code to find the `gcc` version

   ```cpp
     #include<stdlib.h>

     // c++ program to know the gcc version
     int main() {
       system("gcc -v");
       return 0;
     }
   ```

   - 🟢 The click on `settings` from the main ribbon, then choose `Compiler...`
   - 🟢 Then click on `Linker settings` in the tab from the dialog & remove all the linkers as shown below:
     ![image](https://user-images.githubusercontent.com/46064269/235356623-eb28def5-0c21-461f-830d-0b909af978f9.png)

   - 🟢 Then click on `Build` from the main ribbon, then choose `Build and Run` or press `F9` to compile & run.
   - 🟢 You can see the below output
     ![image](https://user-images.githubusercontent.com/46064269/235356772-606239b4-5b2d-451b-b038-1c7e5a4beb25.png)
