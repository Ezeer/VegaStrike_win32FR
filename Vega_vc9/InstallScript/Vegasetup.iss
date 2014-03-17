; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define MyAppName "Vegastrike"
#define MyAppVersion "0.5.1.13139"
#define MyAppPublisher "VegaStrike Project"
#define MyAppURL "http://vegastrike.sourceforge.net"
#define MyAppExeName "vegastrike.exe"

[Setup]
; NOTE: The value of AppId uniquely identifies this application.
; Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{C3A869E2-B643-479C-BB33-57A981F99F7A}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
;AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={pf}\{#MyAppName}
DefaultGroupName={#MyAppName}
AllowNoIcons=yes
OutputBaseFilename=VSSetup 0.5.1 beta 1
SetupIconFile=E:\SCM\VegaStrike\vegastrike\icon4.ico
Compression=lzma
SolidCompression=yes

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked
Name: "quicklaunchicon"; Description: "{cm:CreateQuickLaunchIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked; OnlyBelowVersion: 0,6.1

[Files]
Source: "E:\SCM\VegaStrike\Install\vegastrike.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\expat.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\gdk-1.3.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\glib-1.3.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\glut32.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\gmodule-1.3.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\gnu-intl.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\gtk-1.3.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\iconv-1.3.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\mesher.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\normal_mapping.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\oalinst.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\OpenAL32.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\python25.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\python26.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\python26_d.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\SDL.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\setup.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\vcredist_x86.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\vegaserver.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\vegastrike.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\vegastrike.exe.manifest"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\wrap_oal.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\xmlparse.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "E:\SCM\VegaStrike\Install\data\*"; DestDir: "{app}"; Flags: ignoreversion recursesubdirs createallsubdirs
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Icons]
Name: "{group}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"
Name: "{group}\{cm:ProgramOnTheWeb,{#MyAppName}}"; Filename: "{#MyAppURL}"
Name: "{group}\{cm:UninstallProgram,{#MyAppName}}"; Filename: "{uninstallexe}"
Name: "{commondesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon
Name: "{userappdata}\Microsoft\Internet Explorer\Quick Launch\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: quicklaunchicon

[Run]
Filename: "{app}\vcredist_x86.exe"; Description: "MS Visual C++ 2008 runtime files"; StatusMsg: "Installing Visual C++ 9 Runtime Files..."; Flags: nowait
Filename: "{app}\oalinst.exe"; Description: "Creative Labs OpenAL Runtime Files"; StatusMsg: "Installing OpenAL Runtime Files..."; Flags: nowait
Filename: "{app}\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, "&", "&&")}}"; Flags: nowait postinstall skipifsilent
