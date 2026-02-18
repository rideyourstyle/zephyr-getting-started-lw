# zephyr-getting-started-lw

## How to start with zephyr (on linux/ubuntu)
This guide is based on the 'Getting started guide' for Zephyr v4.3.0 (https://docs.zephyrproject.org/4.3.0/develop/getting_started/index.html). With this guide, you will get a zephyr workspace (on tag `v4.3.0`) with the applications 'hello_world' and 'blinky' (on tag `setup-v4.3.0`). 

This setup clones only a minimal amount of zephyr modules. Additional modules can be enabled by extending the section `name-allowlist` in `west.yml` an the command `west update`. Therefore, we suggest to fork this repository to maintain your own `west.yml` file. 

The resulting workspace is called "T2: Star Topology" (https://docs.zephyrproject.org/4.3.0/develop/west/workspaces.html#t2-star-topology-application-is-the-manifest-repository) with multiple applications based on one `west.yml` file.
```
zephyr-workspace/
├── .west/
│   └── config
│
├── modules/
│   └── hal/
│       ├── cmsis_6/     # .git/ project cmsis_6
│       └── stm32/       # .git/ project stm32 hal
│
├── zephyr/              
│   ├── .git/            # git folder for zephyr @ tag v4.3.0
│   ...                  # zephyr files
│   └── west.yml
│
└── zephyr-firmware/
    ├── .git/  
    ├── applications
    │   ├── blinky/               
    │   │   ├── src/                         
    │   │   │   └── main.c    
    │   │   ├── CMakeLists.txt               
    │   │   └── prj.conf       
    │   └── hello_world/  
    │       ├── src/                         
    │       │   └── main.c    
    │       ├── CMakeLists.txt               
    │       └── prj.conf
    ├── README.md           # <-- you are reading here
    └── west.yml            # main manifest with optional import(s) and override(s)
```

### Host requirements
```shell
sudo apt update
sudo apt upgrade
sudo apt install --no-install-recommends git cmake ninja-build gperf \
  ccache dfu-util device-tree-compiler wget python3-dev python3-venv python3-tk \
  xz-utils file make gcc gcc-multilib g++-multilib libsdl2-dev libmagic1
```

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
west init -m https://github.com/rideyourstyle/zephyr-getting-started-lw.git --mr tag-1
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

### Applications
#### Blinky
```shell
cd zephyr
west build --pristine -b nucleo_l152re ../zephyr-firmware/applications/blinky
```

#### Hello World
```shell
cd zephyr
west build --pristine -b nucleo_l152re ../zephyr-firmware/applications/hello_world
```

#### Your Own Application
Link the existing sample applications, you can add your own application or play around with zephyr samples in `zephyr/samples`. Remember, most of those samples uses additional zephyr modules!

Have fun...


## More useful stuff
- Shell completion for west: https://docs.zephyrproject.org/4.3.0/develop/west/install.html#enabling-shell-completion
- 
