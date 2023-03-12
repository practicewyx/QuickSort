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
        <td colspan="4"> <img width=200/>vision</td>
    </tr>
    <tr>
        <td>Net Class</td>
        <td>Net Name</td>
        <td>nntc </td>
        <td>mlir</td>
    </tr>
    <tr>
        <td>GAN</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/GAN/cyclegan">cyclegan</td>
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
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/OCR/PP-OCRv3cls">PP-OCRv3cls</td>
        <td>*</td>
        <td>*</td>
    </tr>
    <tr>
        <td>OCR</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/OCR/PP-OCRv3det">PP-OCRv3det</td>
        <td>*</td>
        <td>*</td>
    </tr>
    <tr>
        <td>OCR</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/OCR/PP-OCRv3rec">PP-OCRv3rec </td>
        <td>*</td>
        <td>*</td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/AlexNet-Caffe">AlexNet-Caffe</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/DenseNet-Caffe">DenseNet-Caffe</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/ECANet-Torch">ECANet-Torch</td>
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
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/HRNet-Torch">HRNet-Torch</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/InceptionBN-21k-for-Caffe">InceptionBN-21k-for-Caffe</td>
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
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/MobileNet-Caffe-v1">MobileNet-Caffe-v1</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/MobileNet-Caffe-v2">MobileNet-Caffe-v2</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/MobileNet-Caffe-v3">MobileNet-Caffe-v3</td>
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
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/ResNet50-Caffe">ResNet50-Caffe</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/ResNet50_vd_paddle">ResNet50_vd_paddle</td>
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
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/dpn68">dpn68</td>
        <td>*</td>
        <td>*</td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/efficientnet-lite4">efficientnet-lite4</td>
        <td></td>
        <td>*</td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/efficientnetv2">efficientnetv2</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/inception_resnet_v2">inception_resnet_v2</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/inception_v1">inception_v1</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/inception_v3">inception_v3</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/inception_v4">inception_v4</td>
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
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/mobilenet-v2">mobilenet-v2</td>
        <td></td>
        <td>*</td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/resnet18-v2">resnet18-v2</td>
        <td></td>
        <td>*</td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/resnet50-v2">resnet50-v2</td>
        <td></td>
        <td>*</td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/shufflenet_v2">shufflenet_v2</td>
        <td></td>
        <td>*</td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/shufflenet_v2_torch">shufflenet_v2_torch</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/squeezenet1.0">squeezenet1.0</td>
        <td></td>
        <td>*</td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/vgg11-torch">vgg11-torch</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/vgg16">vgg16</td>
        <td></td>
        <td>*</td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/vgg19">vgg19</td>
        <td>*</td>
        <td></td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/wrn50">wrn50</td>
        <td>*</td>
        <td>*</td>
    </tr>
    <tr>
        <td>classification</td>
        <td><a href="https://github.com/sophgo/model-zoo/tree/main/vision/classification/xception">xception</td>
        <td>*</td>
        <td></td>
    </tr>


</table>

