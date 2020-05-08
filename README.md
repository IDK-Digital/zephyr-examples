# DWM1001 & Zephyr
This project contains examples that show how to use the DWM1001 module together with Zephyr RTOS.
The examples that Decawave distributes along with their driver are adapted to work on the DWM1001-board.

These examples was made based on RT-LOC Repo in this [link](https://github.com/RT-LOC/zephyr-dwm1001) 

### Hardware
You will need at least one `DWM1001-dev` board and a `micro-USB` cable.

### Software
RT-LOC provide you the steps to install all necessary software:

- Building
  - CMake
  - `ninja`
  - `toolchain`
- Flashing
  - `nrfjprog`

#### Environment Variables

Once all necessary software installed, let's setup environment variables:

```
<Directory>\zephyr\zephyr-env.cmd # Initialize the environment variables
set GNUARMEMB_TOOLCHAIN_PATH=c:\gnuarmemb # Path for your toolchain
set ZEPHYR_TOOLCHAIN_VARIANT=gnuarmemb
```

### Zephyr 
Now that the development system is set up, we just need Zephyr and the examples itself. They are spread over two github repositories. You can start by downloading the Zephyr distribution that contains the DWM1001 BSP:

Download or clone the zephyr distribution: 
```
git clone https://github.com/RT-LOC/zephyr
```

Now change your active directory:
```
cd zephyr
```

Now source the script zephyr-env.sh (linux & macOS) or run zephyr-env.cmd to make sure all the environment variables are set correctly.

### Build your first application
The second github repository is the one that contains the specific DWM1001 example code.
Download or clone this repository to your local computer:

```
git clone https://github.com/RT-LOC/zephyr-dwm1001
```

Now that we have installed zephyr, we can start building the real examples.
We will proceed here with building the first simple example. Note that the procedure to follow for all the other examples is identical.

First let's create a build directory and jump to it.
```
cd simpleTX-RX\simpleTX
```
```
mkdir build
```
```
cd build
```
We configure the build system with Ninja as follows:
```
cmake -GNinja -DBOARD=nrf52_dwm1001 ..
```
And we actually build or firmware with ninja:
```
ninja
```


### Flash
Now let's flash the binary file that we just built onto the board. Make sure you have nrfjprog properly installed and that it is in the system PATH.

#### Erase the flash:
```
nrfjprog --family nrf52 --eraseall
```

#### Program the binary file on the board:
```
nrfjprog --family nrf52 --program zephyr/zephyr.hex
```

#### Perform a soft reset of the MCU:
```
nrfjprog --family nrf52 --reset
```

#### Below the sequence of commands to copy and paste
```
nrfjprog --family nrf52 --eraseall
nrfjprog --family nrf52 --program zephyr/zephyr.hex
nrfjprog --family nrf52 --reset
```
## Examples

**Attention: ** The examples consider that `zephyr-dwm1001` is a "brother" directory of ZEPHYR_BASE directory, if your `zephyr-dwm1001` was installed in another directory, you must change `CMakeList.txt` file and change the line above to reflect the correct directory:

```cmake
set(ZEPHYR_DWM1001_DIR ${ZEPHYR_BASE}/../zephyr-dwm1001/)
```

The following examples are provided:
 - Transmission - Reception Examples

     - Simple transmission (`simpleTX` directory)
- Transmission with Sleep (`TXWithSleep` directory)
     - Transmission with Timer Sleep (`TxTimerSleep` directory)
- Simple Reception (`simpleRX` directory)
     
- Single Sided TWR - Two Way Ranging (`SS-TWR` directory)
- Double Sided TWR - Two Way Ranging (`DS-TWR` directory)