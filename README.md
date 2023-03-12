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

<table>
    <tr>
        <td colspan="4"> <img width=100/>vision</td>
    </tr>
    <tr>
        <td>Net Class</td>
        <td>Net Name</td>
        <td><a href="https://www.runoob.com/markdown/md-link.html">nntc </td>
        <td>mlir</td>
    </tr>
    <tr>
        <td>GAN</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/GAN/cyclegan">cyclegan_horse2zebra</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>OCR</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/OCR/CRNN">CRNN</td>
        <td>*</td>
        <td>*</td>
    </tr>
    <tr>
        <td>OCR</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/OCR/PP-OCRv3cls">ch-PP-OCRv3-Direction classifier</td>
        <td>*</td>
        <td>*</td>
    </tr>
    <tr>
        <td>OCR</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/OCR/PP-OCRv3det">ch-PP-OCRv3-Detection </td>
        <td>*</td>
        <td>*</td>
    </tr>
    <tr>
        <td>OCR</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/OCR/PP-OCRv3rec">ch-PP-OCRv3-Recognition </td>
        <td>*</td>
        <td>*</td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/AlexNet-Caffe">AlexNet </td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/DenseNet-Caffe">DenseNet </td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/ECANet-Torch">ECANet </td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/EfficientNet-B0">EfficientNet-B0 </td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/EfficientNet-B1">EfficientNet-B1 </td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/EfficientNet-B4">EfficientNet-B4 </td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/EfficientNet-B5">EfficientNet-B5 </td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/EfficientNet-B7">EfficientNet-B7 </td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/HRNet-Torch">HRNet </td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/InceptionBN-21k-for-Caffe">Inception_v2 </td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/LeNet">LeNet </td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/MobileNet-Caffe-v1">MobileNet_v1 </td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/MobileNet-Caffe-v2">MobileNet_v2 </td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/MobileNet-Caffe-v3">MobileNet_v3 </td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/ResNeXt">ResNeXt</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/ResNeXt50">ResNeXt50</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/ResNet34">ResNet34</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/ResNet50-Caffe">ResNet-50</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/ResNet50_vd_paddle">ResNet50-vd</td>
        <td></td>
        <td>*</td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/SqueezeNet">SqueezeNet</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/dpn68">Dpn68</td>
        <td>*</td>
        <td>*</td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/efficientnet-lite4">EfficientNet-Lite4</td>
        <td></td>
        <td>*</td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/efficientnetv2">EfficientNetV2</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/inception_resnet_v2">Inception-resnet-v2</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/inception_v1">Inception_v1</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/inception_v3">Inception_v3</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/inception_v4">Inception_v4</td>
        <td>*</td>
        <td>*</td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/mm_resnet50">mm_resnet50</td>
        <td>*</td>
        <td>*</td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/mm_resnet50">mm_resnet50</td>
        <td>*</td>
        <td>*</td>
    </tr>



</table>

