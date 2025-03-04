# Progress Tracker

## Weekly Assignments

- 15% Lab: released every Tue 6pm, due next Mon 8pm
- 10% Quizzes: released every Tue 8pm, due next Mon 8pm
- 15% Assignment1
- 15% Assignment2
- 45% Final Exam

| Tut                                                             | Status | Lab                                                             | Status | Quiz | Status |
| --------------------------------------------------------------- | ------ | --------------------------------------------------------------- | ------ | ---- | ------ |
| [1](https://cgi.cse.unsw.edu.au/~cs2521/25T1/tut/1/questions)   | ✅     | [1](https://cgi.cse.unsw.edu.au/~cs2521/25T1/lab/1/questions)   | ✅     | 1    | ✅     |
| [2](https://cgi.cse.unsw.edu.au/~cs2521/25T1/tut/2/questions)   | ✅     | [2](https://cgi.cse.unsw.edu.au/~cs2521/25T1/lab/2/questions)   | ✅     | 2    | ✅     |
| [3](https://cgi.cse.unsw.edu.au/~cs2521/25T1/tut/3/questions)   | ❌     | [3](https://cgi.cse.unsw.edu.au/~cs2521/25T1/lab/3/questions)   | ❌     | 3    | ❌     |
| [4](https://cgi.cse.unsw.edu.au/~cs2521/25T1/tut/4/questions)   | ❌     | [4](https://cgi.cse.unsw.edu.au/~cs2521/25T1/lab/4/questions)   | ❌     | 4    | ❌     |
| [5](https://cgi.cse.unsw.edu.au/~cs2521/25T1/tut/5/questions)   | ❌     | [5](https://cgi.cse.unsw.edu.au/~cs2521/25T1/lab/5/questions)   | ❌     | 5    | ❌     |
| [6](https://cgi.cse.unsw.edu.au/~cs2521/25T1/tut/6/questions)   | ❌     | [6](https://cgi.cse.unsw.edu.au/~cs2521/25T1/lab/6/questions)   | ❌     | 6    | ❌     |
| [7](https://cgi.cse.unsw.edu.au/~cs2521/25T1/tut/7/questions)   | ❌     | [7](https://cgi.cse.unsw.edu.au/~cs2521/25T1/lab/7/questions)   | ❌     | 7    | ❌     |
| [8](https://cgi.cse.unsw.edu.au/~cs2521/25T1/tut/8/questions)   | ❌     | [8](https://cgi.cse.unsw.edu.au/~cs2521/25T1/lab/8/questions)   | ❌     | 8    | ❌     |
| [9](https://cgi.cse.unsw.edu.au/~cs2521/25T1/tut/9/questions)   | ❌     | [9](https://cgi.cse.unsw.edu.au/~cs2521/25T1/lab/9/questions)   | ❌     | 9    | ❌     |
| [10](https://cgi.cse.unsw.edu.au/~cs2521/25T1/tut/10/questions) | ❌     | [10](https://cgi.cse.unsw.edu.au/~cs2521/25T1/lab/10/questions) | ❌     | 10   | ❌     |

# CS101

1. Command Line -> [How to use?](https://missing.csail.mit.edu/)

```bash
## List directory contents
ls            # Lists the files and directories in the current directory
ls -l         # Detailed listing, showing permissions, owner, size, etc.
ls -a         # Shows all files, including hidden ones (those starting with '.')
ls -lh        # Detailed listing with human-readable file sizes

# Change directory
cd <directory> # Change to the specified directory
cd ~           # Go to the home directory
cd ..          # Go up one directory level

# Print working directory (show current directory path)
pwd

# Copy files or directories
cp <source> <destination>        # Copy source file to destination
cp -r <source> <destination>     # Copy a directory recursively

# Move or rename files or directories
mv <old_name> <new_name>         # Rename or move a file/directory

# Remove files or directories
rm <file_or_directory>           # Remove a file or directory (without asking)
rm -r <directory>                # Remove a directory and its contents recursively
rm -f <file>                     # Force removal, ignores non-existent files

# Create an empty file or update timestamp of an existing file
touch <filename>

# Create a new directory
mkdir <directory>                # Create a single directory
mkdir -p <path/to/directory>     # Create nested directories, without error if they exist

# Open files or applications
open <file_or_directory>         # Open file or directory with default app
open .                           # Open the current directory in Finder

# Display the manual (help) page for a command
man <command>                    # Get help information for a command (e.g., 'man ls')

# Search for files
find <path> -name "<filename>"    # Search for files with a specific name in a directory

# Search text within files
grep "<pattern>" <filename>      # Search for a pattern in a file (case-sensitive)
grep -i "<pattern>" <filename>   # Case-insensitive search
grep -r "<pattern>" <directory>  # Search recursively in all files within a directory

# Display the content of files
cat <filename>                   # Display the entire content of a file

# Display the first few lines of a file
head -n <number_of_lines> <filename> # Show the first n lines of a file (default: 10 lines)
head -n 20 <filename>            # Show the first 20 lines

# Display the last few lines of a file
tail -f <filename>                # Display the last few lines and follow updates (e.g., for logs)

# Display active processes
top                                # Displays active processes (real-time)

# Show current processes
ps aux                             # List all processes with detailed information

# Show disk space usage
df                                 # Display disk space usage for all mounted filesystems
df -h                              # Display disk space in human-readable format (e.g., GB, MB)

# Estimate file space usage
du -sh <directory>                # Show the size of a directory (human-readable)

# Display system uptime
uptime                             # Show how long the system has been running

# Show logged-in user
whoami                             # Display the current logged-in user

# Check network connectivity
ping <hostname_or_ip>             # Ping a server to check if it is reachable

# Display or configure network interfaces
ifconfig                          # Show or configure network interfaces

# Download a file from a URL
curl -O <url>                      # Download file from the given URL

# Display network connections
netstat -an                        # Show all active network connections (with numbers)

# Manage disks and volumes
diskutil list                     # List all disks and volumes connected to the system
diskutil eject /dev/disk2         # Eject a specific disk (replace /dev/disk2 with actual device)

# Change file permissions
chmod <permissions> <file>        # Set permissions for a file or directory
chmod 755 <file>                  # Set the file to be readable and executable by everyone, writable only by the owner

# Change file ownership
chown <user>:<group> <file>       # Change the owner and group of a file or directory

# Package management with Homebrew
brew install <package_name>       # Install a package using Homebrew
brew list                         # List all installed packages
brew update                       # Update Homebrew itself
brew upgrade                      # Upgrade all installed packages

# Execute a command with root privileges
sudo <command>                    # Execute a command with superuser privileges

# Create shortcuts for commands
alias <alias_name>='<command>'    # Create an alias to simplify long commands (e.g., 'alias ll="ls -l"')

# Show command history
history                           # Display the list of previously executed commands

# Exit the terminal session
exit                              # Close the terminal window/session

```

2. README file: What is MD -> how to use?

3. Makefile -> how to interpret?
   - A Makefile is used in software development to automate the process of building and managing dependencies in a project. It contains a set of rules that specify how to compile and link the program.
   - The primary purpose of a Makefile is to define how various parts of a project are built and ensure that only the necessary parts are rebuilt when files change, saving time in large projects.
   - Using makefile:
   ```bash
   make #To build everything
   make clean #To clean up the generated files
   ```
4. Debug C in VSCode, [setup](https://www.youtube.com/watch?v=lGsyqgpMAYY&ab_channel=CodeWithArjun)

5. C language: What is .c and .h? What's the difference between them?

| Aspect             | `.c` File (Source File)                                                                    | `.h` File (Header File)                                                                 |
| ------------------ | ------------------------------------------------------------------------------------------ | --------------------------------------------------------------------------------------- |
| **Purpose**        | Contains the **implementation** of functions and logic.                                    | Contains **declarations** or **prototypes** of functions, types, constants, and macros. |
| **Content**        | Function definitions, global variables, and main program logic.                            | Function prototypes, macro definitions, type declarations, and constants.               |
| **Compilation**    | Compiled into an object file (`.o` or `.obj`) which is then linked to form the executable. | Not compiled; included in `.c` files for code sharing.                                  |
| **Usage**          | Holds the actual program logic and functionality.                                          | Exposes an interface, allowing other files to use the declared functions and types.     |
| **Inclusion**      | Not directly included in other files but compiled during the build process.                | Included in `.c` files using the `#include` directive.                                  |
| **Example**        | `void helloWorld() { printf("Hello, World!\n"); }`                                         | `void helloWorld();` (function prototype)                                               |
| **File Extension** | `.c` (C source code file)                                                                  | `.h` (C header file)                                                                    |

6. Git & Github -> how to use?
