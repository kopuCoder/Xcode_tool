#! /bin/bash

cd ~/Library/Developer/Xcode/DerivedData
rm -rf *
echo "DerivedData folder has been cleared..."

#清理掉平时打包产生的 项目名称.xcarchive 文件
cd ~/Library/Developer/Xcode/Archives
rm -rf *
echo "Archives folder has been cleared..."
