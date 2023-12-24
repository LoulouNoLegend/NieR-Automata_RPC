#pragma once

class RPCHandler {
public:
    static void onReady(const DiscordUser* connectedUser)
    {
        DiscordRichPresence discordPresence = {};
        discordPresence.state = "Playing, I guess.";
        discordPresence.smallImageKey = "tom";
        discordPresence.smallImageText = "Why the devs didn't add me ?";
        discordPresence.largeImageKey = "sword";
        discordPresence.largeImageText = "Mod: https://github.com/LoulouNoLegend/nier-automata_rpc";
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