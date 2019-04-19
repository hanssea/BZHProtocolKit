# BZHProtocol

[![CI Status](https://img.shields.io/travis/hanssea/BZHProtocol.svg?style=flat)](https://travis-ci.org/hanssea/BZHProtocol)
[![Version](https://img.shields.io/cocoapods/v/BZHProtocol.svg?style=flat)](https://cocoapods.org/pods/BZHProtocol)
[![License](https://img.shields.io/cocoapods/l/BZHProtocol.svg?style=flat)](https://cocoapods.org/pods/BZHProtocol)
[![Platform](https://img.shields.io/cocoapods/p/BZHProtocol.svg?style=flat)](https://cocoapods.org/pods/BZHProtocol)

## 小例子

To run the example project, clone the repo, and run `pod install` from the Example directory first.


## 安装

BZHProtocol is available through [CocoaPods](https://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod 'BZHProtocol'
```

## 版本更新说明
```
V0.1.0, 
1、增加两个协议:
  (a)BZHViewModelProtocol: 作用于 viewModel
  (b)BZHViewProtocol: 作用于 view
  具体方法调用可以参考API 具体实现要分散到具体业务
2、增加一个分类
  (a)UIView+BZHConfig:该分类遵守了BZHViewProtocol协议 对于所有view都可以使用BZHViewProtocol方法
```

## 后续
```
此套协议持续开发中，后续会增加丰富的功能，欢迎您和笔者一起为这个协议方案做出更多贡献。
```

## 作者
```
hanssea, 
hanssea09@gmail.com
```
