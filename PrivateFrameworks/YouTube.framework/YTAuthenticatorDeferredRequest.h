/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableURLRequest;

@interface YTAuthenticatorDeferredRequest : NSObject
{
    NSMutableURLRequest *_request;
    BOOL _accountAuthRequired;
}

- (BOOL)accountAuthRequired;
- (void)setAccountAuthRequired:(BOOL)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (void)dealloc;

@end

