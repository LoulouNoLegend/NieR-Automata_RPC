# Crymachina Rich Presence

![GitHub release (latest by date)](https://img.shields.io/github/v/release/Crymachina-modding/rpc)

## Overview

This project provides a Rich Presence integration for Crymachina, enhancing the gaming experience by displaying real-time game information on Discord. The integration involves creating a DLL proxy for `libScePad.dll`, and the original DLL is renamed to `libScePad_o.dll`, residing in the game folder at `machina/Binaries/Win64`.

## Installation

1. Ensure Crymachina is installed on your system.

2. Navigate to the game folder and locate the `machina/Binaries/Win64` directory.

3. Rename the original `libScePad.dll` to `libScePad_o.dll` to make way for the DLL proxy.

4. Download the Rich Presence DLL proxy from the [releases](https://github.com/Crymachina-modding/rpc/releases) section.

5. Place the downloaded DLL proxy (`libScePad.dll`) into the `machina/Binaries/Win64` directory.

6. Launch Crymachina and ensure Discord is running.

## Configuration

No additional configuration is required. The DLL proxy automatically hooks into the game's input handling.

## Troubleshooting

- If you encounter any issues, ensure that Discord is running and that your Discord status settings allow for game integrations.

- Check for updates or patches for Crymachina that might affect the DLL proxy.

## Contributions

Contributions are welcome! If you find bugs or have suggestions for improvements, please open an issue or submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).