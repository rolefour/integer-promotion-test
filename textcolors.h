// Run in cmd.exe if colors won't show up:
// reg add HKCU\Console /v VirtualTerminalLevel /t REG_DWORD /d 1

#if defined(_WIN32) || defined(_WIN64)
#define BLACK "\x1B[30m"
#define GREY "\x1B[90m"
#define LGREY "\x1B[37m"
#define RESET "\x1B[0m"
#define WHITE "\x1B[97m"

#define RED "\x1B[31m"
#define LRED "\x1B[91m"

#define GREEN "\x1B[32m"
#define LGREEN "\x1B[92m"

#define YELLOW "\x1B[33m"
#define LYELLOW "\x1B[93m"

#define BLUE "\x1B[34m"
#define LBLUE "\x1B[94m"

#define MAGENTA "\x1B[35m"
#define LMAGENTA "\x1B[95m"

#define CYAN "\x1B[36m"
#define LCYAN "\x1B[96m"

#define BOLD "\x1B[1m"

#else

#define BLACK "\033[30m"
#define GREY "\033[90m"
#define LGREY "\033[37m"
#define RESET "\033[0m"
#define WHITE "\033[97m"

#define RED "\033[31m"
#define LRED "\033[91m"

#define GREEN "\033[32m"
#define LGREEN "\033[92m"

#define YELLOW "\033[33m"
#define LYELLOW "\033[93m"

#define BLUE "\033[34m"
#define LBLUE "\033[94m"

#define MAGENTA "\033[35m"
#define LMAGENTA "\033[95m"

#define CYAN "\033[36m"
#define LCYAN "\033[96m"

#define BOLD "\033[1m"

#endif

#define CHECK LGREEN " ✓" RESET
#define CROSS LRED " ✗" RESET