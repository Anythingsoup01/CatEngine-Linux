#pragma once

#include <iostream>

#include <spdlog/spdlog.h>

namespace CatEngine {
    
    class Log {
    public:
        static void Init();

	inline static std::shared_ptr<spdlog::logger>& GetAPILogger() { return s_APILogger; }
	inline static std::shared_ptr<spdlog::logger>& GetCLILogger() { return s_CLILogger; }

    private:
        static std::shared_ptr<spdlog::logger> s_APILogger;
        static std::shared_ptr<spdlog::logger> s_CLILogger;
    };

// CatEngine Log Macros
#define API_CRITICAL(...) ::CatEngine::Log::GetAPILogger()->critical(__VA_ARGS__)
#define API_ERROR(...)    ::CatEngine::Log::GetAPILogger()->error(__VA_ARGS__)
#define API_WARN(...)     ::CatEngine::Log::GetAPILogger()->warn(__VA_ARGS__)
#define API_INFO(...)     ::CatEngine::Log::GetAPILogger()->info(__VA_ARGS__)
#define API_TRACE(...)    ::CatEngine::Log::GetAPILogger()->trace(__VA_ARGS__)
#define API_ASSERT(x, ...) if(!(x)) { API_CRITICAL(__VA_ARGS__); __debugbreak(); } 

// Client Log Macros
#define CLI_CRITICAL(...) ::CatEngine::Log::GetCLILogger()->critical(__VA_ARGS__)
#define CLI_ERROR(...)    ::CatEngine::Log::GetCLILogger()->error(__VA_ARGS__)
#define CLI_WARN(...)     ::CatEngine::Log::GetCLILogger()->warn(__VA_ARGS__)
#define CLI_INFO(...)     ::CatEngine::Log::GetCLILogger()->info(__VA_ARGS__)
#define CLI_TRACE(...)    ::CatEngine::Log::GetCLILogger()->trace(__VA_ARGS__)

}
