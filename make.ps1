$now_path = Split-Path $MyInvocation.MyCommand.Path
echo "START...`n`n"

mkdir -Force build
cd build
cmake -G "MinGW Makefiles" ..
make 
./main.exe


echo "`n`n"
echo "END..."
Pause