# ILC20LOG - FIRST CLR Library
**clr** = 'console logger'

---

## Example function (`ilc20_exampleMessages();`)

---

## SUPPORT LIST:

- Linux [❌]
- Macos [❌ (cooming soon)]
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
![immagine](https://github.com/WhaGames/ilc20log/assets/130051824/b7a0161c-d994-48db-86f7-38745acbefc6)

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