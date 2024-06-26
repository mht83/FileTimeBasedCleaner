# FileTimeBasedCleaner

## Overview
FileTimeBasedCleaner is a C++ application designed to delete files and directories based on their age. It allows users to specify a duration and deletes any files or directories older than this duration within a given path, including subdirectories.

## Features
- **Time-Based Deletion**: Deletes files and directories older than a specified duration.
- **Recursive Cleaning**: Traverses through subdirectories to ensure thorough cleaning.
- **Customizable Duration**: Users can specify the duration in days, hours, and minutes.

## Prerequisites
- A C++17 compliant compiler
- Standard C++ Library

## Input Format
The application expects the age limit in the format of days, hours, and minutes. For example:

`Enter the directory path: /path/to/directory`

`Enter the age limit (days hours minutes): 0 2 30`

This will delete all files and directories older than 2 hours and 30 minutes in the specified path.

## Warning
This tool performs deletions of files and directories. Please use it with caution and ensure that you have appropriate backups before running it on important data.

## Contributing
Contributions to CppStringJoiner are welcome. Please feel free to fork the repository, make improvements, and submit pull requests.

## Contact
If you have any questions, suggestions, or contributions, please open an issue in the repository.

## Author
- mht83
