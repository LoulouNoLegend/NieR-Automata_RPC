#include <csignal>
#include <cstdio>
#include <windows.h>
#include <discord_rpc.h>
#include <linker.hpp>

#include "rpc/RPCData.hpp"
#include "rpc/RPCHandler.hpp"

#ifdef _WIN64
#pragma comment(lib, "discord-rpc-x64.lib")
#else
#pragma comment(lib, "discord-rpc-x86.lib")
#endif

void init() {
//#ifdef _DEBUG
//    AllocConsole();
//    freopen_s(reinterpret_cast<FILE**>(stdout), "CONOUT$", "w", stdout);
//#endif

    DiscordEventHandlers handlers = {};
    handlers.ready = RPCHandler::onReady;
    Discord_Initialize(RPCData::APPLICATION_ID, &handlers, 1, nullptr);

    std::signal(SIGINT, [](int) {
        RPCData::interrupted = true;
    });

    do {
        Discord_RunCallbacks();
    } while (!RPCData::interrupted);

    Discord_Shutdown();
}

BOOL APIENTRY DllMain(HMODULE hModule, const DWORD dwReason, LPVOID lpReserved) {
    switch (dwReason) {
        case DLL_PROCESS_ATTACH:
            CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(init), nullptr, 0, nullptr);
            break;
        case DLL_PROCESS_DETACH:
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
            break;
        default:
            break;
    }

    return TRUE;
}
