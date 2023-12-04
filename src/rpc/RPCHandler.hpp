#pragma once

class RPCHandler {
public:
    static void onReady(const DiscordUser* connectedUser)
    {
        DiscordRichPresence discordPresence = {};
        discordPresence.state = "Weebing in a weeb game...";
        discordPresence.smallImageKey = "tom";
        discordPresence.smallImageText = "Why Crymachina devs didn't add me ?";
        discordPresence.largeImageKey = "game_icon";
        discordPresence.largeImageText = "Mod: https://github.com/Crymachina-modding/rpc";
        discordPresence.startTimestamp = RPCData::startTime;
        discordPresence.instance = 0;
        Discord_UpdatePresence(&discordPresence);

#ifdef _DEBUG
        printf("\nDiscord: connected to user %s#%s - %s\n",
               connectedUser->username,
               connectedUser->discriminator,
               connectedUser->userId);
#endif
    }
};