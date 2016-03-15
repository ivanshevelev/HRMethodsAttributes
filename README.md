# HRMethodsAttributes

[![Version](https://img.shields.io/cocoapods/v/HRMethodsAttributes.svg?style=flat)](http://cocoapods.org/pods/HRMethodsAttributes)
[![License](https://img.shields.io/cocoapods/l/HRMethodsAttributes.svg?style=flat)](http://cocoapods.org/pods/HRMethodsAttributes)
[![Platform](https://img.shields.io/cocoapods/p/HRMethodsAttributes.svg?style=flat)](http://cocoapods.org/pods/HRMethodsAttributes)

HRMethodsAttributes is a simple defines wrapper on __attribute().

## Usage

Deprecated:

```objective-c
-(void)doSomething DEPRECATED;
```

Deprecated with reason:

```objective-c
-(void)makeMeCool DEPRECATED_REASON("'cause, lol");
```

Unavailable:

```objective-c
-(void)dSomething UNAVAILABLE;
```

Unavailable with reason:

```objective-c
-(void)doSomethingElse UNAVAILABLE_REASON("Old method. Use -doSmthngElse: instead");
```

## Requirements

Objective-C and iOS 7.1 or higher.

## Installation

HRMethodsAttributes is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod 'HRMethodsAttributes'
```

## Author

Ivan Shevelev, ivan.shevelev@sibers.com

## License

HRMethodsAttributes is available under the MIT license. See the LICENSE file for more info.
