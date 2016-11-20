/*
 * Welcome to the world of C++
 * This program will introduce you to the vary basics of C++, without requiring you to write any code.
 * Read through the comments in the code to understand the different elements you may encounter in a C++ program.
 */

/*
 * To run this program, you first need to compile it. The compiler is the program that converts your human readable
 * code into the binary (ones and zeroes) instructions that a computer processor understands. Technically, what we
 * are calling the compiler is actually a collection of several programs, each performing a specific task to turn
 * your code into a working program. Together, all these programs (which the compiler is only one of) are referred
 * to as a toolchain. Other programs in the toolchain include the preprocessor, assembler, and linker. For our
 * purposes, we will ignore this complexity and simply use the term compiler.
 *
 * To build (or compile) the program, select the arrow next to the hammer on the toolbar and select "Release".
 * This tells Eclipse you wish to build your program for the purposes of running it on it's own. The Debug
 * configuration is used when you wish to debug your program, and step through it line by line. Running your
 * program in the debugger will also allow you to see the values of variables and other useful information
 * while the program runs. In order to support this functionality, the compiler must include additional information
 * in the final program and avoid optimizations so the debugger can match up the final program to your code,
 * hence the existence of the debug configuration.
 *
 * Once you select the release configuration, the compiler will make your program. You will see the output of the
 * compiler in the Console view. The output should end with a "Build Finished" message and show no errors.
 * Once you have built the program, you can now run it. To run the program, click the arrow next to the green play
 * button on the toolbar, and select Run As->Local C/C++ Application. You should see "Hello world!" printed in the
 * console.
 *
 * (You may also use the Project->Build Configurations, Project->Build, Run->Run As->Local C/C++ Application,
 * and Run->Run menu items in place of the toolbar buttons)
 */

/**
 * Now we will cover the basic structure of a C++ program by walking through this example.
 */

/*
 * This line is called a preprocessor directive. In this case, it is instructing the preprocessor (which we are
 * considering to be a part of the compiler) to include an iostream file into our program. iostream is part of
 * the C++ standard library, and allows us to write output and take input from a console. In this case, the
 * name iostream refers to I/O stream, or Input/Output stream. We write to the output stream to print out the
 * hello world message.
 */
#include <iostream>

/*
 * This line starts the definition of a function named main. In C++, the main function is where your program starts.
 * It functions similarly to the when green flag clicked block in Scratch.
 * The braces, { and } define the start and end of the function. All the code between the braces is part of
 * the main function. In this way, the braces delimit "blocks" of code similar to the blocks in Scratch.
 *
 * int means this function returns an integer later, and the empty parentheses, ( and ), following the word main
 * indicate that main does not take any parameters or inputs. We will discuss functions in more detail later.
 */
int main()
{
    /**
     * This line is what does the actual printing. std::cout represents the standard output stream. The std::
     * in front of cout tells the compiler that cout is in the standard namespace, which is std in C++.
     *
     * Next we have the << operator, which is used to send something to the output stream. Think of a stream
     * like a continuous flow of data, or even a pipe. The << sends something through the pipe. In this case,
     * we send the text "Hello world!" to the screen output. After this, we also send std::endl to the output
     * stream. endl is something else in the standard namespace, which represents an endline (starts a new line).
     *
     * After that we have a comment, which will be explained later.
     */
    std::cout << "Hello world!" << std::endl; // Print "Hello world!"
    /*
     * This line causes the main function to return 0. By convention, a return value of 0 from a program tells
     * the computer it ran successfully, and other values indicate an error or other condition.
     * When you ran the program, you should have seen the "<terminated> (exit value: 0)" above the console.
     * Try changing the number following the return and you will see that the console will show a different
     * exit value (Make sure to use an integer, i.e. no decimal points).
     *
     * To run the program with your change, first save (Ctrl + S saves the active file, Ctrl + Shift + S saves
     * all files) and click the green play button on the toolbar. You should not need to build the program again,
     * but should notice that the compiler runs automatically because you have changed the code since you last
     * ran the program.
     */
    return 0;
}

/*
 * One more important thing to notice, is that each line of code in the main function ends with a semicolon.
 * This tells the compiler that your statement has ended. C++ does not care about whitespace (spaces, tabs,
 * newlines), and is interpreting your code based on the symbols it contains. This is different from other
 * languages such as Python, which do care about whitespace. The whitespace does make it much easier for
 * people to read the code, which is why we use it.
 *
 * If you want to see for yourself, move the return 0; to immediately after the std::endl; earlier in the program.
 * The program should still compile and run the same way.
 */

/*
 * One last thing to cover is comments. All the text you have been reading so far is a comment, and the compiler
 * ignores it. It will not change how the program runs. Comments are for human consumption, and can serve to
 * explain code or make the programmer's intentions clear to other readers. They can be just as important as
 * the actual code.
 *
 * In C++, comments can be represented in two different ways. The first, a single line comment, starts with //.
 * You can see this at the end of the line that prints the message above.
 */

// This is a single line comment

// The second kind of comment is a multi-line comment. A multi-line comment is delimited by /* and */
// Everything between the /* and */ is considered to be a comment, similar to the braces marking the main function.
// The stars running along the left of the comments in this file are just to look fancy, and Eclipse will do it
// by itself when you make a new line.

/* This is
a
     multi line
  comment
*/
