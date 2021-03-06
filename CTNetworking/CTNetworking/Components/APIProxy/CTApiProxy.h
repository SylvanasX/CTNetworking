//
//  AXApiProxy.h
//  RTNetworking
//
//  Created by casa on 14-5-12.
//  Copyright (c) 2014年 casatwy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CTURLResponse.h"

extern NSString * const kAXApiProxyValidateResultKeyResponseContentRawDict;

extern NSString * const kAXApiProxyValidateResultKeyResponseString;
extern NSString * const kAXApiProxyValidateResultKeyResponseContent;

extern NSString * const kAXApiProxyValidateResultKeyResponseContentResCode;
extern NSString * const kAXApiProxyValidateResultKeyResponseContentObj;
extern NSString * const kAXApiProxyValidateResultKeyResponseString;

typedef void(^AXCallback)(CTURLResponse *response);

@interface CTApiProxy : NSObject

+ (instancetype)sharedInstance;

- (NSNumber *)callApiWithRequest:(NSURLRequest *)request success:(AXCallback)success fail:(AXCallback)fail;
- (void)cancelRequestWithRequestID:(NSNumber *)requestID;
- (void)cancelRequestWithRequestIDList:(NSArray *)requestIDList;

@end
