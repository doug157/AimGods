#pragma once

namespace funcs
{
    void LogEvent(std::string Name, bool PrintToConsole, bool SaveToLog);
    uintptr_t FindPattern(uintptr_t start, size_t length, const unsigned char* pattern, const char* mask);
    uintptr_t FindPattern(HMODULE module, const unsigned char* pattern, const char* mask);
    std::string utf8_encode(const std::wstring& wstr);
    std::wstring utf8_decode(const std::string& str);
    std::wstring random_wstring(std::size_t length, const std::wstring characters);
    std::wstring random_name();
}