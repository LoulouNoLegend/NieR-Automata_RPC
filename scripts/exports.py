import pefile

exported_functions = []
pe = pefile.PE('.\\steam_api64.dll')
for entry in pe.DIRECTORY_ENTRY_EXPORT.symbols:
    func = entry.name.decode('utf-8')
    exported_functions.append(f'#pragma comment(linker,"/export:{func}=NieRAutomataRPC.{func},@{entry.ordinal}")')

exported_functions = '\n'.join(exported_functions)
print(exported_functions)

with open("output.txt", "w") as text_file:
    text_file.write(exported_functions)
