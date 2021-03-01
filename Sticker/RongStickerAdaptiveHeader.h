//
//  RongStickerAdaptiveHeader.h
//  RongIMKit
//
//  Created by Sin on 2021/1/21.
//  Copyright © 2021 RongCloud. All rights reserved.
//
// 私有头文件，不能在 public 的 .h 中引用
#ifndef RongStickerAdaptiveHeader.h_h
#define RongStickerAdaptiveHeader.h_h

#if __has_include(<RongIMKit/RongIMKit.h>)

#import <RongIMKit/RongIMKit.h>

#else

#import "RongIMKit.h"

#endif

#endif /* RongStickerAdaptiveHeader.h_h */
