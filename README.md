# ILC20LOG - FIRST CLR Library
**clr** = 'console logger'

---

## Example function (`ilc20_exampleMessages();`)

---

## SUPPORT LIST:

- Linux [✅]
- Macos [✅]
- Windows [✅]

---

## What is ilc20log?

**ilc20log** is a logger for engine and small tools.

---

## What symbols support?

For now this...

- ICG20_CONSOLE_LOGGER_TYPE_INFO
- ICG20_CONSOLE_LOGGER_TYPE_WARNING
- ICG20_CONSOLE_LOGGER_TYPE_ERROR
- ICG20_CONSOLE_LOGGER_TYPE_FATAL
- ICG20_CONSOLE_LOGGER_TYPE_LOG
- ICG20_CONSOLE_LOGGER_TYPE_DEBUG
- ICG20_CONSOLE_LOGGER_TYPE_EVENT
- ICG20_CONSOLE_LOGGER_TYPE_FILE
- ICG20_CONSOLE_LOGGER_TYPE_SHADER
- ICG20_CONSOLE_LOGGER_TYPE_SHADER_DEBUG
- ICG20_CONSOLE_LOGGER_TYPE_DOWNLOAD
- ICG20_CONOSLE_LOGGER_TYPE_WEBENGINE
- ICG20_CONSOLE_LOGGER_TYPE_CONSOLE
- ICG20_CONSOLE_LOGGER_TYPE_SYSTEM

---

## is high syntaxed?
Yes

---

how can i print this log?
---

first step:
  - setup the header file using visual studio or your ide
  - now define your class , like this (`ic20_algorithm* cLogger = new ic20_algorithm;`)
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

```cpp
int main() {
	ic20_algorithm* cLogger = new ic20_algorithm;

	cLogger->ic20_athm_init();
	cLogger->messageType(ICG20_CONSOLE_LOGGER_TYPE_INFO).c20_print("Hello World");

}

```
![immagine](https://github.com/WhaGames/ilc20log/assets/130051824/5eb625c9-f5db-4de6-85c3-a137ec753627)

---

## Will you expand this library with custom user options?
Yes, I will expand this library with custom options by the user but for now it only provides pre-defined messages...
