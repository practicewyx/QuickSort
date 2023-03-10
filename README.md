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

|Net Class|Net Name|nntc|mlir|
|:--:|:--:|:--:|:--:|
|1|2|3|4|

<table>
    <caption>vision</caption>
    <tr>
        <td>Net Class</td>
        <td>Net Name</td>
        <td><a href="https://www.runoob.com/markdown/md-link.html">nntc </td>
        <td>mlir</td>
    </tr>
</table>
<table>
    <caption>lagauage</caption>
    <tr>
        <td>Net Class</td>
        <td>Net Name</td>
        <td><a href="https://www.runoob.com/markdown/md-link.html">nntc </td>
        <td>mlir</td>
    </tr>
</table>

<table border=0 cellpadding=0 cellspacing=0 width=484 style='border-collapse:
 collapse;table-layout:fixed;width:364pt'>
 <col width=121 span=4 style='mso-width-source:userset;mso-width-alt:4295;
 width:91pt'>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td colspan=4 height=48 class=xl6330422 width=484 style='height:36.0pt;
  width:364pt'>vision</td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl6330422 style='height:36.0pt'>Net Class</td>
  <td class=xl6330422>Net Name</td>
  <td class=xl6330422>nntc</td>
  <td class=xl6330422>mlir</td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl6330422 style='height:36.0pt'>OCR</td>
  <td class=xl6330422><a href="https://github.com/practicewyx/QuickSort/blob/main1/README.md">CRNN</td>
  <td class=xl6330422>*</td>
  <td class=xl6330422>*</td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <![if supportMisalignedColumns]>
 <tr height=0 style='display:none'>
  <td width=121 style='width:91pt'></td>
  <td width=121 style='width:91pt'></td>
  <td width=121 style='width:91pt'></td>
  <td width=121 style='width:91pt'></td>
 </tr>
 <![endif]>
</table>

<div id="model_list_30422" align=center x:publishsource="Excel">

<table border=0 cellpadding=0 cellspacing=0 width=484 style='border-collapse:
 collapse;table-layout:fixed;width:364pt'>
 <col width=121 span=4 style='mso-width-source:userset;mso-width-alt:4295;
 width:91pt'>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td colspan=4 height=48 class=xl6530422 width=484 style='height:36.0pt;
  width:364pt'>vision</td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl6530422 style='height:36.0pt'>Net Class</td>
  <td class=xl6530422>Net Name</td>
  <td class=xl6530422>nntc</td>
  <td class=xl6530422>mlir</td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl6530422 style='height:36.0pt'>OCR</td>
  <td class=xl6530422>CRNN</td>
  <td class=xl6530422>*</td>
  <td class=xl6530422>*</td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <tr height=48 style='mso-height-source:userset;height:36.0pt'>
  <td height=48 class=xl1530422 style='height:36.0pt'></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
  <td class=xl1530422></td>
 </tr>
 <![if supportMisalignedColumns]>
 <tr height=0 style='display:none'>
  <td width=121 style='width:91pt'></td>
  <td width=121 style='width:91pt'></td>
  <td width=121 style='width:91pt'></td>
  <td width=121 style='width:91pt'></td>
 </tr>
 <![endif]>
</table>

</div>












