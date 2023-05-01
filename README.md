# C++ : Graphics Examples

It(graphics.h) is called BGI(Borland Graphics Interface).It is an olden 32-bit real-mode DOS library, included with Borland's Turbo C and C++ products. And basically graphics.h, conio.h can be inferred as windows headerfiles. So It'll run only one windows.

The last [Borland's C++](https://en.wikipedia.org/wiki/Borland_Graphics_Interface) IDE for DOS is Borland C++ 3.1 (1992). The last C++ environment which supports BGI is Borland C++ 5.02 (1997), which works under Windows but can compile DOS programs. BGI was accessible in C/C++ with graphics.lib / graphics.h, and in Pascal via the graph unit.

BGI was less powerful than modern graphics libraries such as SDL or OpenGL, since it was designed for 2D presentation graphics instead of event-based 3D applications. However, it has been considered simpler to code. BGI and Turbo C++, although obsolete, are still widely used in education in India.

> This repo is for practising C++ graphics (turbo c++) using `graphics.h` file.

## Instaructions for dev-c++

1. Download `Dev-cpp 5.11 TDM-GCC 4.9.2` from [sourceForge](https://sourceforge.net/projects/orwelldevcpp/).
2. Install `Dev-cpp`.
3. Download Graphics Files For Dev C++ from [GDrive - without consoleAppGraphics template](https://drive.google.com/file/d/16xZBvFXf7yFjxwTpuyevK1KPuLgUeZFh/view) or [studyReadEducate](https://studyreadeducate.com/c-graphics-files-for-dev-c-and-codeblocks/) or [GDrive for studyReadEducate](https://drive.google.com/file/d/14BLoBy0PA_A7_gdgO6UWiLEzrMPr7Hua/view) and unzip.
4. Copy the following files to appropriate Dev-cpp folders

   - 🟢 This step is optional only: copy `6-ConsoleAppGraphics.template` and `ConsoleApp_cpp_graph.txt` from `Graphics in Dev C++` to `C:\Program Files (x86)\Dev-Cpp\Templates\`.
   - ✔️ Copy `graphics.h` and `winbgim.h` from `Graphics in Dev C++` to `C:\Program Files (x86)\Dev-Cpp\MinGW64\x86_64-w64-mingw32\include\`.
   - ✔️ Copy `libbgi.a` from `Graphics in Dev C++` to `C:\Program Files (x86)\Dev-Cpp\MinGW64\x86_64-w64-mingw32\lib\`.

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

10. Test program

```cpp
#include<graphics.h>

main(){
  initwindow(800, 800);
  //  creating line
  //  line(200, 210, 400, 410);

  //  creating circle (x, y, radius)
  circle(300, 300, 20);
  getch();
}
```

## Instaructions for code blocks

1. Download `codeblocks-20.03mingw-setup` (64 bit) from [here](http://www.codeblocks.org/downloads/binaries/).

   - [🟡v20.03 mingw 64-bit](https://sourceforge.net/projects/codeblocks/files/Binaries/20.03/Windows/codeblocks-20.03mingw-setup.exe), [🟡v20.03 mingw 32-bit](https://sourceforge.net/projects/codeblocks/files/Binaries/20.03/Windows/codeblocks-20.03mingw-32bit-setup.exe), [🟡v17.12 mingw](https://sourceforge.net/projects/codeblocks/files/Binaries/17.12/Windows/codeblocks-17.12mingw-setup.exe/download), [🟡v16.01 mingw](http://sourceforge.net/projects/codeblocks/files/Binaries/16.01/Windows/codeblocks-16.01mingw-setup.exe)

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

5. Download `32-bit compiler` from [here](https://jmeubank.github.io/tdm-gcc/) and install it.
6. Download Graphics Files from [here](https://drive.google.com/file/d/16xZBvFXf7yFjxwTpuyevK1KPuLgUeZFh/view) and unzip it.
7. Copy the following files form downloaded zip folder to the appropriate `TDM-GCC-32` folders

   - ✔️ Copy `graphics.h` and `winbgim.h` from `downloaded Graphics folder` to `C:\TDM-GCC-32\include\`.
   - ✔️ Copy `libbgi.a` from `downloaded Graphics folder` to `C:\TDM-GCC-32\lib`.

8. Add the appropriate linkers

   - 🟢 The click on `settings` from the main ribbon, then choose `Compiler...`
   - 🟢 Then click on `Toolchain executables` in the tab from the dialog and choose the new 32-bit gcc compiler as shown below:
     ![image](https://user-images.githubusercontent.com/46064269/235359032-609b2a98-a400-484a-b2f1-bc8649631bcc.png)

   - 🟢 Then click on `Linker settings` and add the following linker tags under `Other linker options` and then hit `save` as shown below:
     ![image](https://user-images.githubusercontent.com/46064269/235359117-71d61c96-aca8-4569-84c1-3297b98764f4.png)

9. Create a new project

   - Click on File -> New -> Project -> Console Application, then click on `Go`
   - Click on `Next`, then choose `C++` and go on with the prompt.
   - After writing a program, click on `compile and run`

10. Test program

```cpp
  #include <graphics.h>

  int main(){
    int gd=DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    circle(320, 240, 200);
    getch();
    closegraph();
    return 0;
  }
```

11. Changing indentation: settings -> Editor

12. Video references:

    - [How to setup graphics.h in CodeBlocks v20.03 | CodeWar - YouTube](https://www.youtube.com/watch?v=VEkAj-xVTKQ)
    - [How to run graphics program in CodeBlocks v17.12 | Graphics in C++ | Study Read Educate - YouTube](https://www.youtube.com/watch?v=oFUUpC9Z--U)
    - [How to setup graphics.h in CodeBlocks v17.12 | CodeWar - YouTube](https://www.youtube.com/watch?v=GM0kni4jdPY)

## Instaructions for VS Code

1. Download VS Code and Install it
2. Download `32-bit compiler` from [here](https://jmeubank.github.io/tdm-gcc/) and install it.
3. Download Graphics Files from [here](https://drive.google.com/file/d/16xZBvFXf7yFjxwTpuyevK1KPuLgUeZFh/view) and unzip it.
4. Copy the following files form downloaded zip folder to the appropriate `TDM-GCC-32` folders

   - ✔️ Copy `graphics.h` and `winbgim.h` from `downloaded Graphics folder` to `C:\TDM-GCC-32\include\`.
   - ✔️ Copy `libbgi.a` from `downloaded Graphics folder` to `C:\TDM-GCC-32\lib`.

5. Go to extensions search bar,

   - search for [c++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools), and choose the extension from `Microsoft` and install it.
   - Install [code runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner) from extension

6. Click on view -> command palette or `Ctr + Shift + P` and type `c++:ui` as shown below:

![image](https://user-images.githubusercontent.com/46064269/235362562-3d8cc040-8fbe-4d1e-807f-b8362925dfc0.png)

7.  Add the below configurations as shown in screenshot:

    - Select a configuration set to edit: `win32`
    - Compiler path: `C:/TDM-GCC-32/bin/g++.exe`
    - Compiler arguments:

    ```bash
      -lbgi
      -lgdi32
      -lcomdlg32
      -luuid
      -loleaut32
      -lole32
    ```

    ![image](https://user-images.githubusercontent.com/46064269/235363003-bcd87df8-36ab-44c2-99e2-f7ea1d21ed33.png)

8.  Build the program: Click on Terminal -> Run Build Task or `Ctr + Shift + B`
    ![image](https://user-images.githubusercontent.com/46064269/235363245-a585ae19-052c-43b8-a98e-5c68a41d4d2d.png)

    - You'll see the following success info.

    ```bash
       *  Executing task: C/C++: g++.exe build active file

       Starting build...
       C:/TDM-GCC-32/bin/g++.exe -fdiagnostics-color=always -g D:\AR_prog\rnd\c-cpp\cppGraphicsExamples\main.cpp -o D:\AR_prog\rnd\c-cpp\cppGraphicsExamples\main.exe -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

       Build finished successfully.
       *  Terminal will be reused by tasks, press any key to close it.
    ```

    - Then run the following command (`./filename`)

    ```bash
      ./main
    ```

9.  Video reference:

    - [How to setup graphics.h in VS Code | CodeWar - YouTube](https://www.youtube.com/watch?v=J0_vt-7Ok6U)

10. Programming example:

```cpp
#include <graphics.h>

int main(int argc, char const *argv[])
{
  int gd = DETECT, gm;
  initgraph(&gd, &gm, (char *)"");
  circle(320, 240, 200);
  getch();
  closegraph();
  return 0;
}
```

## Other Resources

1. [Guide to setup 'graphics.h' - github](https://github.com/SagarGaniga/Graphics-Library)
2. [Guide to setup BGI - github](https://github.com/rafiulgits/BGI-Projects)
3. [Practical examples to BGI](https://github.com/SagarGaniga/computer-graphics)
