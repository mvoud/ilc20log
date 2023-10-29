#pragma once

//------------- PRIME PART ------------- //
#define ICG20_CONSOLE_LOGGER_TYPE_INFO		0x9fb921
#define ICG20_CONSOLE_LOGGER_TYPE_ERROR		0x9fb920
#define ICG20_CONSOLE_LOGGER_TYPE_WARNING	0x9fb919
#define ICG20_CONSOLE_LOGGER_TYPE_FATAL		0x9fb918
//------------- SECOND PART -------------//
#define ICG20_CONSOLE_LOGGER_TYPE_LOG			0x9a8f40
#define ICG20_CONSOLE_LOGGER_TYPE_EVENT			0x9a8f39
#define ICG20_CONSOLE_LOGGER_TYPE_DEBUG			0x9a8f38
#define ICG20_CONSOLE_LOGGER_TYPE_SHADER		0x9a8f37
#define ICG20_CONSOLE_LOGGER_TYPE_SHADER_DEBUG	0x9a8f36
#define ICG20_CONSOLE_LOGGER_TYPE_FILE			0x9af8f35

#if defined _M_IX86

#elif defined _M_X64
// cooming soon.... -> //#define ICG20_LOGGER_TYPES
#elif defined _M_IA64

#endif

#ifdef ICG20_LOGGER_TYPES

/* console style log types */
/* like {logger_type}{syboltype}*/
struct ilc20_symbol_console_type {
	bool icg20_dots; // :
	bool icg20_arrowFRight; // >
	bool icg20_arrowFLeft; // <
	bool icg20_questionMark; // ?
	bool icg20_at; // @
};
struct ilc20_color_console_type {
	bool icg20_text_nocolors;
	bool icg20_text_high_syntax;
	bool icg20_text_color_inverted;
};
struct ilc20_color_background_style {
	bool icg20_background_dotsPannel;
	bool icg20_background_solidPannel;
	bool icg20_background_nothing;
};

#endif