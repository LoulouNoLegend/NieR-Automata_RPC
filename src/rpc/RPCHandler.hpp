#pragma once

class RPCHandler {
public:
    static void onReady(const DiscordUser* connectedUser)
    {
        DiscordRichPresence discordPresence = {};
        discordPresence.details = "Glory to mankind";
        discordPresence.smallImageKey = "yohra";
        discordPresence.smallImageText = "Mod: github.com/LoulouNoLegend/NieR-Automata_RPC";
        discordPresence.largeImageKey = "sword";
        discordPresence.largeImageText = "NieR:Automata";
        discordPresence.startTimestamp = RPCData::startTime;
        discordPresence.instance = 0;
        Discord_UpdatePresence(&discordPresence);

//#ifdef _DEBUG
//        printf("\nDiscord: connected to user %s#%s - %s\n",
//               connectedUser->username,
//               connectedUser->discriminator,
//               connectedUser->userId);
//#endif
    }
};