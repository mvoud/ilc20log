#pragma once
#include "icg_LoggerTypes.hpp"
#include "icg_ConosleAnsiiColorsCodes.hpp"
#include <iostream>

#if defined(__APPLE__)
const std::string osName = "macOS";
#elif defined(__linux__)
const std::string osName = "Linux";
#elif defined(_WIN32)
const std::string osName = "Windows";
#else
const std::string osName = "Unknown";
#endif

class ic20_algorithm {
	bool ic20_athm_initCalled = false;
	bool ic20_device_gbPrint = false;
public:
	bool ic20_athm_init() {
		this->ic20_athm_initCalled = true;

		if (osName == "Windows") {
			this->ic20_device_gbPrint = false;
		}
		else if (osName == "Linux" or "macOS") {
			this->ic20_device_gbPrint = true;
		}

		return 0;
	}
	void ilc20_exampleMessages() {
		this->messageType(ICG20_CONSOLE_LOGGER_TYPE_INFO).c20_print("ilc20");
		this->messageType(ICG20_CONSOLE_LOGGER_TYPE_WARNING).c20_print("ilc20");
		this->messageType(ICG20_CONSOLE_LOGGER_TYPE_ERROR).c20_print("ilc20");
		this->messageType(ICG20_CONSOLE_LOGGER_TYPE_FATAL).c20_print("ilc20");
		this->messageType(ICG20_CONSOLE_LOGGER_TYPE_LOG).c20_print("ilc20");
		this->messageType(ICG20_CONSOLE_LOGGER_TYPE_DEBUG).c20_print("ilc20");
		this->messageType(ICG20_CONSOLE_LOGGER_TYPE_EVENT).c20_print("ilc20");
		this->messageType(ICG20_CONSOLE_LOGGER_TYPE_FILE).c20_print("ilc20");
		this->messageType(ICG20_CONSOLE_LOGGER_TYPE_SHADER).c20_print("ilc20");
		this->messageType(ICG20_CONSOLE_LOGGER_TYPE_SHADER_DEBUG).c20_print("ilc20");
		this->messageType(ICG20_CONSOLE_LOGGER_TYPE_SYSTEM).c20_print("ilc20");
		this->messageType(ICG20_CONOSLE_LOGGER_TYPE_WEBENGINE).c20_print("ilc20");
		this->messageType(ICG20_CONSOLE_LOGGER_TYPE_DOWNLOAD).c20_print("ilc20");
	}
	void ilc20_colorMessage(std::string messageInput, ilc20_avabileColors inputColors) {
		if (inputColors == ilc20_avabileColors::Blue) {
			std::cout << this->rcs_console.Blue << messageInput << this->rcs_console.Reset << " ";
		}
		else if (inputColors == ilc20_avabileColors::Cyan) {
			std::cout << this->rcs_console.Cyan << messageInput << this->rcs_console.Reset << " ";
		}
		else if (inputColors == ilc20_avabileColors::Green) {
			std::cout << this->rcs_console.Green << messageInput << this->rcs_console.Reset << " ";
		}
		else if (inputColors == ilc20_avabileColors::Magenta) {
			std::cout << this->rcs_console.Magenta << messageInput << this->rcs_console.Reset << " ";
		}
		else if (inputColors == ilc20_avabileColors::Red) {
			std::cout << this->rcs_console.Red << messageInput << this->rcs_console.Reset << " ";
		}
		else if (inputColors == ilc20_avabileColors::Yellow) {
			std::cout << this->rcs_console.Yellow << messageInput << this->rcs_console.Reset << " ";
		}
		
	}
	ic20_algorithm& messageType(int avabileTypes) {

		if (this->ic20_athm_initCalled == true) {
			switch (avabileTypes)
			{
			case ICG20_CONSOLE_LOGGER_TYPE_INFO:
				if (this->ic20_device_gbPrint == true) {
					printf(this->rcs_console.Green); printf("[INFO]"); printf(this->rcs_console.Reset);
				}
				else if (this->ic20_device_gbPrint == false) {
					std::cout << this->rcs_console.Green << " [INFO] " << this->rcs_console.Reset;
				}
				
				break;
			case ICG20_CONSOLE_LOGGER_TYPE_WARNING:

				if (this->ic20_device_gbPrint == true) {
					printf(this->rcs_console.Orange); printf("[WARN]"); printf(this->rcs_console.Reset);
				}
				else if (this->ic20_device_gbPrint == false) {
					std::cout << this->rcs_console.Orange << " [WARN] " << this->rcs_console.Reset;
				}
				
				break;
			case ICG20_CONSOLE_LOGGER_TYPE_ERROR:
				if (this->ic20_device_gbPrint == true) {
					printf(this->rcs_console.Red); printf("[ERROR]"); printf(this->rcs_console.Reset);
				}
				else if (this->ic20_device_gbPrint == false) {
					std::cout << this->rcs_console.Red << " [ERROR] " << this->rcs_console.Reset;
				}
				
				break;
			case ICG20_CONSOLE_LOGGER_TYPE_LOG:
				if (this->ic20_device_gbPrint == true) {
					printf(this->rcs_console.Cyan); printf("[LOG]"); printf(this->rcs_console.Reset);
				}
				else if (this->ic20_device_gbPrint == false) {
					std::cout << this->rcs_console.Cyan << " [LOG] " << this->rcs_console.Reset;
				}
				
				break;
			case ICG20_CONSOLE_LOGGER_TYPE_FATAL:
				if (this->ic20_device_gbPrint == true) {
					printf(this->rcs_console.Magenta); printf("[INFO]"); printf(this->rcs_console.Reset);
				}
				else if (this->ic20_device_gbPrint == false) {
					std::cout << this->rcs_console.Magenta << " [FATAL] " << this->rcs_console.Reset;
				}
			
				break;
			case ICG20_CONSOLE_LOGGER_TYPE_EVENT:
				if (this->ic20_device_gbPrint == true) {
					printf(this->rcs_console.Blue); printf("[EVENT]"); printf(this->rcs_console.Reset);
				}
				else if (this->ic20_device_gbPrint == false) {
					std::cout << this->rcs_console.Blue << " [EVENT] " << this->rcs_console.Reset;
				}
				
				break;
			case ICG20_CONSOLE_LOGGER_TYPE_FILE:
				if (this->ic20_device_gbPrint == true) {
					printf(this->rcs_console.Green); printf("[FILE]"); printf(this->rcs_console.Reset);
				}
				else if (this->ic20_device_gbPrint == false) {
					std::cout << this->rcs_console.Green << " [FILE] " << this->rcs_console.Reset;
				}
				
				break;
			case ICG20_CONSOLE_LOGGER_TYPE_SHADER:
				if (this->ic20_device_gbPrint == true) {
					printf(this->rcs_console.Cyan); printf("[SHADER]"); printf(this->rcs_console.Reset);
				}
				else if (this->ic20_device_gbPrint == false) {
					std::cout << this->rcs_console.Cyan << " [SHADER] " << this->rcs_console.Reset;
				}
				
				break;
			case ICG20_CONSOLE_LOGGER_TYPE_SHADER_DEBUG:
				if (this->ic20_device_gbPrint == true) {
					printf(this->rcs_console.Cyan); printf("[SHADER::DEBUG]"); printf(this->rcs_console.Reset);
				}
				else if (this->ic20_device_gbPrint == false) {
					std::cout << this->rcs_console.Cyan << " [SHADER::DEBUG] " << this->rcs_console.Reset;
				}
				
				break;
			case ICG20_CONSOLE_LOGGER_TYPE_DEBUG:
				if (this->ic20_device_gbPrint == true) {
					printf(this->rcs_console.Magenta); printf("[DEBUG]"); printf(this->rcs_console.Reset);
				}
				else if (this->ic20_device_gbPrint == false) {
					std::cout << this->rcs_console.Magenta << " [DEBUG] " << this->rcs_console.Reset;
				}
				
				break;
			case ICG20_CONSOLE_LOGGER_TYPE_DOWNLOAD:
				if (this->ic20_device_gbPrint == true) {
					printf(this->rcs_console.Red); printf("[DOWNLOADING]"); printf(this->rcs_console.Reset);
				}
				else if (this->ic20_device_gbPrint == false) {
					std::cout << this->rcs_console.Red << " [DOWNLOADING] " << this->rcs_console.Reset;
				}
				
			break;
			case ICG20_CONSOLE_LOGGER_TYPE_SYSTEM:
				if (this->ic20_device_gbPrint == true) {
					printf(this->rcs_console.Blue); printf("[SYS]"); printf(this->rcs_console.Reset);
				}
				else if (this->ic20_device_gbPrint == false) {
					std::cout << this->rcs_console.Blue << " [SYS] " << this->rcs_console.Reset;
				}
			
			break;
			case ICG20_CONOSLE_LOGGER_TYPE_WEBENGINE:
				if (this->ic20_device_gbPrint == true) {
					printf(this->rcs_console.Cyan); printf("[WB.ENGINE]"); printf(this->rcs_console.Reset);
				}
				else if (this->ic20_device_gbPrint == false) {
					std::cout << this->rcs_console.Cyan << " [WB.ENGINE] " << this->rcs_console.Reset;
				}
				
			break;
			default:
				std::cout << "ILC20LOG -> INVALID -> CONOSLE -> LOGGER -> TYPE -> " << avabileTypes << std::endl;
				break;
			}
		}
		else if (this->ic20_athm_initCalled == false) {
			std::cout << "did you called the function?  ' yourclassdefinition->ic20_athm_init(); ' : please call that function is important..." << std::endl;
		}
	
		return *this;
	}
	ic20_algorithm& c20_print(std::string messageInput) {
		std::cout << messageInput << std::endl;
		return *this;
	}
private:
	RainbowColors rcs_console;
};