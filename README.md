# Library for testing the performance of various convolution algorithms that are part of convolutional neural networks

[This](https://github.com/nvdix/CNN_perf) comprehensive framework designed to serve as a robust tool for various teams involved in developing architectures for convolutional neural networks. This framework acts not only as a measuring tool for evaluating the performance of convolutional operations across different data types and processor instructions but also as a platform to accelerate the synthesis of new architectures during the design process.

**Features and Applications:** \
1.Performance Calculation: This tool enables the calculation of the performance of convolutional operations in a neural network, including the evaluation of individual layers.\
2.Data and Processor Support: Our framework supports various data types and vector processor instructions, facilitating the optimization of work in convolutional layers of neural networks.\
3.Algorithm Testing and Verification: Users can test and verify the correctness of convolutional algorithms, ensuring the reliability and efficiency of neural network models.\
4.Presets: The framework comes equipped with presets of the most requested neural networks, making it easier for developers to get started on projects.\
5.Expandability: Designed with flexibility in mind, the framework has the capability to expand to other processors, accommodating a broad range of hardware platforms.\
6.Educational Use: This tool is also valuable for educational purposes, allowing users to understand how convolutions work in neural networks and how they can be optimized.

By offering these features and applications, the framework aims to provide a versatile solution for developers and researchers in the field of AI, particularly those focused on convolutional neural networks.

**RUNNING LOCALLY**\
**Step 1 – Install dependencies**\
sudo apt install build-essential\
sudo apt install cmake\
sudo apt install git

**Step 2 – Create and change directory**\
mkdir testing\
cd testing

**Step 3 – Clone the project repository and move to the release branch**\
git clone https://github.com/nvdix/CNN_perf.git \
cd CNN_perf

**Step 4 – Clone json library repository**\
mkdir 3rdparty\
cd 3rdparty\
git clone https://github.com/nlohmann/json.git \
cd ..

**Step 5 – Build the project**\
mkdir build\
cd build\
cmake ..\
make

**Step 6 – The convbench executable file will appear in the build project directory**

**Step 7 - To run the program, you must execute the command**\
./convbench -f=1

**LICENSE**\
The software is available under the [MIT](https://github.com/nvdix/CNN_perf/blob/release/LICENSE.pdf) License.

**CONTACT**\
If you have any questions, feel free to [open an issue](https://github.com/nvdix/CNN_perf/tree/release)
