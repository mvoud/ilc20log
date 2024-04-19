# ILC20LOGLIB v2


## Pros

1. **Traceability**: ILC20LOG provides solid traceability for the application, allowing for the logging of events, errors, and crucial information. This is essential for troubleshooting and performance monitoring.

2. **Time Savings**: It simplifies the debugging process by offering a detailed record of events, making it easier to identify and resolve bugs efficiently.

3. **Configurability**: Logging libraries like ILC20LOG often offer flexible configuration, enabling you to define what types of messages to log, where to store them, and how to format them.

## Cons

"NO CONS"

## Objectives

1. first is to help out people with console debugging
2. removeing the option std::cout that is hard to write
3. easy to implement in the projecte with no interuuption

---

## FRAMEWORK SUPPORT:

- Linux [✅]
- Macos [✅]
- Windows [✅]

---

## What is ilc20log?

**ilc20log** is a logger for engine and small tools.

---


## Supported Symbols

The `ilc20log` library supports the following symbols:

- **ICG20_LOGGER_TYPE_INFO**: This symbol is used for informational messages.
- **ICG20_LOGGER_TYPE_WARNING**: This symbol is used for warning messages.
- **ICG20_LOGGER_TYPE_ERROR**: This symbol is used for error messages.
- **ICG20_LOGGER_TYPE_FATAL**: This symbol is used for fatal error messages.
- **ICG20_LOGGER_TYPE_LOG**: This symbol is used for log messages.
- **ICG20_LOGGER_TYPE_DEBUG**: This symbol is used for debug messages.
- **ICG20_LOGGER_TYPE_EVENT**: This symbol is used for event messages.
- **ICG20_LOGGER_TYPE_FILE**: This symbol is used for file-related messages.
- **ICG20_LOGGER_TYPE_SHADER**: This symbol is used for shader-related messages.
- **ICG20_LOGGER_TYPE_SHADER_DEBUG**: This symbol is used for shader debug messages.
- **ICG20_LOGGER_TYPE_DOWNLOAD**: This symbol is used for download-related messages.
- **ICG20_LOGGER_TYPE_WEBENGINE**: This symbol is used for web engine-related messages.
- **ICG20_LOGGER_TYPE_CONSOLE**: This symbol is used for console-related messages.
- **ICG20_LOGGER_TYPE_SYSTEM**: This symbol is used for system-related messages.
- **+ popular librarys status**

  
Each of these symbols corresponds to a different type of log message, allowing you to categorize and filter your logs as needed.
---

## Setup

1. **Setup the header file**: You can do this using Visual Studio or your preferred IDE.
2. **Include the header files**: In your `main.cpp` file, include the necessary header files. For example:
    ```cpp
    #include <icg_algorithm.hpp>
    ```
3. **Define your class**: You can define your class as follows:
    ```cpp
    ic20_algorithm* cLogger = new ic20_algorithm;
    ```
4. **Initialize the library**: You can initialize the library with the following command:
    ```cpp
    cLogger->ic20_athm_init();
    ```
5. **Define your custom log message**: Now you can define your custom log message. Here are a couple of examples:
    - To print a message log:
        ```cpp
        cLogger->messageType(ICG20_CONSOLE_LOGGER_TYPE_INFO).c20_print("Hello World");
        ```
    - To print example messages of all types of logs inside the library:
        ```cpp
        cLogger->ilc20_exampleMessages();
        ```

---

Example Logger Code:

```cpp
#include <iostream>
#include <icg_algorithm.hpp>

int main() {
    ic20_algorithm* cLogger = new ic20_algorithm;

    cLogger->ic20_athm_init();
    cLogger->ilc20_exampleMessages();
}
```
![immagine](https://github.com/WhaGames/ilc20log/assets/130051824/60264840-cb19-47a0-bfe6-97defe133de5)


Example Your message Code:
-
```cpp
int main() {
	ic20_algorithm* cLogger = new ic20_algorithm;

	cLogger->ic20_athm_init();
	cLogger->messageType(ICG20_CONSOLE_LOGGER_TYPE_INFO).c20_print("Hello World");

}

```
-
![immagine](https://github.com/WhaGames/ilc20log/assets/130051824/5eb625c9-f5db-4de6-85c3-a137ec753627)

---

## Will you expand this library with custom user options?
Yes, I will expand this library with custom options by the user but for now it only provides pre-defined messages...


## UPDATE v2 [19/04/2024]:

Cooming Soon....
