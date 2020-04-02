@echo off
cmake .. -GNinja -DBOARD=nrf52_dwm1001
@echo Executing Post Build commands ...
@ninja
@echo Done
