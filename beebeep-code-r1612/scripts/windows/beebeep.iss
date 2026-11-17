; BeeBEEP - instalador para Windows 7 SP1 / 8 / 10 / 11 (32 bits, funciona tambien en Windows de 64 bits)
; Lo genera compilar-windows.ps1:  ISCC /DAppVersion=x.y.z /DSourceDir=<carpeta dist\BeeBEEP> beebeep.iss
;
; Usa el mismo AppId que el instalador oficial de BeeBEEP: si en la PC ya esta instalado BeeBEEP,
; esta version lo ACTUALIZA (misma carpeta, una sola entrada en "Agregar o quitar programas")
; y se conservan la configuracion y el historial de chats de cada usuario.

#ifndef AppVersion
  #define AppVersion "0.0.0"
#endif
#ifndef SourceDir
  #define SourceDir "..\..\..\dist\BeeBEEP"
#endif

#define AppName "BeeBEEP"
#define AppExe "beebeep.exe"

[Setup]
AppId={{85A0D6B6-2163-425F-92E7-E0BC4CEDCE9A}
AppName={#AppName}
AppVersion={#AppVersion}
AppVerName={#AppName} {#AppVersion}
AppPublisher=BeeBEEP
DefaultDirName={autopf}\{#AppName}
DefaultGroupName={#AppName}
DisableProgramGroupPage=yes
LicenseFile={#SourceDir}\LICENSE.txt
OutputBaseFilename=BeeBEEP-{#AppVersion}-instalador
SetupIconFile=..\..\src\beebeep.ico
UninstallDisplayIcon={app}\{#AppExe}
UninstallDisplayName={#AppName} {#AppVersion}
Compression=lzma2/ultra64
SolidCompression=yes
WizardStyle=modern
PrivilegesRequired=admin
CloseApplications=force
RestartApplications=no
MinVersion=6.1sp1

[Languages]
Name: "spanish"; MessagesFile: "compiler:Languages\Spanish.isl"
Name: "english"; MessagesFile: "compiler:Default.isl"

[CustomMessages]
spanish.FirewallTask=Permitir BeeBEEP en el Firewall de Windows (red local)
english.FirewallTask=Allow BeeBEEP through Windows Firewall (local network)
spanish.AutoStartTask=Abrir BeeBEEP automaticamente al iniciar Windows
english.AutoStartTask=Start BeeBEEP when Windows starts
spanish.OtherTasks=Opciones:
english.OtherTasks=Options:

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"
Name: "firewall"; Description: "{cm:FirewallTask}"; GroupDescription: "{cm:OtherTasks}"
Name: "autostart"; Description: "{cm:AutoStartTask}"; GroupDescription: "{cm:OtherTasks}"

[InstallDelete]
; Bibliotecas y plugins de Qt de versiones anteriores (pueden venir de otro compilador)
Type: files; Name: "{app}\*.dll"
Type: filesandordirs; Name: "{app}\audio"
Type: filesandordirs; Name: "{app}\bearer"
Type: filesandordirs; Name: "{app}\iconengines"
Type: filesandordirs; Name: "{app}\imageformats"
Type: filesandordirs; Name: "{app}\mediaservice"
Type: filesandordirs; Name: "{app}\platforms"
Type: filesandordirs; Name: "{app}\playlistformats"
Type: filesandordirs; Name: "{app}\printsupport"
Type: filesandordirs; Name: "{app}\styles"

[Files]
Source: "{#SourceDir}\*"; DestDir: "{app}"; Flags: ignoreversion recursesubdirs createallsubdirs

[Icons]
Name: "{group}\{#AppName}"; Filename: "{app}\{#AppExe}"
Name: "{group}\{cm:UninstallProgram,{#AppName}}"; Filename: "{uninstallexe}"
Name: "{autodesktop}\{#AppName}"; Filename: "{app}\{#AppExe}"; Tasks: desktopicon

[Registry]
Root: HKLM; Subkey: "Software\Microsoft\Windows\CurrentVersion\Run"; ValueType: string; ValueName: "{#AppName}"; \
  ValueData: """{app}\{#AppExe}"""; Flags: uninsdeletevalue; Tasks: autostart

[Run]
; Regla del firewall solo para redes privadas y de dominio (la mensajeria funciona en la red local)
Filename: "{sys}\netsh.exe"; Parameters: "advfirewall firewall delete rule name=""{#AppName}"" program=""{app}\{#AppExe}"""; \
  Flags: runhidden; Tasks: firewall
Filename: "{sys}\netsh.exe"; Parameters: "advfirewall firewall add rule name=""{#AppName}"" dir=in action=allow program=""{app}\{#AppExe}"" enable=yes profile=private,domain"; \
  Flags: runhidden; Tasks: firewall
Filename: "{app}\{#AppExe}"; Description: "{cm:LaunchProgram,{#AppName}}"; Flags: nowait postinstall skipifsilent runasoriginaluser

[UninstallRun]
Filename: "{sys}\netsh.exe"; Parameters: "advfirewall firewall delete rule name=""{#AppName}"" program=""{app}\{#AppExe}"""; \
  Flags: runhidden; RunOnceId: "BorrarReglaFirewall"
