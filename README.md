# NieR:Automata Rich Presence

This project is based on [Crymachina RPC](https://github.com/Crymachina-modding/crymachina_rpc), using the commit published on december 4, 2023.
Visit this page to know how it all works! *(and maybe start your own RPC project)*

Thanks to [Mashynn](https://github.com/KirigiriX) for helping me understand how Cmake works and also adapting the project to NieR! :)

The mod can also be downloaded from [Nexus](https://www.nexusmods.com/nierautomata/mods/566)!

## Overview

**At the moment, this Rich Presence is only static!**

This project provides a Rich Presence integration for NieR:Automata. It will display on your Discord account when you are playing the game!

![image](https://github.com/LoulouNoLegend/NieR-Automata_RPC/assets/40952934/187c47c7-e94e-4ed4-95e5-c7b9d97d4e4e)


## Installation - Method 1: Normal (Faster)

1. Be sure that NieR:Automata is installed on your system
2. Download the zip file from the [release page](https://github.com/LoulouNoLegend/NieR-Automata_RPC/releases)
3. Navigate to the game folder
4. Extract the two files (`steam_api64.dll` and `NieRAutomataRPC.dll`)
5. If it asks to replace files, you just need to accept

## Installation - Method 2: Not recommended (But could be a fix in some ways?)

1. Be sure that NieR:Automata is installed on your system
2. Download the zip file from the [release page](https://github.com/LoulouNoLegend/NieR-Automata_RPC/releases)
3. Navigate to the game folder
6. Rename `steam_api64.dll` to `NieRAutomataRPC.dll`
7. Extract `steam_api64.dll` from the zip file inside the game folder

## Uninstall

1. Navigate to the game folder
2. Delete `steam_api64.dll`
3. Rename `NieRAutomataRPC.dll` to `steam_api64.dll`

## Troubleshooting

- If you encounter any issues, ensure that Discord is running and that your Discord status settings allow for game integrations.

- Check for updates or patches for NieR:Automata that might affect the DLL proxy.

## License

This project is licensed under the [MIT License](LICENSE).
