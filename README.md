# zephyr-getting-started-lw

## How to start with this repository

### Setup Python virtual environment

```bash
python3 -m venv .venv
. .venv/bin/activate
pip install west
```



### Setup workspace

```bash
mkdir zephyr-workspace
cd zephyr-workspace
west init -m https://github.com/rideyourstyle/zephyr-getting-started-lw.git
west update
```


### Install Python requirements

pip install -r zephyr/scripts/requirements.txt
