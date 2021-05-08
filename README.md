## test_project

## Prerequisites
#### Software

* [SEGGER Embedded Studio IDE](https://www.segger.com/downloads/embedded-studio/).
* [Git Bash](https://git-scm.com/downloads).
* [nRF connect desktop app](https://www.nordicsemi.com/Software-and-tools/Development-Tools/nRF-Connect-for-desktop).
* nRF connect mobile app [Play Store](https://play.google.com/store/apps/details?id=no.nordicsemi.android.mcp), [App Store](https://apps.apple.com/us/app/nrf-connect/id1054362403).

#### Hardware
* nRF52840 based boards.
* nRF52840 DK.

## How to install

#### Compile from source

*  Clone this repository into your preferred location.
```
git clone https://github.com/rmptxf/test_project.git
```

* Project strcuture :

```
nRF5_SDK_17.0.2_d674dde
application
            components
            main
            pca10056
releases
.gitignore
README.md

#### SEGGER Embedded Studio
*  Open the ``.emProject`` project file in SEGGER Embedded Studio, which is found in:
```
application\pca10056\s140\ses
```
* Using the Build menu, Build and Run the application.