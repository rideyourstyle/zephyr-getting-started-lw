# zephyr-getting-started-lw

## How to start with this repository

### Setup Python virtual environment
```shell
python3 -m venv .venv
. .venv/bin/activate
pip install west
```

### Setup workspace
```shell
mkdir zephyr-workspace
cd zephyr-workspace
west init -m https://github.com/rideyourstyle/zephyr-getting-started-lw.git
west update
```

### Install Python requirements
```shell
west packages pip --install
```

### Zephyr SDK
```shell
west sdk install
```

### Build application 'blinky'
```shell
cd zephyr
west build --pristine -b nucleo_l152re ../zephyr-firmware/applications/blinky
```

### Build application 'hello world'
```shell
cd zephyr
west build --pristine -b nucleo_l152re ../zephyr-firmware/applications/hello_world
```