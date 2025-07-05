# compression-decompression
*COMPANY*: CODTECH IT SOLUTIONS PVT.LTD
**NAME*: SHYAM CHARAN MURMU
*INTERN ID*: CT04DG256
*DOMAIN*: C LANGUAGE
*DURATION*: 4 WEEKS
*MENTOR*: NEELA SANTOSH KUMAR
#This C program demonstrates a basic implementation of Run-Length Encoding (RLE), a simple form of data compression that replaces sequences of repeated characters with a single character followed by the number of repetitions. The program is divided into two main phases: accepting user input and writing it to a file, and then applying RLE compression to that file’s contents. It is a practical example of how file handling and basic compression algorithms can be combined in C to process and transform data efficiently.

The first phase of the program involves capturing user input and saving it to a file named `data.txt`. This is handled by the `writeToInputFile` function, which opens the file in write mode and prompts the user to enter a line of text. The input is read using `fgets`, and any trailing newline character is removed to ensure clean formatting. The sanitized string is then written to the file using `fputs`. This step ensures that the input data is stored persistently and can be accessed later for compression.

The second phase is the core of the program: applying RLE compression. This is performed by the `applyRLECompression` function, which reads the contents of `data.txt` and writes the compressed output to a new file named `rle_output.txt`. The function reads characters one by one from the source file and keeps track of consecutive repetitions. When a different character is encountered, it writes the previous character along with its count to the output file. This process continues until the end of the file is reached. If the input file is empty, the program notifies the user and exits gracefully.

The compression logic is straightforward but effective. For example, a string like `aaabbc` would be compressed to `a3b2c1`, significantly reducing the size of data with many repeated characters. The use of `fprintf` for writing compressed output ensures that both characters and their counts are stored in a readable format. The program also includes error handling to manage scenarios where files cannot be opened, ensuring robustness and reliability.

The `main` function orchestrates the entire process by calling the two core functions in sequence. It defines the filenames for the input and output files and ensures that the user’s data is first written and then compressed. This linear flow makes the program easy to follow and modify, whether for educational purposes or for extending its functionality.

Overall, this program serves as a concise and functional demonstration of file I/O operations and basic data compression in C. It introduces key programming concepts such as string manipulation, character processing, and file stream management. While the RLE algorithm used here is simple, it lays the groundwork for understanding more advanced compression techniques and can be adapted for larger-scale applications. This makes the program a valuable resource for students and developers exploring the fundamentals of data compression and file handling in C.

#OUTPUT:-
