# Compila BeeBEEP para Windows 7/10/11 (32 bits) y arma la carpeta dist\BeeBEEP lista para copiar.
# Requisitos (una sola vez):
#   python -m pip install aqtinstall
#   python -m aqt install-qt windows desktop 5.15.2 win32_mingw81 -O C:\Qt
#   python -m aqt install-tool windows desktop tools_mingw qt.tools.win32_mingw810 -O C:\Qt
# Uso: powershell -ExecutionPolicy Bypass -File compilar-windows.ps1

$ErrorActionPreference = "Stop"
$Qt   = "C:\Qt\5.15.2\mingw81_32"
$Gcc  = "C:\Qt\Tools\mingw810_32\bin"
$Root = $PSScriptRoot
$Src  = Join-Path $Root "beebeep-code-r1612"
$Build = Join-Path $Root "build"
$Dist = Join-Path $Root "dist\BeeBEEP"
$env:PATH = "$Gcc;$Qt\bin;" + $env:PATH

New-Item -ItemType Directory -Force $Build | Out-Null
Push-Location $Build
& qmake "$Src\beebeep-desktop.pro" -spec win32-g++ "CONFIG+=release"
if ($LASTEXITCODE -ne 0) { throw "qmake fallo" }
& mingw32-make -j8
if ($LASTEXITCODE -ne 0) { throw "la compilacion fallo" }
Pop-Location

& lrelease "$Src\locale\beebeep_es.ts" -qm "$Src\locale\beebeep_es.qm"

if (Test-Path $Dist) { Remove-Item -Recurse -Force $Dist -Confirm:$false }
New-Item -ItemType Directory -Force $Dist | Out-Null
Copy-Item "$Src\test\beebeep.exe", "$Src\test\*.dll" $Dist
Copy-Item "$Src\locale\*.qm", "$Src\misc\beep.wav", "$Src\openssl\win32\*.dll" $Dist
foreach ($m in "Core","Gui","Widgets","Network","Xml","PrintSupport","Multimedia","Svg") { Copy-Item "$Qt\bin\Qt5$m.dll" $Dist }
Copy-Item "$Qt\bin\libEGL.dll", "$Qt\bin\libGLESv2.dll", "$Qt\bin\d3dcompiler_47.dll" $Dist
Copy-Item "$Gcc\libgcc_s_dw2-1.dll", "$Gcc\libstdc++-6.dll", "$Gcc\libwinpthread-1.dll" $Dist
$plugins = "platforms\qwindows.dll", "styles\qwindowsvistastyle.dll", "imageformats\qgif.dll", "imageformats\qico.dll",
           "imageformats\qjpeg.dll", "imageformats\qsvg.dll", "printsupport\windowsprintersupport.dll",
           "audio\qtaudio_windows.dll", "mediaservice\dsengine.dll", "mediaservice\qtmedia_audioengine.dll", "bearer\qgenericbearer.dll"
foreach ($p in $plugins) {
  $dest = Join-Path $Dist (Split-Path $p)
  New-Item -ItemType Directory -Force $dest | Out-Null
  Copy-Item "$Qt\plugins\$p" $dest
}
Write-Host "Listo: $Dist"
