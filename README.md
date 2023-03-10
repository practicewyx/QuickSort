# Open Pre-Trained Models [![Test](https://github.com/sophgo/model-zoo/actions/workflows/ci.yml/badge.svg?event=schedule)](https://github.com/sophgo/model-zoo/actions/workflows/ci.yml)

## Usage - Compile and run

Install [tpu-perf](https://github.com/sophgo/tpu-perf) to build and run model cases.

```bash
# Time only cases
python3 -m tpu_perf.build --list default_cases.txt --time
python3 -m tpu_perf.run --list default_cases.txt

# Precision benchmark
python3 -m tpu_perf.build --list default_cases.txt
python3 -m tpu_perf.precision_benchmark --list default_cases.txt
```

## Usage - Git LFS

On default, cloning this repository will not download any models. Install
Git LFS with `pip install git-lfs`.

To download a specific model:
`git lfs pull --include="path/to/model" --exclude=""`

To download all models:
`git lfs pull --include="*" --exclude=""`

## Usage - Model visualization

You can see visualizations of each model's network architecture by using [Netron](https://github.com/lutzroeder/Netron).

## How to contribute

Please lint in your local repo before PR.

```bash
# Install tools
sudo npm install -g markdownlint-cli
pip3 install yamllint

yamllint -c ./.yaml-lint.yml .
markdownlint '**/*.md'
python3 .github/workflows/check.py
```

## Model statistics table

 The following are all models included in this project.

            vision
|Net Class|Net Name|nntc|mlir|
|:--:|:--:|:--:|:--:|
|1|2|3|4|
<!--
<table>
    <tr>
        <td>vision</td>
    </tr>
    <tr>
        <td>Net Class</td>
        <td>Net Name</td>
        <td>[runoob]</td>
        <td>mlir</td>
    </tr>
</table>

[nntc](https://www.runoob.com/markdown/md-link.html)

[runoob]: http://www.runoob.com/ -->












