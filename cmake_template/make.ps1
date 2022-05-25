chcp 65001
$now_path = Split-Path $MyInvocation.MyCommand.Path
echo "START...`n"

mkdir -Force build
cd build
cmake -G "MinGW Makefiles" ..
make 
./main.exe

echo "`n"
echo "END..."
Pause