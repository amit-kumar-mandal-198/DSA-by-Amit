Set WshShell = CreateObject("WScript.Shell")
WshShell.Run "powershell.exe -WindowStyle Hidden -ExecutionPolicy Bypass -File ""d:\Hacker\DSA\auto_push.ps1""", 0, False
Set WshShell = Nothing
