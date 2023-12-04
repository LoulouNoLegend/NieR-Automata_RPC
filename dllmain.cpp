#include <cstdio>
#include <windows.h>
#include <cstdint>
#include <ctime>

#include "discord_rpc.h"

#ifdef _WIN64
#pragma comment(lib, "discord-rpc-x64.lib")
#else
#pragma comment(lib, "discord-rpc-x86.lib")
#endif

const char* APPLICATION_ID = "1181021310739042304";
int64_t StartTime = time(nullptr);

void handleDiscordReady(const DiscordUser* connectedUser)
{
    DiscordRichPresence discordPresence = {};
    discordPresence.state = "Weebing in a weeb game...";
    discordPresence.smallImageKey = "tom";
    discordPresence.smallImageText = "Why Crymachina devs didn't add me ?";
    discordPresence.largeImageKey = "game_icon";
    discordPresence.largeImageText = "Mod: https://github.com/Crymachina-modding";
    discordPresence.startTimestamp = StartTime;
    discordPresence.instance = 0;
    Discord_UpdatePresence(&discordPresence);

#ifdef _DEBUG
    printf("\nDiscord: connected to user %s#%s - %s\n",
           connectedUser->username,
           connectedUser->discriminator,
           connectedUser->userId);
#endif
}

void init() {
    DiscordEventHandlers handlers = {};
    handlers.ready = handleDiscordReady;
    Discord_Initialize(APPLICATION_ID, &handlers, 1, nullptr);

#ifdef _DEBUG
    AllocConsole();
    freopen("CONOUT$", "w", stdout);
#endif

    for(;;) {
        Discord_RunCallbacks();
    }

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
