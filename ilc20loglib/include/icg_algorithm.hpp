#pragma once
#include "icg_LoggerTypes.hpp"
#include "icg_ConosleAnsiiColorsCodes.hpp"
#include <iostream>

class ic20_algorithm {
	bool ic20_athm_initCalled = false;
public:
	bool ic20_athm_init() {
		this->ic20_athm_initCalled = true;
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
				std::cout << this->rcs_console.Green << " [INFO] " << this->rcs_console.Reset;
				break;
			case ICG20_CONSOLE_LOGGER_TYPE_WARNING:
				std::cout << this->rcs_console.Yellow << " [WARN] " << this->rcs_console.Reset;
				break;
			case ICG20_CONSOLE_LOGGER_TYPE_ERROR:
				std::cout << this->rcs_console.Red << " [ERROR] " << this->rcs_console.Reset;
				break;
			case ICG20_CONSOLE_LOGGER_TYPE_LOG:
				std::cout << this->rcs_console.Cyan << " [LOG] " << this->rcs_console.Reset;
				break;
			case ICG20_CONSOLE_LOGGER_TYPE_FATAL:
				std::cout << this->rcs_console.Magenta << " [FATAL] " << this->rcs_console.Reset;
				break;
			case ICG20_CONSOLE_LOGGER_TYPE_EVENT:
				std::cout << this->rcs_console.Blue << " [EVENT] " << this->rcs_console.Reset;
				break;
			case ICG20_CONSOLE_LOGGER_TYPE_FILE:
				std::cout << this->rcs_console.Green << " [FILE] " << this->rcs_console.Reset;
				break;
			case ICG20_CONSOLE_LOGGER_TYPE_SHADER:
				std::cout << this->rcs_console.Cyan << " [SHADER] " << this->rcs_console.Reset;
				break;
			case ICG20_CONSOLE_LOGGER_TYPE_SHADER_DEBUG:
				std::cout << this->rcs_console.Cyan << " [SHADER::DEBUG] " << this->rcs_console.Reset;
				break;
			case ICG20_CONSOLE_LOGGER_TYPE_DEBUG:
				std::cout << this->rcs_console.Magenta << " [DEBUG] " << this->rcs_console.Reset;
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