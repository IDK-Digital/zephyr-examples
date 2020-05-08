cmake_minimum_required(VERSION 3.13.1)
include($ENV{ZEPHYR_BASE}/cmake/app/boilerplate.cmake NO_POLICY_SCOPE)
project(zephyr-dwm1001)

set(ZEPHYR_DWM1001_DIR ${ZEPHYR_BASE}/../zephyr-dwm1001/)

add_definitions(-DSS_TWR_INIT)

target_sources(app PRIVATE ${ZEPHYR_DWM1001_DIR}main.c)
target_sources(app PRIVATE ss-twr-init.c)

target_sources(app PRIVATE ${ZEPHYR_DWM1001_DIR}decadriver/deca_device.c)
target_sources(app PRIVATE ${ZEPHYR_DWM1001_DIR}decadriver/deca_params_init.c)

target_sources(app PRIVATE ${ZEPHYR_DWM1001_DIR}platform/port.c)
target_sources(app PRIVATE ${ZEPHYR_DWM1001_DIR}platform/deca_mutex.c)
target_sources(app PRIVATE ${ZEPHYR_DWM1001_DIR}platform/deca_range_tables.c)
target_sources(app PRIVATE ${ZEPHYR_DWM1001_DIR}platform/deca_sleep.c)
target_sources(app PRIVATE ${ZEPHYR_DWM1001_DIR}platform/deca_spi.c)
target_sources(app PRIVATE ${ZEPHYR_DWM1001_DIR}platform/port.c)


target_include_directories(app PRIVATE ${ZEPHYR_DWM1001_DIR}decadriver/)
target_include_directories(app PRIVATE ${ZEPHYR_DWM1001_DIR}platform/)
target_include_directories(app PRIVATE ${ZEPHYR_DWM1001_DIR}compiler/)
